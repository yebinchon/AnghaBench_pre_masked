
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sky2_port {int advertising; int duplex; int speed; int flags; struct sky2_hw* hw; } ;
struct sky2_hw {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ autoneg; int speed; int duplex; } ;
struct TYPE_3__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int FUNC_0 (int*,int ) ;
 struct sky2_port* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct sky2_hw const*) ;
 int FUNC_4 (struct sky2_port*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sky2_hw const*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_14,
       const struct ethtool_link_ksettings *VAR_15)
{
 struct sky2_port *VAR_16 = FUNC_1(VAR_14);
 const struct sky2_hw *VAR_17 = VAR_16->hw;
 u32 VAR_18 = FUNC_6(VAR_17);
 u32 VAR_19;

 FUNC_0(&VAR_19,
      VAR_15->link_modes.advertising);

 if (VAR_15->base.autoneg == VAR_3) {
  if (VAR_19 & ~VAR_18)
   return -VAR_6;

  if (FUNC_3(VAR_17))
   VAR_16->advertising = VAR_19 |
         VAR_2 |
         VAR_0;
  else
   VAR_16->advertising = VAR_19 |
         VAR_1 |
         VAR_0;

  VAR_16->flags |= VAR_7;
  VAR_16->duplex = -1;
  VAR_16->speed = -1;
 } else {
  u32 VAR_20;
  u32 VAR_21 = VAR_15->base.speed;

  switch (VAR_21) {
  case 128:
   if (VAR_15->base.duplex == VAR_4)
    VAR_20 = VAR_8;
   else if (VAR_15->base.duplex == VAR_5)
    VAR_20 = VAR_9;
   else
    return -VAR_6;
   break;
  case 129:
   if (VAR_15->base.duplex == VAR_4)
    VAR_20 = VAR_10;
   else if (VAR_15->base.duplex == VAR_5)
    VAR_20 = VAR_11;
   else
    return -VAR_6;
   break;

  case 130:
   if (VAR_15->base.duplex == VAR_4)
    VAR_20 = VAR_12;
   else if (VAR_15->base.duplex == VAR_5)
    VAR_20 = VAR_13;
   else
    return -VAR_6;
   break;
  default:
   return -VAR_6;
  }

  if ((VAR_20 & VAR_18) == 0)
   return -VAR_6;

  VAR_16->speed = VAR_21;
  VAR_16->duplex = VAR_15->base.duplex;
  VAR_16->flags &= ~VAR_7;
 }

 if (FUNC_2(VAR_14)) {
  FUNC_4(VAR_16);
  FUNC_5(VAR_14);
 }

 return 0;
}
