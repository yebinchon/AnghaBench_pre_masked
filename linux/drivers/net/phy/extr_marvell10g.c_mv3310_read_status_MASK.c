
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ speed; scalar_t__ autoneg; scalar_t__ mdix; int lp_advertising; scalar_t__ asym_pause; scalar_t__ pause; scalar_t__ link; int duplex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

 int VAR_13 ;

 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct phy_device*) ;
 int FUNC_7 (struct phy_device*) ;
 int FUNC_8 (struct phy_device*,int ,scalar_t__) ;
 int FUNC_9 (struct phy_device*) ;

__attribute__((used)) static int FUNC_10(struct phy_device *VAR_16)
{
 int VAR_17;

 VAR_16->speed = VAR_15;
 VAR_16->duplex = VAR_1;
 FUNC_4(VAR_16->lp_advertising);
 VAR_16->link = 0;
 VAR_16->pause = 0;
 VAR_16->asym_pause = 0;
 VAR_16->mdix = 0;

 VAR_17 = FUNC_8(VAR_16, VAR_7, VAR_11 + VAR_8);
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_17 & VAR_9)
  return FUNC_6(VAR_16);

 VAR_17 = FUNC_0(VAR_16);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_8(VAR_16, VAR_6, VAR_8);
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_17 & VAR_5) {
  VAR_17 = FUNC_1(VAR_16);
  if (VAR_17 < 0)
   return VAR_17;


  VAR_17 = FUNC_8(VAR_16, VAR_6, VAR_10);
  if (VAR_17 < 0)
   return VAR_17;

  FUNC_5(VAR_16->lp_advertising, VAR_17);

  if (VAR_16->autoneg == VAR_0)
   FUNC_9(VAR_16);
 }

 if (VAR_16->autoneg != VAR_0) {
  VAR_17 = FUNC_3(VAR_16);
  if (VAR_17 < 0)
   return VAR_17;
 }

 if (VAR_16->speed == VAR_14) {
  VAR_17 = FUNC_2(VAR_16);
  if (VAR_17 < 0)
   return VAR_17;
 } else {
  VAR_17 = FUNC_8(VAR_16, VAR_7, VAR_12);
  if (VAR_17 < 0)
   return VAR_17;

  switch (VAR_17 & VAR_13) {
  case 129:
   VAR_16->mdix = VAR_4;
   break;
  case 128:
   VAR_16->mdix = VAR_2;
   break;
  default:
   VAR_16->mdix = VAR_3;
   break;
  }
 }

 FUNC_7(VAR_16);

 return 0;
}
