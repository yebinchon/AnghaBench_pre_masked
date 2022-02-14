
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_pdata {scalar_t__ phy_mode; scalar_t__ mdio_driver; } ;
struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct xgene_enet_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*,struct ethtool_link_ksettings const*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
        const struct ethtool_link_ksettings *VAR_4)
{
 struct xgene_enet_pdata *VAR_5 = FUNC_0(VAR_3);
 struct phy_device *VAR_6 = VAR_3->phydev;

 if (FUNC_2(VAR_5->phy_mode)) {
  if (!VAR_6)
   return -VAR_1;

  return FUNC_1(VAR_6, VAR_4);
 }

 if (VAR_5->phy_mode == VAR_2) {
  if (VAR_5->mdio_driver) {
   if (!VAR_6)
    return -VAR_1;

   return FUNC_1(VAR_6, VAR_4);
  }
 }

 return -VAR_0;
}
