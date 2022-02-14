
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sw_rx_data {int mapping; int page_offset; } ;
struct qede_rx_queue {size_t sw_rx_cons; scalar_t__ rx_headroom; struct sw_rx_data* sw_rx_ring; struct qede_agg_info* tpa_info; } ;
struct qede_dev {int dummy; } ;
struct TYPE_3__ {int mapping; int page_offset; } ;
struct qede_agg_info {int tpa_start_fail; int vlan_tag; void* state; int skb; scalar_t__ frag_id; TYPE_1__ buffer; } ;
struct TYPE_4__ {int flags; } ;
struct eth_fast_path_rx_tpa_start_cqe {size_t tpa_agg_index; int len_on_first_bd; int vlan_tag; int* ext_bd_len_list; int rss_hash; int bitfields; TYPE_2__ pars_flags; scalar_t__ placement_offset; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int FUNC_1 (struct qede_dev*,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct qede_dev*,struct qede_rx_queue*,size_t,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct qede_rx_queue*) ;
 int FUNC_7 (struct qede_dev*,int ,struct eth_fast_path_rx_tpa_start_cqe*) ;
 int FUNC_8 (struct qede_dev*,struct qede_rx_queue*,struct sw_rx_data*,int,scalar_t__,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct qede_dev *VAR_5,
      struct qede_rx_queue *VAR_6,
      struct eth_fast_path_rx_tpa_start_cqe *VAR_7)
{
 struct qede_agg_info *VAR_8 = &VAR_6->tpa_info[VAR_7->tpa_agg_index];
 struct sw_rx_data *VAR_9;
 u16 VAR_10;

 VAR_9 = &VAR_6->sw_rx_ring[VAR_6->sw_rx_cons & VAR_0];
 VAR_10 = VAR_7->placement_offset + VAR_6->rx_headroom;

 VAR_8->skb = FUNC_8(VAR_5, VAR_6, VAR_9,
           FUNC_2(VAR_7->len_on_first_bd),
           VAR_10, 0);
 VAR_8->buffer.page_offset = VAR_9->page_offset;
 VAR_8->buffer.mapping = VAR_9->mapping;

 if (FUNC_9(!VAR_8->skb)) {
  FUNC_1(VAR_5, "Failed to allocate SKB for gro\n");





  VAR_8->tpa_start_fail = 1;
  FUNC_6(VAR_6);
  VAR_8->state = VAR_3;
  goto cons_buf;
 }

 VAR_8->frag_id = 0;
 VAR_8->state = VAR_4;

 if ((FUNC_2(VAR_7->pars_flags.flags) >>
      VAR_2) &
     VAR_1)
  VAR_8->vlan_tag = FUNC_2(VAR_7->vlan_tag);
 else
  VAR_8->vlan_tag = 0;

 FUNC_5(VAR_8->skb, VAR_7->bitfields, VAR_7->rss_hash);


 FUNC_7(VAR_5, VAR_8->skb, VAR_7);

cons_buf:
 if (FUNC_3(VAR_7->ext_bd_len_list[0]))
  FUNC_4(VAR_5, VAR_6, VAR_7->tpa_agg_index,
       FUNC_2(VAR_7->ext_bd_len_list[0]));

 if (FUNC_9(VAR_7->ext_bd_len_list[1])) {
  FUNC_0(VAR_5,
         "Unlikely - got a TPA aggregation with more than one ext_bd_len_list entry in the TPA start\n");
  VAR_8->state = VAR_3;
 }
}
