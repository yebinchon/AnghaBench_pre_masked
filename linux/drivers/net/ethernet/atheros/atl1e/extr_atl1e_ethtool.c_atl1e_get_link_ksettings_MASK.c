
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
struct atl1e_hw {scalar_t__ nic_type; int autoneg_advertised; } ;
struct atl1e_adapter {scalar_t__ link_speed; scalar_t__ link_duplex; struct atl1e_hw hw; } ;


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
 scalar_t__ VAR_17 ;
 int FUNC_0 (int ,int) ;
 struct atl1e_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_18,
        struct ethtool_link_ksettings *VAR_19)
{
 struct atl1e_adapter *VAR_20 = FUNC_1(VAR_18);
 struct atl1e_hw *VAR_21 = &VAR_20->hw;
 u32 VAR_22, VAR_23;

 VAR_22 = (VAR_14 |
      VAR_13 |
      VAR_12 |
      VAR_11 |
      VAR_15 |
      VAR_16);
 if (VAR_21->nic_type == VAR_17)
  VAR_22 |= VAR_10;

 VAR_23 = VAR_1;

 VAR_23 |= VAR_0;
 VAR_23 |= VAR_21->autoneg_advertised;

 VAR_19->base.port = VAR_7;
 VAR_19->base.phy_address = 0;

 if (VAR_20->link_speed != VAR_8) {
  VAR_19->base.speed = VAR_20->link_speed;
  if (VAR_20->link_duplex == VAR_6)
   VAR_19->base.duplex = VAR_3;
  else
   VAR_19->base.duplex = VAR_4;
 } else {
  VAR_19->base.speed = VAR_9;
  VAR_19->base.duplex = VAR_5;
 }

 VAR_19->base.autoneg = VAR_2;

 FUNC_0(VAR_19->link_modes.supported,
      VAR_22);
 FUNC_0(VAR_19->link_modes.advertising,
      VAR_23);

 return 0;
}
