
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int tx_aborted_errors; int tx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_priv {int echo_skb_max; int ** echo_skb; } ;


 int FUNC_0 (int *) ;
 struct can_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct can_priv *VAR_1 = FUNC_1(VAR_0);
 struct net_device_stats *VAR_2 = &VAR_0->stats;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->echo_skb_max; VAR_3++) {
  if (VAR_1->echo_skb[VAR_3]) {
   FUNC_0(VAR_1->echo_skb[VAR_3]);
   VAR_1->echo_skb[VAR_3] = ((void*)0);
   VAR_2->tx_dropped++;
   VAR_2->tx_aborted_errors++;
  }
 }
}
