
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int ip_summed; int protocol; } ;
struct qede_rx_queue {int data_direction; int dev; struct qede_agg_info* tpa_info; } ;
struct qede_fastpath {struct qede_rx_queue* rxq; } ;
struct qede_dev {int ndev; } ;
struct TYPE_3__ {scalar_t__ page_offset; int mapping; } ;
struct qede_agg_info {scalar_t__ state; scalar_t__ frag_id; int tpa_start_fail; struct sk_buff* skb; TYPE_1__ buffer; int vlan_tag; } ;
struct eth_fast_path_rx_tpa_end_cqe {size_t tpa_agg_index; scalar_t__ num_of_bds; scalar_t__ num_of_coalesced_segs; scalar_t__ total_packet_len; scalar_t__* len_list; } ;
struct TYPE_4__ {scalar_t__ count; } ;


 int VAR_0 ;
 int FUNC_0 (struct qede_dev*,char*,...) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct qede_dev*,struct qede_rx_queue*,size_t,scalar_t__) ;
 int FUNC_7 (struct qede_dev*,struct qede_fastpath*,struct sk_buff*,int ) ;
 int FUNC_8 (struct qede_rx_queue*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct qede_dev *VAR_4,
   struct qede_fastpath *VAR_5,
   struct eth_fast_path_rx_tpa_end_cqe *VAR_6)
{
 struct qede_rx_queue *VAR_7 = VAR_5->rxq;
 struct qede_agg_info *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10;

 VAR_8 = &VAR_7->tpa_info[VAR_6->tpa_agg_index];
 VAR_9 = VAR_8->skb;

 if (VAR_8->buffer.page_offset == VAR_1)
  FUNC_3(VAR_7->dev, VAR_8->buffer.mapping,
          VAR_1, VAR_7->data_direction);

 for (VAR_10 = 0; VAR_6->len_list[VAR_10]; VAR_10++)
  FUNC_6(VAR_4, VAR_7, VAR_6->tpa_agg_index,
       FUNC_5(VAR_6->len_list[VAR_10]));
 if (FUNC_9(VAR_10 > 1))
  FUNC_0(VAR_4,
         "Strange - TPA emd with more than a single len_list entry\n");

 if (FUNC_9(VAR_8->state != VAR_3))
  goto err;


 if (FUNC_9(VAR_6->num_of_bds != VAR_8->frag_id + 1))
  FUNC_0(VAR_4,
         "Strange - TPA had %02x BDs, but SKB has only %d frags\n",
         VAR_6->num_of_bds, VAR_8->frag_id);
 if (FUNC_9(VAR_9->len != FUNC_5(VAR_6->total_packet_len)))
  FUNC_0(VAR_4,
         "Strange - total packet len [cqe] is %4x but SKB has len %04x\n",
         FUNC_5(VAR_6->total_packet_len), VAR_9->len);


 VAR_9->protocol = FUNC_4(VAR_9, VAR_4->ndev);
 VAR_9->ip_summed = VAR_0;




 FUNC_1(VAR_9)->count = FUNC_5(VAR_6->num_of_coalesced_segs);

 FUNC_7(VAR_4, VAR_5, VAR_9, VAR_8->vlan_tag);

 VAR_8->state = VAR_2;

 return 1;
err:
 VAR_8->state = VAR_2;

 if (VAR_8->tpa_start_fail) {
  FUNC_8(VAR_7, &VAR_8->buffer);
  VAR_8->tpa_start_fail = 0;
 }

 FUNC_2(VAR_8->skb);
 VAR_8->skb = ((void*)0);
 return 0;
}
