
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct phy_usb_instance {int dummy; } ;
struct exynos5_usbdrd_phy {int extrefclk; int dev; scalar_t__ reg_phy; } ;


 scalar_t__ VAR_0 ;




 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_9 ;
 int FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 struct exynos5_usbdrd_phy* FUNC_3 (struct phy_usb_instance*) ;

__attribute__((used)) static unsigned int
FUNC_4(struct phy_usb_instance *VAR_10)
{
 u32 VAR_11;
 struct exynos5_usbdrd_phy *VAR_12 = FUNC_3(VAR_10);


 VAR_11 = FUNC_2(VAR_12->reg_phy + VAR_0);


 VAR_11 &= ~VAR_8;
 VAR_11 |= VAR_7;


 VAR_11 &= ~VAR_1 |
  VAR_6 |
  VAR_9;
 switch (VAR_12->extrefclk) {
 case 128:
  VAR_11 |= (VAR_5 |
   FUNC_0(0x00));
  break;
 case 129:
  VAR_11 |= (VAR_4 |
   FUNC_0(0x88));
  break;
 case 130:
  VAR_11 |= (VAR_3 |
   FUNC_0(0x00));
  break;
 case 131:
  VAR_11 |= (VAR_2 |
   FUNC_0(0x88));
  break;
 default:
  FUNC_1(VAR_12->dev, "unsupported ref clk\n");
  break;
 }

 return VAR_11;
}
