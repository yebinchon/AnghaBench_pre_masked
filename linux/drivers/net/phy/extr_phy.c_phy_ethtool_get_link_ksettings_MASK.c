
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*,struct ethtool_link_ksettings*) ;

int FUNC_1(struct net_device *VAR_1,
       struct ethtool_link_ksettings *VAR_2)
{
 struct phy_device *VAR_3 = VAR_1->phydev;

 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_2);

 return 0;
}
