
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {scalar_t__ speed; int autoneg; int duplex; scalar_t__ phy_address; int port; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;
struct atl1c_hw {int link_cap_flags; int autoneg_advertised; } ;
struct atl1c_adapter {scalar_t__ link_speed; scalar_t__ link_duplex; struct atl1c_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int) ;
 struct atl1c_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_17,
        struct ethtool_link_ksettings *VAR_18)
{
 struct atl1c_adapter *VAR_19 = FUNC_1(VAR_17);
 struct atl1c_hw *VAR_20 = &VAR_19->hw;
 u32 VAR_21, VAR_22;

 VAR_21 = (VAR_14 |
      VAR_13 |
      VAR_12 |
      VAR_11 |
      VAR_15 |
      VAR_16);
 if (VAR_20->link_cap_flags & VAR_1)
  VAR_21 |= VAR_10;

 VAR_22 = VAR_0;

 VAR_22 |= VAR_20->autoneg_advertised;

 VAR_18->base.port = VAR_7;
 VAR_18->base.phy_address = 0;

 if (VAR_19->link_speed != VAR_8) {
  VAR_18->base.speed = VAR_19->link_speed;
  if (VAR_19->link_duplex == VAR_6)
   VAR_18->base.duplex = VAR_3;
  else
   VAR_18->base.duplex = VAR_4;
 } else {
  VAR_18->base.speed = VAR_9;
  VAR_18->base.duplex = VAR_5;
 }

 VAR_18->base.autoneg = VAR_2;

 FUNC_0(VAR_18->link_modes.supported,
      VAR_21);
 FUNC_0(VAR_18->link_modes.advertising,
      VAR_22);

 return 0;
}
