
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct can_rx_offload {int skb_queue; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct can_rx_offload*,int ) ;
 int FUNC_2 (struct can_rx_offload*) ;
 int FUNC_3 (int *,struct sk_buff*) ;

int FUNC_4(struct can_rx_offload *VAR_0)
{
 struct sk_buff *VAR_1;
 int VAR_2 = 0;

 while (1) {
  VAR_1 = FUNC_1(VAR_0, 0);
  if (FUNC_0(VAR_1))
   continue;
  if (!VAR_1)
   break;

  FUNC_3(&VAR_0->skb_queue, VAR_1);
  VAR_2++;
 }

 if (VAR_2)
  FUNC_2(VAR_0);

 return VAR_2;
}
