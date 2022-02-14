
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct korina_private {int ** tx_skb; TYPE_2__* td_ring; int ** rx_skb; TYPE_1__* rd_ring; } ;
struct TYPE_4__ {scalar_t__ control; } ;
struct TYPE_3__ {scalar_t__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct korina_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct korina_private *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3->rd_ring[VAR_4].control = 0;
  if (VAR_3->rx_skb[VAR_4])
   FUNC_0(VAR_3->rx_skb[VAR_4]);
  VAR_3->rx_skb[VAR_4] = ((void*)0);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3->td_ring[VAR_4].control = 0;
  if (VAR_3->tx_skb[VAR_4])
   FUNC_0(VAR_3->tx_skb[VAR_4]);
  VAR_3->tx_skb[VAR_4] = ((void*)0);
 }
}
