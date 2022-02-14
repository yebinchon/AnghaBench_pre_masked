
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct TYPE_10__ {int seg_pkt_cnt; int sw_err_cnt; } ;
struct hns3_enet_ring {size_t next_to_clean; int pending_buf; unsigned int pull_len; scalar_t__ frag_num; int syncp; TYPE_5__ stats; int * tail_skb; struct sk_buff* skb; TYPE_4__* tqp_vector; TYPE_3__* tqp; struct hns3_desc_cb* desc_cb; } ;
struct hns3_desc_cb {int reuse_flag; int priv; } ;
struct TYPE_9__ {int napi; } ;
struct TYPE_8__ {TYPE_2__* handle; } ;
struct TYPE_6__ {struct net_device* netdev; } ;
struct TYPE_7__ {TYPE_1__ kinfo; } ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_2 (struct net_device*,unsigned char*,unsigned int) ;
 int FUNC_3 (struct sk_buff*,int ,struct hns3_enet_ring*,unsigned int,struct hns3_desc_cb*) ;
 int FUNC_4 (struct net_device*,char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,unsigned char*,int ) ;
 struct sk_buff* FUNC_7 (int *,unsigned int) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct hns3_enet_ring*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct hns3_enet_ring *VAR_4, unsigned int VAR_5,
     unsigned char *VAR_6)
{

 struct hns3_desc_cb *VAR_7 = &VAR_4->desc_cb[VAR_4->next_to_clean];
 struct net_device *VAR_8 = VAR_4->tqp->handle->kinfo.netdev;
 struct sk_buff *VAR_9;

 VAR_4->skb = FUNC_7(&VAR_4->tqp_vector->napi, VAR_2);
 VAR_9 = VAR_4->skb;
 if (FUNC_15(!VAR_9)) {
  FUNC_4(VAR_8, "alloc rx skb fail\n");

  FUNC_13(&VAR_4->syncp);
  VAR_4->stats.sw_err_cnt++;
  FUNC_14(&VAR_4->syncp);

  return -VAR_0;
 }

 FUNC_10(VAR_9->data);

 VAR_4->pending_buf = 1;
 VAR_4->frag_num = 0;
 VAR_4->tail_skb = ((void*)0);
 if (VAR_5 <= VAR_2) {
  FUNC_6(FUNC_1(VAR_9, VAR_5), VAR_6, FUNC_0(VAR_5, sizeof(long)));


  if (FUNC_5(FUNC_9(VAR_7->priv) == FUNC_8()))
   VAR_7->reuse_flag = 1;
  else
   FUNC_11(VAR_7->priv);

  FUNC_12(VAR_4, VAR_3);
  return 0;
 }
 FUNC_13(&VAR_4->syncp);
 VAR_4->stats.seg_pkt_cnt++;
 FUNC_14(&VAR_4->syncp);

 VAR_4->pull_len = FUNC_2(VAR_8, VAR_6, VAR_2);
 FUNC_1(VAR_9, VAR_4->pull_len);
 FUNC_3(VAR_9, VAR_4->frag_num++, VAR_4, VAR_4->pull_len,
       VAR_7);
 FUNC_12(VAR_4, VAR_3);

 return 1;
}
