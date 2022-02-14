
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucc_geth_private {struct phy_device* phydev; } ;
struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int VAR_0 ;
 struct ucc_geth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*,struct ethtool_link_ksettings const*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1,
    const struct ethtool_link_ksettings *VAR_2)
{
 struct ucc_geth_private *VAR_3 = FUNC_0(VAR_1);
 struct phy_device *VAR_4 = VAR_3->phydev;

 if (!VAR_4)
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_2);
}
