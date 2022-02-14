
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_eth_private {int num_tx_ring; int num_rx_ring; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; int tx_max_pending; int rx_max_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
     struct ethtool_ringparam *VAR_3)
{
 struct sh_eth_private *VAR_4 = FUNC_0(VAR_2);

 VAR_3->rx_max_pending = VAR_0;
 VAR_3->tx_max_pending = VAR_1;
 VAR_3->rx_pending = VAR_4->num_rx_ring;
 VAR_3->tx_pending = VAR_4->num_tx_ring;
}
