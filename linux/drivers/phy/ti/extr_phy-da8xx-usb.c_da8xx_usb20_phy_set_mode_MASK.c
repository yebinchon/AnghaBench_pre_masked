
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct da8xx_usb_phy {int regmap; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 struct da8xx_usb_phy* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_5,
        enum phy_mode VAR_6, int VAR_7)
{
 struct da8xx_usb_phy *VAR_8 = FUNC_1(VAR_5);
 u32 VAR_9;

 switch (VAR_6) {
 case 129:
  VAR_9 = VAR_1;
  break;
 case 130:
  VAR_9 = VAR_0;
  break;
 case 128:
  VAR_9 = VAR_3;
  break;
 default:
  return -VAR_4;
 }

 FUNC_2(VAR_8->regmap, FUNC_0(2), VAR_2,
     VAR_9);

 return 0;
}
