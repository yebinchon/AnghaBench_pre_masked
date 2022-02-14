
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct lan78xx_net {int intf; } ;
struct ethtool_link_ksettings {int dummy; } ;


 struct lan78xx_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*,struct ethtool_link_ksettings*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
          struct ethtool_link_ksettings *VAR_1)
{
 struct lan78xx_net *VAR_2 = FUNC_0(VAR_0);
 struct phy_device *VAR_3 = VAR_0->phydev;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2->intf);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_1(VAR_3, VAR_1);

 FUNC_3(VAR_2->intf);

 return VAR_4;
}
