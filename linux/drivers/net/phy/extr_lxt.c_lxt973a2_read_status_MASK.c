
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; scalar_t__ duplex; int pause; int asym_pause; int lp_advertising; void* speed; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_17)
{
 int VAR_18;
 int VAR_19;
 int VAR_20;


 VAR_19 = FUNC_1(VAR_17);
 if (VAR_19)
  return VAR_19;

 if (VAR_0 == VAR_17->autoneg) {
  int VAR_21 = 1;

  VAR_18 = FUNC_3(VAR_17, VAR_11);

  if (VAR_18 < 0)
   return VAR_18;

  do {
   VAR_20 = FUNC_3(VAR_17, VAR_13);

   if (VAR_20 < 0)
    return VAR_20;




  } while (VAR_20 == VAR_18 && VAR_21--);

  FUNC_2(VAR_17->lp_advertising, VAR_20);

  VAR_20 &= VAR_18;

  VAR_17->speed = VAR_14;
  VAR_17->duplex = VAR_5;
  VAR_17->pause = VAR_17->asym_pause = 0;

  if (VAR_20 & (VAR_6 | VAR_7)) {
   VAR_17->speed = VAR_15;

   if (VAR_20 & VAR_6)
    VAR_17->duplex = VAR_4;
  } else {
   if (VAR_20 & VAR_8)
    VAR_17->duplex = VAR_4;
  }

  if (VAR_17->duplex == VAR_4) {
   VAR_17->pause = VAR_20 & VAR_10 ? 1 : 0;
   VAR_17->asym_pause = VAR_20 & VAR_9 ? 1 : 0;
  }
 } else {
  int VAR_22 = FUNC_3(VAR_17, VAR_12);

  if (VAR_22 < 0)
   return VAR_22;

  if (VAR_22 & VAR_1)
   VAR_17->duplex = VAR_4;
  else
   VAR_17->duplex = VAR_5;

  if (VAR_22 & VAR_3)
   VAR_17->speed = VAR_16;
  else if (VAR_22 & VAR_2)
   VAR_17->speed = VAR_15;
  else
   VAR_17->speed = VAR_14;

  VAR_17->pause = VAR_17->asym_pause = 0;
  FUNC_0(VAR_17->lp_advertising);
 }

 return 0;
}
