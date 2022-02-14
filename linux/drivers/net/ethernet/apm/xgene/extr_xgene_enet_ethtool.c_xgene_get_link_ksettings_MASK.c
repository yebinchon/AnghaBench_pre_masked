
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xgene_enet_pdata {scalar_t__ phy_mode; scalar_t__ mdio_driver; } ;
struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct TYPE_4__ {int autoneg; int port; void* duplex; int speed; } ;
struct TYPE_3__ {int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int) ;
 struct xgene_enet_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*,struct ethtool_link_ksettings*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_14,
        struct ethtool_link_ksettings *VAR_15)
{
 struct xgene_enet_pdata *VAR_16 = FUNC_1(VAR_14);
 struct phy_device *VAR_17 = VAR_14->phydev;
 u32 VAR_18;

 if (FUNC_3(VAR_16->phy_mode)) {
  if (VAR_17 == ((void*)0))
   return -VAR_3;

  FUNC_2(VAR_17, VAR_15);

  return 0;
 } else if (VAR_16->phy_mode == VAR_4) {
  if (VAR_16->mdio_driver) {
   if (!VAR_17)
    return -VAR_3;

   FUNC_2(VAR_17, VAR_15);

   return 0;
  }

  VAR_18 = VAR_10 | VAR_11 |
   VAR_13;
  FUNC_0(
   VAR_15->link_modes.supported,
   VAR_18);
  FUNC_0(
   VAR_15->link_modes.advertising,
   VAR_18);

  VAR_15->base.speed = VAR_7;
  VAR_15->base.duplex = VAR_2;
  VAR_15->base.port = VAR_6;
  VAR_15->base.autoneg = VAR_1;
 } else {
  VAR_18 = VAR_9 | VAR_12;
  FUNC_0(
   VAR_15->link_modes.supported,
   VAR_18);
  FUNC_0(
   VAR_15->link_modes.advertising,
   VAR_18);

  VAR_15->base.speed = VAR_8;
  VAR_15->base.duplex = VAR_2;
  VAR_15->base.port = VAR_5;
  VAR_15->base.autoneg = VAR_0;
 }

 return 0;
}
