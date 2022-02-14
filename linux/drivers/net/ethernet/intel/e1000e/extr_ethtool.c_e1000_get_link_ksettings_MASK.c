
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct TYPE_10__ {int advertising; int supported; } ;
struct TYPE_9__ {int speed; scalar_t__ eth_tp_mdix_ctrl; void* eth_tp_mdix; int autoneg; scalar_t__ duplex; int port; int phy_address; } ;
struct ethtool_link_ksettings {TYPE_5__ link_modes; TYPE_4__ base; } ;
struct TYPE_8__ {scalar_t__ media_type; scalar_t__ type; int autoneg_advertised; scalar_t__ mdix; scalar_t__ is_mdix; int addr; } ;
struct TYPE_7__ {int autoneg; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_2__ mac; } ;
struct e1000_adapter {int link_speed; scalar_t__ link_duplex; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct e1000_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_36,
        struct ethtool_link_ksettings *VAR_37)
{
 struct e1000_adapter *VAR_38 = FUNC_2(VAR_36);
 struct e1000_hw *VAR_39 = &VAR_38->hw;
 u32 VAR_40, VAR_41, VAR_42;

 if (VAR_39->phy.media_type == VAR_33) {
  VAR_41 = (VAR_29 |
        VAR_28 |
        VAR_27 |
        VAR_26 |
        VAR_25 |
        VAR_30 |
        VAR_32);
  if (VAR_39->phy.type == VAR_35)
   VAR_41 &= ~VAR_25;
  VAR_42 = VAR_3;

  if (VAR_39->mac.autoneg == 1) {
   VAR_42 |= VAR_1;

   VAR_42 |= VAR_39->phy.autoneg_advertised;
  }

  VAR_37->base.port = VAR_19;
  VAR_37->base.phy_address = VAR_39->phy.addr;
 } else {
  VAR_41 = (VAR_25 |
          VAR_31 |
          VAR_30);

  VAR_42 = (VAR_0 |
          VAR_2 |
          VAR_1);

  VAR_37->base.port = VAR_18;
 }

 VAR_40 = VAR_23;
 VAR_37->base.duplex = VAR_9;

 if (FUNC_4(VAR_36)) {
  if (FUNC_3(VAR_36)) {
   VAR_40 = VAR_38->link_speed;
   VAR_37->base.duplex = VAR_38->link_duplex - 1;
  }
 } else if (!FUNC_5(VAR_36->dev.parent)) {
  u32 VAR_43 = FUNC_0(VAR_24);

  if (VAR_43 & VAR_11) {
   if (VAR_43 & VAR_13)
    VAR_40 = VAR_22;
   else if (VAR_43 & VAR_12)
    VAR_40 = VAR_21;
   else
    VAR_40 = VAR_20;

   if (VAR_43 & VAR_10)
    VAR_37->base.duplex = VAR_7;
   else
    VAR_37->base.duplex = VAR_8;
  }
 }

 VAR_37->base.speed = VAR_40;
 VAR_37->base.autoneg = ((VAR_39->phy.media_type == VAR_34) ||
    VAR_39->mac.autoneg) ? VAR_5 : VAR_4;


 if ((VAR_39->phy.media_type == VAR_33) &&
     FUNC_3(VAR_36))
  VAR_37->base.eth_tp_mdix = VAR_39->phy.is_mdix ?
   VAR_17 : VAR_14;
 else
  VAR_37->base.eth_tp_mdix = VAR_16;

 if (VAR_39->phy.mdix == VAR_6)
  VAR_37->base.eth_tp_mdix_ctrl = VAR_15;
 else
  VAR_37->base.eth_tp_mdix_ctrl = VAR_39->phy.mdix;

 if (VAR_39->phy.media_type != VAR_33)
  VAR_37->base.eth_tp_mdix_ctrl = VAR_16;

 FUNC_1(VAR_37->link_modes.supported,
      VAR_41);
 FUNC_1(VAR_37->link_modes.advertising,
      VAR_42);

 return 0;
}
