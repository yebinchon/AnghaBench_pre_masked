
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct mac_device {int tx_pause_active; int rx_pause_active; int autoneg_pause; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; int autoneg; } ;
struct dpaa_priv {struct mac_device* mac_dev; } ;


 int FUNC_0 (struct net_device*,char*) ;
 struct dpaa_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
    struct ethtool_pauseparam *VAR_1)
{
 struct mac_device *VAR_2;
 struct dpaa_priv *VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 VAR_2 = VAR_3->mac_dev;

 if (!VAR_0->phydev) {
  FUNC_0(VAR_0, "phy device not initialized\n");
  return;
 }

 VAR_1->autoneg = VAR_2->autoneg_pause;
 VAR_1->rx_pause = VAR_2->rx_pause_active;
 VAR_1->tx_pause = VAR_2->tx_pause_active;
}
