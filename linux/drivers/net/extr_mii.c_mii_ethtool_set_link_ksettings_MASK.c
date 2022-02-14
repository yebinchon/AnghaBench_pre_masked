
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct mii_if_info {scalar_t__ (* mdio_read ) (struct net_device*,int ,int ) ;int force_media; int full_duplex; int phy_id; int (* mdio_write ) (struct net_device*,int ,int ,scalar_t__) ;scalar_t__ supports_gmii; scalar_t__ advertising; struct net_device* dev; } ;
struct TYPE_4__ {scalar_t__ speed; scalar_t__ duplex; scalar_t__ port; scalar_t__ autoneg; int phy_address; } ;
struct TYPE_3__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*,int ) ;
 scalar_t__ FUNC_3 (struct net_device*,int ,int ) ;
 scalar_t__ FUNC_4 (struct net_device*,int ,int ) ;
 int FUNC_5 (struct net_device*,int ,int ,scalar_t__) ;
 int FUNC_6 (struct net_device*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (struct net_device*,int ,int ) ;
 int FUNC_8 (struct net_device*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (struct net_device*,int ,int ) ;
 int FUNC_10 (struct net_device*,int ,int ,scalar_t__) ;

int FUNC_11(struct mii_if_info *VAR_27,
       const struct ethtool_link_ksettings *VAR_28)
{
 struct net_device *VAR_29 = VAR_27->dev;
 u32 VAR_30 = VAR_28->base.speed;

 if (VAR_30 != VAR_24 &&
     VAR_30 != VAR_25 &&
     VAR_30 != VAR_26)
  return -VAR_19;
 if (VAR_28->base.duplex != VAR_18 && VAR_28->base.duplex != VAR_17)
  return -VAR_19;
 if (VAR_28->base.port != VAR_23)
  return -VAR_19;
 if (VAR_28->base.phy_address != VAR_27->phy_id)
  return -VAR_19;
 if (VAR_28->base.autoneg != VAR_10 &&
     VAR_28->base.autoneg != VAR_11)
  return -VAR_19;
 if ((VAR_30 == VAR_26) && (!VAR_27->supports_gmii))
  return -VAR_19;



 if (VAR_28->base.autoneg == VAR_11) {
  u32 VAR_31, VAR_32, VAR_33;
  u32 VAR_34 = 0, VAR_35 = 0;
  u32 VAR_36;

  FUNC_2(
   &VAR_36, VAR_28->link_modes.advertising);

  if ((VAR_36 & (VAR_5 |
        VAR_4 |
        VAR_3 |
        VAR_2 |
        VAR_1 |
        VAR_0)) == 0)
   return -VAR_19;


  VAR_32 = VAR_27->mdio_read(VAR_29, VAR_27->phy_id, VAR_20);
  VAR_33 = VAR_32 & ~(VAR_9 | VAR_8);
  if (VAR_27->supports_gmii) {
   VAR_34 = VAR_27->mdio_read(VAR_29, VAR_27->phy_id,
       VAR_22);
   VAR_35 = VAR_34 &
    ~(VAR_7 | VAR_6);
  }
  VAR_33 |= FUNC_0(VAR_36);

  if (VAR_27->supports_gmii)
   VAR_35 |= FUNC_1(VAR_36);
  if (VAR_32 != VAR_33) {
   VAR_27->mdio_write(VAR_29, VAR_27->phy_id, VAR_20, VAR_33);
   VAR_27->advertising = VAR_33;
  }
  if ((VAR_27->supports_gmii) && (VAR_34 != VAR_35))
   VAR_27->mdio_write(VAR_29, VAR_27->phy_id, VAR_22, VAR_35);


  VAR_31 = VAR_27->mdio_read(VAR_29, VAR_27->phy_id, VAR_21);
  VAR_31 |= (VAR_12 | VAR_13);
  VAR_27->mdio_write(VAR_29, VAR_27->phy_id, VAR_21, VAR_31);

  VAR_27->force_media = 0;
 } else {
  u32 VAR_37, VAR_38;


  VAR_37 = VAR_27->mdio_read(VAR_29, VAR_27->phy_id, VAR_21);
  VAR_38 = VAR_37 & ~(VAR_12 | VAR_15 |
          VAR_16 | VAR_14);
  if (VAR_30 == VAR_26)
   VAR_38 |= VAR_16;
  else if (VAR_30 == VAR_25)
   VAR_38 |= VAR_15;
  if (VAR_28->base.duplex == VAR_17) {
   VAR_38 |= VAR_14;
   VAR_27->full_duplex = 1;
  } else {
   VAR_27->full_duplex = 0;
  }
  if (VAR_37 != VAR_38)
   VAR_27->mdio_write(VAR_29, VAR_27->phy_id, VAR_21, VAR_38);

  VAR_27->force_media = 1;
 }
 return 0;
}
