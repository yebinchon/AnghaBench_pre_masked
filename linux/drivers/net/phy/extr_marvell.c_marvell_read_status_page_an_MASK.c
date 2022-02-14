
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ duplex; int pause; int asym_pause; int lp_advertising; int speed; } ;


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
 int VAR_13 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_14,
           int VAR_15)
{
 int VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_16 = FUNC_3(VAR_14, VAR_7);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_17 = FUNC_3(VAR_14, VAR_6);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_18 = FUNC_3(VAR_14, VAR_10);
 if (VAR_18 < 0)
  return VAR_18;

 if (VAR_16 & VAR_8)
  VAR_14->duplex = VAR_0;
 else
  VAR_14->duplex = VAR_1;

 VAR_16 = VAR_16 & VAR_9;
 VAR_14->pause = 0;
 VAR_14->asym_pause = 0;

 switch (VAR_16) {
 case 128:
  VAR_14->speed = VAR_13;
  break;

 case 129:
  VAR_14->speed = VAR_12;
  break;

 default:
  VAR_14->speed = VAR_11;
  break;
 }

 if (!VAR_15) {
  FUNC_1(VAR_14->lp_advertising, VAR_17);
  FUNC_2(VAR_14->lp_advertising, VAR_18);

  if (VAR_14->duplex == VAR_0) {
   VAR_14->pause = VAR_17 & VAR_4 ? 1 : 0;
   VAR_14->asym_pause = VAR_17 & VAR_2 ? 1 : 0;
  }
 } else {

  FUNC_0(VAR_14->lp_advertising, VAR_17);

  if (VAR_14->duplex == VAR_0) {
   if (!(VAR_17 & VAR_5)) {
    VAR_14->pause = 0;
    VAR_14->asym_pause = 0;
   } else if ((VAR_17 & VAR_3)) {
    VAR_14->pause = 1;
    VAR_14->asym_pause = 1;
   } else {
    VAR_14->pause = 1;
    VAR_14->asym_pause = 0;
   }
  }
 }
 return 0;
}
