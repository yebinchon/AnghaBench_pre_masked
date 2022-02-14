
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_phy {scalar_t__ autoneg; int features; scalar_t__ duplex; int pause; int asym_pause; void* speed; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct mii_phy*,int ) ;

__attribute__((used)) static int FUNC_1(struct mii_phy *VAR_23)
{
 if (VAR_23->autoneg == VAR_0) {
  int VAR_24 = 0;
  int VAR_25 = FUNC_0(VAR_23, VAR_16) & FUNC_0(VAR_23, VAR_13);
  if (VAR_25 < 0)
   return VAR_25;

  if (VAR_23->features &
      (VAR_21 | VAR_22)) {
   int VAR_26 = FUNC_0(VAR_23, VAR_15);
   VAR_24 = FUNC_0(VAR_23, VAR_17);

   if (VAR_24 < 0 || VAR_26 < 0)
    return VAR_26;

   VAR_24 &= VAR_26 << 2;
  }

  VAR_23->speed = VAR_18;
  VAR_23->duplex = VAR_5;
  VAR_23->pause = VAR_23->asym_pause = 0;

  if (VAR_24 & (VAR_6 | VAR_7)) {
   VAR_23->speed = VAR_20;
   if (VAR_24 & VAR_6)
    VAR_23->duplex = VAR_4;
  } else if (VAR_25 & (VAR_8 | VAR_9)) {
   VAR_23->speed = VAR_19;
   if (VAR_25 & VAR_8)
    VAR_23->duplex = VAR_4;
  } else if (VAR_25 & VAR_10)
   VAR_23->duplex = VAR_4;

  if (VAR_23->duplex == VAR_4) {
   VAR_23->pause = VAR_25 & VAR_12 ? 1 : 0;
   VAR_23->asym_pause = VAR_25 & VAR_11 ? 1 : 0;
  }
 } else {
  int VAR_27 = FUNC_0(VAR_23, VAR_14);
  if (VAR_27 < 0)
   return VAR_27;

  if (VAR_27 & VAR_1)
   VAR_23->duplex = VAR_4;
  else
   VAR_23->duplex = VAR_5;
  if (VAR_27 & VAR_3)
   VAR_23->speed = VAR_20;
  else if (VAR_27 & VAR_2)
   VAR_23->speed = VAR_19;
  else
   VAR_23->speed = VAR_18;

  VAR_23->pause = VAR_23->asym_pause = 0;
 }
 return 0;
}
