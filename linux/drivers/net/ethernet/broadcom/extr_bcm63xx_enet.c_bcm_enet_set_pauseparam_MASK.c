
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ rx_pause; scalar_t__ tx_pause; scalar_t__ autoneg; } ;
struct bcm_enet_priv {scalar_t__ pause_rx; scalar_t__ pause_tx; scalar_t__ pause_auto; scalar_t__ has_phy; } ;


 int VAR_0 ;
 struct bcm_enet_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
       struct ethtool_pauseparam *VAR_2)
{
 struct bcm_enet_priv *VAR_3;

 VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->has_phy) {
  if (VAR_2->autoneg && (VAR_2->rx_pause != VAR_2->tx_pause)) {



   return -VAR_0;
  }
 } else {

  if (VAR_2->autoneg)
   return -VAR_0;
 }

 VAR_3->pause_auto = VAR_2->autoneg;
 VAR_3->pause_rx = VAR_2->rx_pause;
 VAR_3->pause_tx = VAR_2->tx_pause;

 return 0;
}
