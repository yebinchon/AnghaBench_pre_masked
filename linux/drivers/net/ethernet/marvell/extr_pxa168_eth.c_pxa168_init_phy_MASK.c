
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pxa168_eth_private {scalar_t__ phy_speed; int phy_duplex; int phy_addr; int phy_intf; int smi_bus; } ;
struct phy_device {int dummy; } ;
struct net_device {scalar_t__ phydev; } ;
struct TYPE_4__ {scalar_t__ speed; int autoneg; int duplex; int phy_address; } ;
struct TYPE_3__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_2 ;
 int FUNC_1 (struct phy_device*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 struct phy_device* FUNC_3 (int ,int ) ;
 struct pxa168_eth_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,struct phy_device*,int ,int ) ;
 int FUNC_6 (struct net_device*,struct ethtool_link_ksettings*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5)
{
 struct pxa168_eth_private *VAR_6 = FUNC_4(VAR_5);
 struct ethtool_link_ksettings VAR_7;
 struct phy_device *VAR_8 = ((void*)0);
 int VAR_9;

 if (VAR_5->phydev)
  return 0;

 VAR_8 = FUNC_3(VAR_6->smi_bus, VAR_6->phy_addr);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9 = FUNC_5(VAR_5, VAR_8, VAR_4,
     VAR_6->phy_intf);
 if (VAR_9)
  return VAR_9;

 VAR_7.base.phy_address = VAR_6->phy_addr;
 VAR_7.base.speed = VAR_6->phy_speed;
 VAR_7.base.duplex = VAR_6->phy_duplex;
 FUNC_2(VAR_7.link_modes.advertising, VAR_2,
      VAR_3);
 VAR_7.base.autoneg = VAR_1;

 if (VAR_7.base.speed != 0)
  VAR_7.base.autoneg = VAR_0;

 return FUNC_6(VAR_5, &VAR_7);
}
