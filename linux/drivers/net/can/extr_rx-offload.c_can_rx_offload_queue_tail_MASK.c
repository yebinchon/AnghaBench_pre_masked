
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct can_rx_offload {scalar_t__ skb_queue_len_max; int skb_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct can_rx_offload*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;

int FUNC_4(struct can_rx_offload *VAR_1,
         struct sk_buff *VAR_2)
{
 if (FUNC_2(&VAR_1->skb_queue) >
     VAR_1->skb_queue_len_max) {
  FUNC_1(VAR_2);
  return -VAR_0;
 }

 FUNC_3(&VAR_1->skb_queue, VAR_2);
 FUNC_0(VAR_1);

 return 0;
}
