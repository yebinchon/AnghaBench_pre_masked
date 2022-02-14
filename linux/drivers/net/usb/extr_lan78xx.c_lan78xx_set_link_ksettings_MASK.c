
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct lan78xx_net {int intf; } ;
struct TYPE_2__ {int autoneg; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct lan78xx_net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*,struct ethtool_link_ksettings const*) ;
 int FUNC_3 (struct phy_device*,int ) ;
 int FUNC_4 (struct phy_device*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2,
          const struct ethtool_link_ksettings *VAR_3)
{
 struct lan78xx_net *VAR_4 = FUNC_1(VAR_2);
 struct phy_device *VAR_5 = VAR_2->phydev;
 int VAR_6 = 0;
 int VAR_7;

 VAR_6 = FUNC_5(VAR_4->intf);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_2(VAR_5, VAR_3);

 if (!VAR_3->base.autoneg) {

  VAR_7 = FUNC_3(VAR_5, VAR_1);
  FUNC_4(VAR_5, VAR_1, VAR_7 | VAR_0);
  FUNC_0(1);
  FUNC_4(VAR_5, VAR_1, VAR_7);
 }

 FUNC_6(VAR_4->intf);

 return VAR_6;
}
