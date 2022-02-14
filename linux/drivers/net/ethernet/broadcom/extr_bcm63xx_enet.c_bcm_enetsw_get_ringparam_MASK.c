
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_max_pending; int tx_max_pending; int tx_pending; int rx_pending; scalar_t__ rx_jumbo_max_pending; scalar_t__ rx_mini_max_pending; } ;
struct bcm_enet_priv {int tx_ring_size; int rx_ring_size; } ;


 struct bcm_enet_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
         struct ethtool_ringparam *VAR_1)
{
 struct bcm_enet_priv *VAR_2;

 VAR_2 = FUNC_0(VAR_0);


 VAR_1->rx_max_pending = 8192;
 VAR_1->tx_max_pending = 8192;
 VAR_1->rx_mini_max_pending = 0;
 VAR_1->rx_jumbo_max_pending = 0;
 VAR_1->rx_pending = VAR_2->rx_ring_size;
 VAR_1->tx_pending = VAR_2->tx_ring_size;
}
