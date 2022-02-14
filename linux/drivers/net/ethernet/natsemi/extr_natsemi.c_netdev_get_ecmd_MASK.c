
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct netdev_private {int advertising; int phy_addr_external; int autoneg; int duplex; int speed; } ;
struct net_device {int if_port; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int port; int duplex; int speed; int autoneg; int phy_address; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;



 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct net_device*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 struct netdev_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_29,
      struct ethtool_link_ksettings *VAR_30)
{
 struct netdev_private *VAR_31 = FUNC_3(VAR_29);
 u32 VAR_32, VAR_33;
 u32 VAR_34;

 VAR_30->base.port = VAR_29->if_port;
 VAR_30->base.speed = VAR_31->speed;
 VAR_30->base.duplex = VAR_31->duplex;
 VAR_30->base.autoneg = VAR_31->autoneg;
 VAR_33 = 0;

 if (VAR_31->advertising & VAR_11)
  VAR_33 |= VAR_3;
 if (VAR_31->advertising & VAR_10)
  VAR_33 |= VAR_2;
 if (VAR_31->advertising & VAR_9)
  VAR_33 |= VAR_1;
 if (VAR_31->advertising & VAR_8)
  VAR_33 |= VAR_0;
 VAR_32 = (VAR_25 |
  VAR_24 | VAR_23 |
  VAR_22 | VAR_21 |
  VAR_28 | VAR_27 | VAR_26);
 VAR_30->base.phy_address = VAR_31->phy_addr_external;
 switch (VAR_30->base.port) {
 default:
 case 128:
  VAR_33 |= VAR_7;
  break;
 case 129:
  VAR_33 |= VAR_6;
  break;
 case 130:
  VAR_33 |= VAR_5;
  break;
 }


 if (VAR_30->base.autoneg == VAR_12) {
  VAR_33 |= VAR_4;
  VAR_34 = FUNC_2(
   VAR_31->advertising & FUNC_1(VAR_29, VAR_18));
  if (VAR_34 == VAR_15 || VAR_34 == VAR_16)
   VAR_30->base.speed = VAR_20;
  else
   VAR_30->base.speed = VAR_19;
  if (VAR_34 == VAR_15 || VAR_34 == VAR_17)
   VAR_30->base.duplex = VAR_13;
  else
   VAR_30->base.duplex = VAR_14;
 }



 FUNC_0(VAR_30->link_modes.supported,
      VAR_32);
 FUNC_0(VAR_30->link_modes.advertising,
      VAR_33);

 return 0;
}
