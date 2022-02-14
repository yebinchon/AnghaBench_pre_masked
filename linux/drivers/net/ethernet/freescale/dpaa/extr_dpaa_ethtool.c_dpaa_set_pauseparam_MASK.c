
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct mac_device {int autoneg_pause; int rx_pause_req; int tx_pause_req; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; int autoneg; } ;
struct dpaa_priv {struct mac_device* mac_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mac_device*,int*,int*) ;
 int FUNC_1 (struct mac_device*,int,int) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 struct dpaa_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct phy_device*,int ,int ) ;
 int FUNC_5 (struct phy_device*,struct ethtool_pauseparam*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2,
          struct ethtool_pauseparam *VAR_3)
{
 struct mac_device *VAR_4;
 struct phy_device *VAR_5;
 bool VAR_6, VAR_7;
 struct dpaa_priv *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_2);
 VAR_4 = VAR_8->mac_dev;

 VAR_5 = VAR_2->phydev;
 if (!VAR_5) {
  FUNC_2(VAR_2, "phy device not initialized\n");
  return -VAR_1;
 }

 if (!FUNC_5(VAR_5, VAR_3))
  return -VAR_0;





 VAR_4->autoneg_pause = !!VAR_3->autoneg;
 VAR_4->rx_pause_req = !!VAR_3->rx_pause;
 VAR_4->tx_pause_req = !!VAR_3->tx_pause;





 FUNC_4(VAR_5, VAR_3->rx_pause, VAR_3->tx_pause);

 FUNC_0(VAR_4, &VAR_6, &VAR_7);
 VAR_9 = FUNC_1(VAR_4, VAR_6, VAR_7);
 if (VAR_9 < 0)
  FUNC_2(VAR_2, "set_mac_active_pause() = %d\n", VAR_9);

 return VAR_9;
}
