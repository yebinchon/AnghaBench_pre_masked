
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct can_priv {unsigned int echo_skb_max; int ** echo_skb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct can_priv* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_0, unsigned int VAR_1)
{
 struct can_priv *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_1 >= VAR_2->echo_skb_max);

 if (VAR_2->echo_skb[VAR_1]) {
  FUNC_1(VAR_2->echo_skb[VAR_1]);
  VAR_2->echo_skb[VAR_1] = ((void*)0);
 }
}
