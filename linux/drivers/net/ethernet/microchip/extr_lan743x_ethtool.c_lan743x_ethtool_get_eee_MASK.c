
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int drv; } ;
struct net_device {struct phy_device* phydev; } ;
struct lan743x_adapter {int netdev; } ;
struct ethtool_eee {int eee_enabled; int eee_active; int advertised; int lp_advertised; int tx_lpi_enabled; int tx_lpi_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lan743x_adapter*,int ) ;
 struct lan743x_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct lan743x_adapter*,int ,int ,char*) ;
 int FUNC_3 (struct phy_device*,struct ethtool_eee*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
       struct ethtool_eee *VAR_6)
{
 struct lan743x_adapter *VAR_7 = FUNC_1(VAR_5);
 struct phy_device *VAR_8 = VAR_5->phydev;
 u32 VAR_9;
 int VAR_10;

 if (!VAR_8)
  return -VAR_0;
 if (!VAR_8->drv) {
  FUNC_2(VAR_7, VAR_4, VAR_7->netdev,
     "Missing PHY Driver\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_8, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = FUNC_0(VAR_7, VAR_1);
 if (VAR_9 & VAR_2) {
  VAR_6->eee_enabled = 1;
  VAR_6->eee_active = !!(VAR_6->advertised & VAR_6->lp_advertised);
  VAR_6->tx_lpi_enabled = 1;

  VAR_9 = FUNC_0(VAR_7, VAR_3);
  VAR_6->tx_lpi_timer = VAR_9;
 } else {
  VAR_6->eee_enabled = 0;
  VAR_6->eee_active = 0;
  VAR_6->tx_lpi_enabled = 0;
  VAR_6->tx_lpi_timer = 0;
 }

 return 0;
}
