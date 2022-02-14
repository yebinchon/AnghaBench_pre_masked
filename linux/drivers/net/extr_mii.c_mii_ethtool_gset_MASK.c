
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mii_if_info {int (* mdio_read ) (struct net_device*,int ,int ) ;int full_duplex; scalar_t__ supports_gmii; int phy_id; struct net_device* dev; } ;
struct ethtool_cmd {int supported; int advertising; int lp_advertising; int duplex; int autoneg; int mdio_support; int phy_address; int transceiver; int port; } ;


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
 int FUNC_0 (struct ethtool_cmd*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mii_if_info*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,int ,int ) ;
 int FUNC_5 (struct net_device*,int ,int ) ;
 int FUNC_6 (struct net_device*,int ,int ) ;
 int FUNC_7 (struct net_device*,int ,int ) ;

int FUNC_8(struct mii_if_info *VAR_38, struct ethtool_cmd *VAR_39)
{
 struct net_device *VAR_40 = VAR_38->dev;
 u16 VAR_41, VAR_42, VAR_43 = 0, VAR_44 = 0;
 u32 VAR_45;

 VAR_39->supported =
     (VAR_33 | VAR_32 |
      VAR_31 | VAR_30 |
      VAR_34 | VAR_36 | VAR_35);
 if (VAR_38->supports_gmii)
  VAR_39->supported |= VAR_29 |
   VAR_28;


 VAR_39->port = VAR_24;


 VAR_39->transceiver = VAR_37;


 VAR_39->phy_address = VAR_38->phy_id;
 VAR_39->mdio_support = VAR_17;

 VAR_39->advertising = VAR_7 | VAR_6;

 VAR_41 = VAR_38->mdio_read(VAR_40, VAR_38->phy_id, VAR_19);
 VAR_42 = VAR_38->mdio_read(VAR_40, VAR_38->phy_id, VAR_20);
 if (VAR_38->supports_gmii) {
   VAR_43 = VAR_38->mdio_read(VAR_40, VAR_38->phy_id, VAR_21);
  VAR_44 = VAR_38->mdio_read(VAR_40, VAR_38->phy_id, VAR_23);
 }
 if (VAR_41 & VAR_10) {
  VAR_39->advertising |= VAR_5;
  VAR_39->autoneg = VAR_9;

  VAR_39->advertising |= FUNC_2(VAR_38, VAR_18);
  if (VAR_38->supports_gmii)
   VAR_39->advertising |=
     FUNC_1(VAR_43);

  if (VAR_42 & VAR_14) {
   VAR_39->lp_advertising = FUNC_2(VAR_38, VAR_22);
   VAR_39->lp_advertising |=
     FUNC_3(VAR_44);
  } else {
   VAR_39->lp_advertising = 0;
  }

  VAR_45 = VAR_39->advertising & VAR_39->lp_advertising;

  if (VAR_45 & (VAR_0 |
       VAR_1)) {
   FUNC_0(VAR_39, VAR_27);
   VAR_39->duplex = !!(VAR_45 & VAR_0);
  } else if (VAR_45 & (VAR_2 |
       VAR_3)) {
   FUNC_0(VAR_39, VAR_26);
   VAR_39->duplex = !!(VAR_45 & VAR_2);
  } else {
   FUNC_0(VAR_39, VAR_25);
   VAR_39->duplex = !!(VAR_45 & VAR_4);
  }
 } else {
  VAR_39->autoneg = VAR_8;

  FUNC_0(VAR_39,
          ((VAR_41 & VAR_13 &&
     (VAR_41 & VAR_12) == 0) ?
           VAR_27 :
           ((VAR_41 & VAR_12) ?
     VAR_26 : VAR_25)));
  VAR_39->duplex = (VAR_41 & VAR_11) ? VAR_15 : VAR_16;
 }

 VAR_38->full_duplex = VAR_39->duplex;



 return 0;
}
