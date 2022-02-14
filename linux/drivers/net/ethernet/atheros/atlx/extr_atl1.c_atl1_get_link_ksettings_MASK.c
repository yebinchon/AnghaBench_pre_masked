
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int autoneg; int duplex; scalar_t__ speed; scalar_t__ phy_address; int port; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;
struct atl1_hw {scalar_t__ media_type; } ;
struct atl1_adapter {int netdev; struct atl1_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct atl1_hw*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ,int) ;
 struct atl1_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_24,
       struct ethtool_link_ksettings *VAR_25)
{
 struct atl1_adapter *VAR_26 = FUNC_2(VAR_24);
 struct atl1_hw *VAR_27 = &VAR_26->hw;
 u32 VAR_28, VAR_29;

 VAR_28 = (VAR_21 |
      VAR_20 |
      VAR_19 |
      VAR_18 |
      VAR_17 |
      VAR_22 | VAR_23);
 VAR_29 = VAR_6;
 if (VAR_27->media_type == VAR_14 ||
     VAR_27->media_type == VAR_13) {
  VAR_29 |= VAR_5;
  if (VAR_27->media_type == VAR_14) {
   VAR_29 |= VAR_5;
   VAR_29 |=
       (VAR_4 |
        VAR_3 |
        VAR_2 |
        VAR_1 |
        VAR_0);
  } else
   VAR_29 |= (VAR_0);
 }
 VAR_25->base.port = VAR_15;
 VAR_25->base.phy_address = 0;

 if (FUNC_3(VAR_26->netdev)) {
  u16 VAR_30, VAR_31;
  FUNC_0(VAR_27, &VAR_30, &VAR_31);
  VAR_25->base.speed = VAR_30;
  if (VAR_31 == VAR_12)
   VAR_25->base.duplex = VAR_9;
  else
   VAR_25->base.duplex = VAR_10;
 } else {
  VAR_25->base.speed = VAR_16;
  VAR_25->base.duplex = VAR_11;
 }
 if (VAR_27->media_type == VAR_14 ||
     VAR_27->media_type == VAR_13)
  VAR_25->base.autoneg = VAR_8;
 else
  VAR_25->base.autoneg = VAR_7;

 FUNC_1(VAR_25->link_modes.supported,
      VAR_28);
 FUNC_1(VAR_25->link_modes.advertising,
      VAR_29);

 return 0;
}
