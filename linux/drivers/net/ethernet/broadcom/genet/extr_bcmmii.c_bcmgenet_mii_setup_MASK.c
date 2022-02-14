
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {scalar_t__ link; scalar_t__ speed; scalar_t__ duplex; scalar_t__ pause; } ;
struct net_device {struct phy_device* phydev; } ;
struct bcmgenet_priv {scalar_t__ old_link; scalar_t__ old_speed; scalar_t__ old_duplex; scalar_t__ old_pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct bcmgenet_priv*,int ) ;
 int FUNC_1 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_2 (struct bcmgenet_priv*,int ) ;
 int FUNC_3 (struct bcmgenet_priv*,int,int ) ;
 struct bcmgenet_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct phy_device*) ;

void FUNC_7(struct net_device *VAR_15)
{
 struct bcmgenet_priv *VAR_16 = FUNC_4(VAR_15);
 struct phy_device *VAR_17 = VAR_15->phydev;
 u32 VAR_18, VAR_19 = 0;
 bool VAR_20 = 0;

 if (VAR_16->old_link != VAR_17->link) {
  VAR_20 = 1;
  VAR_16->old_link = VAR_17->link;
 }

 if (VAR_17->link) {

  if (VAR_16->old_speed != VAR_17->speed) {
   VAR_20 = 1;
   VAR_16->old_speed = VAR_17->speed;
  }

  if (VAR_16->old_duplex != VAR_17->duplex) {
   VAR_20 = 1;
   VAR_16->old_duplex = VAR_17->duplex;
  }

  if (VAR_16->old_pause != VAR_17->pause) {
   VAR_20 = 1;
   VAR_16->old_pause = VAR_17->pause;
  }


  if (!VAR_20)
   return;


  if (VAR_17->speed == VAR_10)
   VAR_19 = VAR_14;
  else if (VAR_17->speed == VAR_9)
   VAR_19 = VAR_13;
  else
   VAR_19 = VAR_12;
  VAR_19 <<= VAR_3;


  if (VAR_17->duplex != VAR_5)
   VAR_19 |= VAR_0;


  if (!VAR_17->pause)
   VAR_19 |= VAR_1 | VAR_4;
  VAR_18 = FUNC_0(VAR_16, VAR_6);
  VAR_18 &= ~VAR_7;
  VAR_18 |= VAR_8;
  FUNC_1(VAR_16, VAR_18, VAR_6);

  VAR_18 = FUNC_2(VAR_16, VAR_11);
  VAR_18 &= ~((VAR_2 << VAR_3) |
          VAR_0 |
          VAR_1 | VAR_4);
  VAR_18 |= VAR_19;
  FUNC_3(VAR_16, VAR_18, VAR_11);
 } else {

  if (!VAR_20)
   return;


  FUNC_5(VAR_15);
 }

 FUNC_6(VAR_17);
}
