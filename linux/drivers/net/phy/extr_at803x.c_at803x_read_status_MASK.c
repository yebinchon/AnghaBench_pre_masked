
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int link; scalar_t__ autoneg; scalar_t__ autoneg_complete; int mdix; int duplex; int speed; scalar_t__ asym_pause; scalar_t__ pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_15)
{
 int VAR_16, VAR_17, VAR_18 = VAR_15->link;


 VAR_17 = FUNC_1(VAR_15);
 if (VAR_17)
  return VAR_17;


 if (VAR_15->autoneg == VAR_5 && VAR_18 && VAR_15->link)
  return 0;

 VAR_15->speed = VAR_14;
 VAR_15->duplex = VAR_8;
 VAR_15->pause = 0;
 VAR_15->asym_pause = 0;

 VAR_17 = FUNC_0(VAR_15);
 if (VAR_17 < 0)
  return VAR_17;





 VAR_16 = FUNC_2(VAR_15, VAR_0);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_16 & VAR_3) {
  switch (VAR_16 & VAR_4) {
  case 130:
   VAR_15->speed = VAR_11;
   break;
  case 129:
   VAR_15->speed = VAR_12;
   break;
  case 128:
   VAR_15->speed = VAR_13;
   break;
  }
  if (VAR_16 & VAR_1)
   VAR_15->duplex = VAR_6;
  else
   VAR_15->duplex = VAR_7;
  if (VAR_16 & VAR_2)
   VAR_15->mdix = VAR_10;
  else
   VAR_15->mdix = VAR_9;
 }

 if (VAR_15->autoneg == VAR_5 && VAR_15->autoneg_complete)
  FUNC_3(VAR_15);

 return 0;
}
