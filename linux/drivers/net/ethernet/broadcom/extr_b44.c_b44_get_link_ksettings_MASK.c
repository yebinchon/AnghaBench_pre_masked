
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int phydev; } ;
struct TYPE_4__ {int duplex; scalar_t__ autoneg; scalar_t__ speed; int phy_address; scalar_t__ port; } ;
struct TYPE_3__ {int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;
struct b44 {int flags; int phy_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int ,int) ;
 struct b44* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,struct ethtool_link_ksettings*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_27,
      struct ethtool_link_ksettings *VAR_28)
{
 struct b44 *VAR_29 = FUNC_2(VAR_27);
 u32 VAR_30, VAR_31;

 if (VAR_29->flags & VAR_14) {
  FUNC_0(!VAR_27->phydev);
  FUNC_4(VAR_27->phydev, VAR_28);

  return 0;
 }

 VAR_30 = (VAR_25);
 VAR_30 |= (VAR_22 |
        VAR_21 |
        VAR_24 |
        VAR_23 |
        VAR_26);

 VAR_31 = 0;
 if (VAR_29->flags & VAR_13)
  VAR_31 |= VAR_3;
 if (VAR_29->flags & VAR_12)
  VAR_31 |= VAR_2;
 if (VAR_29->flags & VAR_11)
  VAR_31 |= VAR_1;
 if (VAR_29->flags & VAR_10)
  VAR_31 |= VAR_0;
 VAR_31 |= VAR_6 | VAR_4;
 VAR_28->base.speed = (VAR_29->flags & VAR_9) ?
  VAR_20 : VAR_19;
 VAR_28->base.duplex = (VAR_29->flags & VAR_16) ?
  VAR_17 : VAR_18;
 VAR_28->base.port = 0;
 VAR_28->base.phy_address = VAR_29->phy_addr;
 VAR_28->base.autoneg = (VAR_29->flags & VAR_15) ?
  VAR_7 : VAR_8;
 if (VAR_28->base.autoneg == VAR_8)
  VAR_31 |= VAR_5;

 FUNC_1(VAR_28->link_modes.supported,
      VAR_30);
 FUNC_1(VAR_28->link_modes.advertising,
      VAR_31);

 if (!FUNC_3(VAR_27)){
  VAR_28->base.speed = 0;
  VAR_28->base.duplex = 0xff;
 }

 return 0;
}
