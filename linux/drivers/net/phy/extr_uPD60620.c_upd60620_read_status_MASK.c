
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int link; int pause; int asym_pause; scalar_t__ duplex; int lp_advertising; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_14)
{
 int VAR_15;


 VAR_15 = FUNC_2(VAR_14, VAR_6);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_14->link = 0;
 FUNC_0(VAR_14->lp_advertising);
 VAR_14->pause = 0;
 VAR_14->asym_pause = 0;

 if (VAR_15 & (VAR_0 | VAR_1)) {
  VAR_15 = FUNC_2(VAR_14, VAR_8);
  if (VAR_15 < 0)
   return VAR_15;

  if (VAR_15 & (VAR_10 | VAR_9)) {
   VAR_14->link = 1;
   VAR_14->speed = VAR_12;
   VAR_14->duplex = VAR_3;

   if (VAR_15 & VAR_9)
    VAR_14->speed = VAR_13;
   if (VAR_15 & VAR_11)
    VAR_14->duplex = VAR_2;

   VAR_15 = FUNC_2(VAR_14, VAR_7);
   if (VAR_15 < 0)
    return VAR_15;

   FUNC_1(VAR_14->lp_advertising,
        VAR_15);

   if (VAR_14->duplex == VAR_2) {
    if (VAR_15 & VAR_5)
     VAR_14->pause = 1;
    if (VAR_15 & VAR_4)
     VAR_14->asym_pause = 1;
   }
  }
 }
 return 0;
}
