
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_11__ {scalar_t__ media_type; int autoneg_advertised; scalar_t__ mdix; scalar_t__ is_mdix; int addr; } ;
struct TYPE_9__ {int autoneg; scalar_t__ type; } ;
struct TYPE_8__ {int requested_mode; } ;
struct e1000_sfp_flags {scalar_t__ e100_base_fx; } ;
struct e1000_dev_spec_82575 {struct e1000_sfp_flags eth_flags; } ;
struct TYPE_7__ {struct e1000_dev_spec_82575 _82575; } ;
struct e1000_hw {scalar_t__ device_id; TYPE_5__ phy; TYPE_3__ mac; TYPE_2__ fc; TYPE_1__ dev_spec; } ;
struct igb_adapter {struct e1000_hw hw; } ;
struct TYPE_12__ {int advertising; int supported; } ;
struct TYPE_10__ {int speed; scalar_t__ eth_tp_mdix_ctrl; int eth_tp_mdix; int autoneg; int duplex; int port; int phy_address; } ;
struct ethtool_link_ksettings {TYPE_6__ link_modes; TYPE_4__ base; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;



 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 int FUNC_0 (int ,int) ;
 struct igb_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_47,
      struct ethtool_link_ksettings *VAR_48)
{
 struct igb_adapter *VAR_49 = FUNC_1(VAR_47);
 struct e1000_hw *VAR_50 = &VAR_49->hw;
 struct e1000_dev_spec_82575 *VAR_51 = &VAR_50->dev_spec._82575;
 struct e1000_sfp_flags *VAR_52 = &VAR_51->eth_flags;
 u32 VAR_53;
 u32 VAR_54;
 u32 VAR_55, VAR_56;

 VAR_53 = FUNC_2(VAR_15);
 if (VAR_50->phy.media_type == VAR_45) {

  VAR_55 = (VAR_38 |
        VAR_37 |
        VAR_36 |
        VAR_35 |
        VAR_34|
        VAR_40 |
        VAR_43 |
        VAR_42);
  VAR_56 = VAR_7;

  if (VAR_50->mac.autoneg == 1) {
   VAR_56 |= VAR_4;

   VAR_56 |= VAR_50->phy.autoneg_advertised;
  }

  VAR_48->base.port = VAR_27;
  VAR_48->base.phy_address = VAR_50->phy.addr;
 } else {
  VAR_55 = (VAR_41 |
        VAR_33 |
        VAR_40 |
        VAR_42);
  VAR_56 = (VAR_5 |
          VAR_0);
  if (VAR_50->mac.type == VAR_44) {
   if ((VAR_50->device_id ==
        VAR_14) &&
       !(VAR_53 & VAR_17)) {
    VAR_55 |= VAR_39;
    VAR_55 &= ~VAR_33;
    VAR_56 |= VAR_2;
    VAR_56 &= ~VAR_0;
   }
  }
  if (VAR_52->e100_base_fx) {
   VAR_55 |= VAR_35;
   VAR_56 |= VAR_1;
  }
  if (VAR_50->mac.autoneg == 1)
   VAR_56 |= VAR_4;

  VAR_48->base.port = VAR_26;
 }
 if (VAR_50->mac.autoneg != 1)
  VAR_56 &= ~(VAR_6 |
     VAR_3);

 switch (VAR_50->fc.requested_mode) {
 case 130:
  VAR_56 |= VAR_6;
  break;
 case 129:
  VAR_56 |= (VAR_6 |
    VAR_3);
  break;
 case 128:
  VAR_56 |= VAR_3;
  break;
 default:
  VAR_56 &= ~(VAR_6 |
     VAR_3);
 }
 if (VAR_53 & VAR_19) {
  if ((VAR_53 & VAR_16) &&
      !(VAR_53 & VAR_17)) {
   VAR_54 = VAR_31;
  } else if (VAR_53 & VAR_21) {
   VAR_54 = VAR_30;
  } else if (VAR_53 & VAR_20) {
   VAR_54 = VAR_29;
  } else {
   VAR_54 = VAR_28;
  }
  if ((VAR_53 & VAR_18) ||
      VAR_50->phy.media_type != VAR_45)
   VAR_48->base.duplex = VAR_11;
  else
   VAR_48->base.duplex = VAR_12;
 } else {
  VAR_54 = VAR_32;
  VAR_48->base.duplex = VAR_13;
 }
 VAR_48->base.speed = VAR_54;
 if ((VAR_50->phy.media_type == VAR_46) ||
     VAR_50->mac.autoneg)
  VAR_48->base.autoneg = VAR_9;
 else
  VAR_48->base.autoneg = VAR_8;


 if (VAR_50->phy.media_type == VAR_45)
  VAR_48->base.eth_tp_mdix = VAR_50->phy.is_mdix ? VAR_25 :
            VAR_22;
 else
  VAR_48->base.eth_tp_mdix = VAR_24;

 if (VAR_50->phy.mdix == VAR_10)
  VAR_48->base.eth_tp_mdix_ctrl = VAR_23;
 else
  VAR_48->base.eth_tp_mdix_ctrl = VAR_50->phy.mdix;

 FUNC_0(VAR_48->link_modes.supported,
      VAR_55);
 FUNC_0(VAR_48->link_modes.advertising,
      VAR_56);

 return 0;
}
