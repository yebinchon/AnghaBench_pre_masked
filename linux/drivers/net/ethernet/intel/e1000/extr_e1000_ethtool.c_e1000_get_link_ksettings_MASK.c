
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int advertising; int supported; } ;
struct TYPE_5__ {scalar_t__ eth_tp_mdix_ctrl; int eth_tp_mdix; int autoneg; int duplex; int speed; int port; int phy_address; } ;
struct ethtool_link_ksettings {TYPE_3__ link_modes; TYPE_2__ base; } ;
struct e1000_hw {scalar_t__ media_type; int autoneg; int autoneg_advertised; scalar_t__ mdix; int phy_addr; } ;
struct TYPE_4__ {int mdix_mode; } ;
struct e1000_adapter {scalar_t__ link_duplex; TYPE_1__ phy_info; int link_speed; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
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
 int FUNC_0 (struct e1000_hw*,int *,scalar_t__*) ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct e1000_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_30,
        struct ethtool_link_ksettings *VAR_31)
{
 struct e1000_adapter *VAR_32 = FUNC_3(VAR_30);
 struct e1000_hw *VAR_33 = &VAR_32->hw;
 u32 VAR_34, VAR_35;

 if (VAR_33->media_type == VAR_28) {
  VAR_34 = (VAR_24 |
        VAR_23 |
        VAR_22 |
        VAR_21 |
        VAR_20|
        VAR_25 |
        VAR_27);
  VAR_35 = VAR_3;

  if (VAR_33->autoneg == 1) {
   VAR_35 |= VAR_1;

   VAR_35 |= VAR_33->autoneg_advertised;
  }

  VAR_31->base.port = VAR_17;
  VAR_31->base.phy_address = VAR_33->phy_addr;
 } else {
  VAR_34 = (VAR_20 |
          VAR_26 |
          VAR_25);

  VAR_35 = (VAR_0 |
          VAR_2 |
          VAR_1);

  VAR_31->base.port = VAR_16;
 }

 if (FUNC_1(VAR_19) & VAR_10) {
  FUNC_0(VAR_33, &VAR_32->link_speed,
        &VAR_32->link_duplex);
  VAR_31->base.speed = VAR_32->link_speed;




  if (VAR_32->link_duplex == VAR_15)
   VAR_31->base.duplex = VAR_7;
  else
   VAR_31->base.duplex = VAR_8;
 } else {
  VAR_31->base.speed = VAR_18;
  VAR_31->base.duplex = VAR_9;
 }

 VAR_31->base.autoneg = ((VAR_33->media_type == VAR_29) ||
    VAR_33->autoneg) ? VAR_5 : VAR_4;


 if ((VAR_33->media_type == VAR_28) &&
     FUNC_4(VAR_30))
  VAR_31->base.eth_tp_mdix = (!!VAR_32->phy_info.mdix_mode ?
         VAR_14 : VAR_11);
 else
  VAR_31->base.eth_tp_mdix = VAR_13;

 if (VAR_33->mdix == VAR_6)
  VAR_31->base.eth_tp_mdix_ctrl = VAR_12;
 else
  VAR_31->base.eth_tp_mdix_ctrl = VAR_33->mdix;

 FUNC_2(VAR_31->link_modes.supported,
      VAR_34);
 FUNC_2(VAR_31->link_modes.advertising,
      VAR_35);

 return 0;
}
