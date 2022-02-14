
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct netdev_private {scalar_t__ autoneg; int phy_addr_external; int advertising; scalar_t__ speed; scalar_t__ duplex; scalar_t__ full_duplex; scalar_t__ ignore_phy; } ;
struct net_device {scalar_t__ if_port; } ;
struct TYPE_4__ {scalar_t__ port; scalar_t__ autoneg; scalar_t__ speed; scalar_t__ duplex; int phy_address; } ;
struct TYPE_3__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct netdev_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_21,
      const struct ethtool_link_ksettings *VAR_22)
{
 struct netdev_private *VAR_23 = FUNC_3(VAR_21);
 u32 VAR_24;

 FUNC_1(&VAR_24,
      VAR_22->link_modes.advertising);

 if (VAR_22->base.port != VAR_17 &&
     VAR_22->base.port != VAR_16 &&
     VAR_22->base.port != VAR_15)
  return -VAR_14;
 if (VAR_22->base.autoneg == VAR_11) {
  if ((VAR_24 & (VAR_3 |
       VAR_2 |
       VAR_1 |
       VAR_0)) == 0) {
   return -VAR_14;
  }
 } else if (VAR_22->base.autoneg == VAR_10) {
  u32 VAR_25 = VAR_22->base.speed;
  if (VAR_25 != VAR_19 && VAR_25 != VAR_20)
   return -VAR_14;
  if (VAR_22->base.duplex != VAR_13 &&
      VAR_22->base.duplex != VAR_12)
   return -VAR_14;
 } else {
  return -VAR_14;
 }






 if (VAR_23->ignore_phy && (VAR_22->base.autoneg == VAR_11 ||
          VAR_22->base.port == VAR_17))
  return -VAR_14;
 VAR_21->if_port = VAR_22->base.port;
 VAR_23->autoneg = VAR_22->base.autoneg;
 VAR_23->phy_addr_external = VAR_22->base.phy_address & VAR_18;
 if (VAR_23->autoneg == VAR_11) {

  VAR_23->advertising &= ~(VAR_9 | VAR_4);
  if (VAR_24 & VAR_3)
   VAR_23->advertising |= VAR_8;
  if (VAR_24 & VAR_2)
   VAR_23->advertising |= VAR_7;
  if (VAR_24 & VAR_1)
   VAR_23->advertising |= VAR_6;
  if (VAR_24 & VAR_0)
   VAR_23->advertising |= VAR_5;
 } else {
  VAR_23->speed = VAR_22->base.speed;
  VAR_23->duplex = VAR_22->base.duplex;

  if (VAR_23->duplex == VAR_13)
   VAR_23->full_duplex = 0;
 }


 if (VAR_22->base.port == VAR_17)
  FUNC_5(VAR_21);
 else
  FUNC_4(VAR_21);


 FUNC_2(VAR_21);
 FUNC_0(VAR_21);
 return 0;
}
