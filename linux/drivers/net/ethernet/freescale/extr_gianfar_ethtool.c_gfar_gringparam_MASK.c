
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gfar_private {struct gfar_priv_rx_q** rx_queue; struct gfar_priv_tx_q** tx_queue; } ;
struct gfar_priv_tx_q {int tx_ring_size; } ;
struct gfar_priv_rx_q {int rx_ring_size; } ;
struct ethtool_ringparam {int tx_pending; int rx_jumbo_pending; int rx_mini_pending; int rx_pending; int tx_max_pending; void* rx_jumbo_max_pending; void* rx_mini_max_pending; void* rx_max_pending; } ;


 void* VAR_0 ;
 int VAR_1 ;
 struct gfar_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
       struct ethtool_ringparam *VAR_3)
{
 struct gfar_private *VAR_4 = FUNC_0(VAR_2);
 struct gfar_priv_tx_q *VAR_5 = ((void*)0);
 struct gfar_priv_rx_q *VAR_6 = ((void*)0);

 VAR_5 = VAR_4->tx_queue[0];
 VAR_6 = VAR_4->rx_queue[0];

 VAR_3->rx_max_pending = VAR_0;
 VAR_3->rx_mini_max_pending = VAR_0;
 VAR_3->rx_jumbo_max_pending = VAR_0;
 VAR_3->tx_max_pending = VAR_1;




 VAR_3->rx_pending = VAR_6->rx_ring_size;
 VAR_3->rx_mini_pending = VAR_6->rx_ring_size;
 VAR_3->rx_jumbo_pending = VAR_6->rx_ring_size;
 VAR_3->tx_pending = VAR_5->tx_ring_size;
}
