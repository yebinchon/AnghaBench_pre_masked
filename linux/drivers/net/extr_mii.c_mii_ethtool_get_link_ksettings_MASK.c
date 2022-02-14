
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mii_if_info {int (* mdio_read ) (struct net_device*,int ,int ) ;int full_duplex; scalar_t__ supports_gmii; int phy_id; struct net_device* dev; } ;
struct TYPE_4__ {int lp_advertising; int advertising; int supported; } ;
struct TYPE_3__ {int duplex; void* speed; int autoneg; int mdio_support; int phy_address; int port; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mii_if_info*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,int ,int ) ;
 int FUNC_5 (struct net_device*,int ,int ) ;
 int FUNC_6 (struct net_device*,int ,int ) ;
 int FUNC_7 (struct net_device*,int ,int ) ;

void FUNC_8(struct mii_if_info *VAR_37,
        struct ethtool_link_ksettings *VAR_38)
{
 struct net_device *VAR_39 = VAR_37->dev;
 u16 VAR_40, VAR_41, VAR_42 = 0, VAR_43 = 0;
 u32 VAR_44, VAR_45, VAR_46, VAR_47;

 VAR_45 = (VAR_33 | VAR_32 |
       VAR_31 | VAR_30 |
       VAR_34 | VAR_36 | VAR_35);
 if (VAR_37->supports_gmii)
  VAR_45 |= VAR_29 |
   VAR_28;


 VAR_38->base.port = VAR_24;


 VAR_38->base.phy_address = VAR_37->phy_id;
 VAR_38->base.mdio_support = VAR_17;

 VAR_46 = VAR_7 | VAR_6;

 VAR_40 = VAR_37->mdio_read(VAR_39, VAR_37->phy_id, VAR_19);
 VAR_41 = VAR_37->mdio_read(VAR_39, VAR_37->phy_id, VAR_20);
 if (VAR_37->supports_gmii) {
  VAR_42 = VAR_37->mdio_read(VAR_39, VAR_37->phy_id, VAR_21);
  VAR_43 = VAR_37->mdio_read(VAR_39, VAR_37->phy_id, VAR_23);
 }
 if (VAR_40 & VAR_10) {
  VAR_46 |= VAR_5;
  VAR_38->base.autoneg = VAR_9;

  VAR_46 |= FUNC_2(VAR_37, VAR_18);
  if (VAR_37->supports_gmii)
   VAR_46 |= FUNC_1(VAR_42);

  if (VAR_41 & VAR_14) {
   VAR_47 = FUNC_2(VAR_37, VAR_22);
   VAR_47 |=
     FUNC_3(VAR_43);
  } else {
   VAR_47 = 0;
  }

  VAR_44 = VAR_46 & VAR_47;

  if (VAR_44 & (VAR_0 |
       VAR_1)) {
   VAR_38->base.speed = VAR_27;
   VAR_38->base.duplex = !!(VAR_44 & VAR_0);
  } else if (VAR_44 & (VAR_2 |
       VAR_3)) {
   VAR_38->base.speed = VAR_26;
   VAR_38->base.duplex = !!(VAR_44 & VAR_2);
  } else {
   VAR_38->base.speed = VAR_25;
   VAR_38->base.duplex = !!(VAR_44 & VAR_4);
  }
 } else {
  VAR_38->base.autoneg = VAR_8;

  VAR_38->base.speed = ((VAR_40 & VAR_13 &&
        (VAR_40 & VAR_12) == 0) ?
       VAR_27 :
       ((VAR_40 & VAR_12) ?
        VAR_26 : VAR_25));
  VAR_38->base.duplex = (VAR_40 & VAR_11) ?
   VAR_15 : VAR_16;

  VAR_47 = 0;
 }

 VAR_37->full_duplex = VAR_38->base.duplex;

 FUNC_0(VAR_38->link_modes.supported,
      VAR_45);
 FUNC_0(VAR_38->link_modes.advertising,
      VAR_46);
 FUNC_0(VAR_38->link_modes.lp_advertising,
      VAR_47);


}
