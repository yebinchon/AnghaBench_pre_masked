
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int phydev; } ;
struct TYPE_4__ {int speed; scalar_t__ autoneg; scalar_t__ duplex; } ;
struct TYPE_3__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;
struct b44 {int flags; int lock; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct b44*) ;
 int FUNC_2 (int*,int ) ;
 struct b44* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,struct ethtool_link_ksettings const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_20,
      const struct ethtool_link_ksettings *VAR_21)
{
 struct b44 *VAR_22 = FUNC_3(VAR_20);
 u32 VAR_23;
 int VAR_24;
 u32 VAR_25;

 if (VAR_22->flags & VAR_12) {
  FUNC_0(!VAR_20->phydev);
  FUNC_6(&VAR_22->lock);
  if (FUNC_4(VAR_20))
   FUNC_1(VAR_22);

  VAR_24 = FUNC_5(VAR_20->phydev, VAR_21);

  FUNC_7(&VAR_22->lock);

  return VAR_24;
 }

 VAR_23 = VAR_21->base.speed;

 FUNC_2(&VAR_25,
      VAR_21->link_modes.advertising);


 if (VAR_21->base.autoneg == VAR_6) {
  if (VAR_25 &
      (VAR_1 |
       VAR_0))
   return -VAR_17;
 } else if ((VAR_23 != VAR_19 &&
      VAR_23 != VAR_18) ||
     (VAR_21->base.duplex != VAR_16 &&
      VAR_21->base.duplex != VAR_15)) {
   return -VAR_17;
 }

 FUNC_6(&VAR_22->lock);

 if (VAR_21->base.autoneg == VAR_6) {
  VAR_22->flags &= ~(VAR_13 |
          VAR_7 |
          VAR_14 |
          VAR_11 |
          VAR_10 |
          VAR_9 |
          VAR_8);
  if (VAR_25 == 0) {
   VAR_22->flags |= (VAR_11 |
          VAR_10 |
          VAR_9 |
          VAR_8);
  } else {
   if (VAR_25 & VAR_5)
    VAR_22->flags |= VAR_11;
   if (VAR_25 & VAR_4)
    VAR_22->flags |= VAR_10;
   if (VAR_25 & VAR_3)
    VAR_22->flags |= VAR_9;
   if (VAR_25 & VAR_2)
    VAR_22->flags |= VAR_8;
  }
 } else {
  VAR_22->flags |= VAR_13;
  VAR_22->flags &= ~(VAR_7 | VAR_14);
  if (VAR_23 == VAR_19)
   VAR_22->flags |= VAR_7;
  if (VAR_21->base.duplex == VAR_15)
   VAR_22->flags |= VAR_14;
 }

 if (FUNC_4(VAR_20))
  FUNC_1(VAR_22);

 FUNC_7(&VAR_22->lock);

 return 0;
}
