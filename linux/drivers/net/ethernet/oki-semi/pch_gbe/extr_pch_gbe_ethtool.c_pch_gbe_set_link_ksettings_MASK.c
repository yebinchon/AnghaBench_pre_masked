
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {int autoneg; int link_duplex; scalar_t__ link_speed; } ;
struct TYPE_6__ {scalar_t__ autoneg_advertised; } ;
struct pch_gbe_hw {TYPE_3__ mac; TYPE_2__ phy; } ;
struct pch_gbe_adapter {int netdev; int mii; struct pch_gbe_hw hw; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {scalar_t__ speed; int autoneg; int duplex; } ;
struct TYPE_5__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_4__ base; TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (struct ethtool_link_ksettings*,struct ethtool_link_ksettings const*,int) ;
 int FUNC_2 (int *,struct ethtool_link_ksettings*) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct pch_gbe_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct pch_gbe_adapter*) ;
 int FUNC_7 (struct pch_gbe_hw*,int ,int ) ;
 int FUNC_8 (struct pch_gbe_adapter*) ;
 int FUNC_9 (struct pch_gbe_adapter*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_5,
          const struct ethtool_link_ksettings *VAR_6)
{
 struct pch_gbe_adapter *VAR_7 = FUNC_4(VAR_5);
 struct pch_gbe_hw *VAR_8 = &VAR_7->hw;
 struct ethtool_link_ksettings VAR_9;
 u32 VAR_10 = VAR_6->base.speed;
 u32 VAR_11;
 int VAR_12;

 FUNC_7(VAR_8, VAR_2, VAR_0);

 FUNC_1(&VAR_9, VAR_6, sizeof(*VAR_6));



 if (VAR_10 == VAR_4) {
  VAR_10 = VAR_3;
  VAR_9.base.speed = VAR_10;
  VAR_9.base.duplex = VAR_1;
 }
 VAR_12 = FUNC_2(&VAR_7->mii, &VAR_9);
 if (VAR_12) {
  FUNC_3(VAR_5, "Error: mii_ethtool_set_link_ksettings\n");
  return VAR_12;
 }
 VAR_8->mac.link_speed = VAR_10;
 VAR_8->mac.link_duplex = VAR_9.base.duplex;
 FUNC_0(
  &VAR_11, VAR_9.link_modes.advertising);
 VAR_8->phy.autoneg_advertised = VAR_11;
 VAR_8->mac.autoneg = VAR_9.base.autoneg;


 if (FUNC_5(VAR_7->netdev)) {
  FUNC_6(VAR_7);
  VAR_12 = FUNC_9(VAR_7);
 } else {
  FUNC_8(VAR_7);
 }
 return VAR_12;
}
