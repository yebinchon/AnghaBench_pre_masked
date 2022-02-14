
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; int autoneg; } ;
struct bcm_enet_priv {int pause_tx; int pause_rx; int pause_auto; } ;


 struct bcm_enet_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
        struct ethtool_pauseparam *VAR_1)
{
 struct bcm_enet_priv *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 VAR_1->autoneg = VAR_2->pause_auto;
 VAR_1->rx_pause = VAR_2->pause_rx;
 VAR_1->tx_pause = VAR_2->pause_tx;
}
