
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int drv; } ;
struct net_device {struct phy_device* phydev; } ;
struct lan743x_adapter {int netdev; } ;
struct ethtool_eee {scalar_t__ tx_lpi_timer; scalar_t__ eee_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lan743x_adapter*,int ) ;
 int FUNC_1 (struct lan743x_adapter*,int ,int ) ;
 struct lan743x_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct lan743x_adapter*,int ,int ,char*) ;
 int FUNC_4 (struct phy_device*,struct ethtool_eee*) ;
 int FUNC_5 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6,
       struct ethtool_eee *VAR_7)
{
 struct lan743x_adapter *VAR_8 = FUNC_2(VAR_6);
 struct phy_device *VAR_9 = ((void*)0);
 u32 VAR_10 = 0;
 int VAR_11 = 0;

 if (!VAR_6)
  return -VAR_0;
 VAR_8 = FUNC_2(VAR_6);
 if (!VAR_8)
  return -VAR_0;
 VAR_9 = VAR_6->phydev;
 if (!VAR_9)
  return -VAR_1;
 if (!VAR_9->drv) {
  FUNC_3(VAR_8, VAR_5, VAR_8->netdev,
     "Missing PHY Driver\n");
  return -VAR_1;
 }

 if (VAR_7->eee_enabled) {
  VAR_11 = FUNC_5(VAR_9, 0);
  if (VAR_11) {
   FUNC_3(VAR_8, VAR_5, VAR_8->netdev,
      "EEE initialization failed\n");
   return VAR_11;
  }

  VAR_10 = (u32)VAR_7->tx_lpi_timer;
  FUNC_1(VAR_8, VAR_4, VAR_10);

  VAR_10 = FUNC_0(VAR_8, VAR_2);
  VAR_10 |= VAR_3;
  FUNC_1(VAR_8, VAR_2, VAR_10);
 } else {
  VAR_10 = FUNC_0(VAR_8, VAR_2);
  VAR_10 &= ~VAR_3;
  FUNC_1(VAR_8, VAR_2, VAR_10);
 }

 return FUNC_4(VAR_9, VAR_7);
}
