
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int link; scalar_t__ autoneg; int speed; int duplex; scalar_t__ autoneg_complete; scalar_t__ asym_pause; scalar_t__ pause; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*) ;

int FUNC_4(struct phy_device *VAR_13)
{
 int VAR_14, VAR_15 = VAR_13->link;


 VAR_14 = FUNC_1(VAR_13);
 if (VAR_14)
  return VAR_14;


 if (VAR_13->autoneg == VAR_1 && VAR_15 && VAR_13->link)
  return 0;

 VAR_13->speed = VAR_12;
 VAR_13->duplex = VAR_7;
 VAR_13->pause = 0;
 VAR_13->asym_pause = 0;

 VAR_14 = FUNC_0(VAR_13);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_13->autoneg == VAR_1 && VAR_13->autoneg_complete) {
  FUNC_3(VAR_13);
 } else if (VAR_13->autoneg == VAR_0) {
  int VAR_16 = FUNC_2(VAR_13, VAR_8);

  if (VAR_16 < 0)
   return VAR_16;

  if (VAR_16 & VAR_2)
   VAR_13->duplex = VAR_5;
  else
   VAR_13->duplex = VAR_6;

  if (VAR_16 & VAR_4)
   VAR_13->speed = VAR_11;
  else if (VAR_16 & VAR_3)
   VAR_13->speed = VAR_10;
  else
   VAR_13->speed = VAR_9;
 }

 return 0;
}
