
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct netcp_intf {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct gbe_intf {TYPE_2__* slave; } ;
struct TYPE_3__ {int port; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct TYPE_4__ {int phy_port_t; } ;


 int VAR_0 ;
 struct gbe_intf* FUNC_0 (struct netcp_intf*) ;
 struct netcp_intf* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*,struct ethtool_link_ksettings*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
           struct ethtool_link_ksettings *VAR_2)
{
 struct netcp_intf *VAR_3 = FUNC_1(VAR_1);
 struct phy_device *VAR_4 = VAR_1->phydev;
 struct gbe_intf *VAR_5;

 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_3);
 if (!VAR_5)
  return -VAR_0;

 if (!VAR_5->slave)
  return -VAR_0;

 FUNC_2(VAR_4, VAR_2);
 VAR_2->base.port = VAR_5->slave->phy_port_t;

 return 0;
}
