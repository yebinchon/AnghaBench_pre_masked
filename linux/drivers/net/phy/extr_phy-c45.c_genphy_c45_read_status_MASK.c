
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; scalar_t__ asym_pause; scalar_t__ pause; int duplex; int speed; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*) ;

int FUNC_4(struct phy_device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_3->speed = VAR_2;
 VAR_3->duplex = VAR_1;
 VAR_3->pause = 0;
 VAR_3->asym_pause = 0;

 if (VAR_3->autoneg == VAR_0) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4)
   return VAR_4;

  FUNC_3(VAR_3);
 } else {
  VAR_4 = FUNC_2(VAR_3);
 }

 return VAR_4;
}
