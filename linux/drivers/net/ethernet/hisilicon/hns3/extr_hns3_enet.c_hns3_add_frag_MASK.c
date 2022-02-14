
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data_len; int truesize; struct sk_buff* next; } ;
struct hns3_enet_ring {int next_to_clean; int desc_num; scalar_t__ frag_num; int pending_buf; struct sk_buff* tail_skb; TYPE_1__* tqp_vector; struct hns3_desc_cb* desc_cb; struct hns3_desc* desc; } ;
struct hns3_desc_cb {int dummy; } ;
struct TYPE_6__ {int size; int bd_base_info; } ;
struct hns3_desc {TYPE_2__ rx; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {struct sk_buff* frag_list; } ;
struct TYPE_5__ {TYPE_4__ napi; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct hns3_enet_ring*) ;
 int FUNC_3 (struct sk_buff*,int ,struct hns3_enet_ring*,int ,struct hns3_desc_cb*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct sk_buff* FUNC_7 (TYPE_4__*,int ) ;
 int VAR_5 ;
 int FUNC_8 (struct hns3_enet_ring*,int ) ;
 TYPE_3__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct hns3_enet_ring *VAR_6, struct hns3_desc *VAR_7,
    struct sk_buff **VAR_8, bool VAR_9)
{
 struct sk_buff *VAR_10 = *VAR_8;
 struct sk_buff *VAR_11 = *VAR_8;
 struct sk_buff *VAR_12;
 struct hns3_desc_cb *VAR_13;
 struct hns3_desc *VAR_14;
 u32 VAR_15;
 int VAR_16;




 if (VAR_9) {
  VAR_16 = (VAR_6->next_to_clean - 1 + VAR_6->desc_num) %
    VAR_6->desc_num;
  VAR_14 = &VAR_6->desc[VAR_16];
  VAR_15 = FUNC_6(VAR_14->rx.bd_base_info);
 } else {
  VAR_15 = FUNC_6(VAR_7->rx.bd_base_info);
 }

 while (!(VAR_15 & FUNC_0(VAR_1))) {
  VAR_7 = &VAR_6->desc[VAR_6->next_to_clean];
  VAR_13 = &VAR_6->desc_cb[VAR_6->next_to_clean];
  VAR_15 = FUNC_6(VAR_7->rx.bd_base_info);

  FUNC_1();
  if (!(VAR_15 & FUNC_0(VAR_2)))
   return -VAR_0;

  if (FUNC_10(VAR_6->frag_num >= VAR_4)) {
   VAR_12 = FUNC_7(&VAR_6->tqp_vector->napi,
       VAR_3);
   if (FUNC_10(!VAR_12)) {
    FUNC_4(VAR_6->tqp_vector->napi.dev,
         "alloc rx fraglist skb fail\n");
    return -VAR_0;
   }
   VAR_6->frag_num = 0;

   if (VAR_6->tail_skb) {
    VAR_6->tail_skb->next = VAR_12;
    VAR_6->tail_skb = VAR_12;
   } else {
    FUNC_9(VAR_10)->frag_list = VAR_12;
    VAR_6->tail_skb = VAR_12;
   }
  }

  if (VAR_6->tail_skb) {
   VAR_11->truesize += FUNC_2(VAR_6);
   VAR_11->data_len += FUNC_5(VAR_7->rx.size);
   VAR_11->len += FUNC_5(VAR_7->rx.size);
   VAR_10 = VAR_6->tail_skb;
  }

  FUNC_3(VAR_10, VAR_6->frag_num++, VAR_6, 0, VAR_13);
  FUNC_8(VAR_6, VAR_5);
  VAR_6->pending_buf++;
 }

 return 0;
}
