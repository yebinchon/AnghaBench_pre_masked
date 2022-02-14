
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct phy_usb_instance {int dummy; } ;
struct exynos5_usbdrd_phy {int extrefclk; scalar_t__ reg_phy; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_1 (scalar_t__) ;
 struct exynos5_usbdrd_phy* FUNC_2 (struct phy_usb_instance*) ;

__attribute__((used)) static unsigned int
FUNC_3(struct phy_usb_instance *VAR_6)
{
 u32 VAR_7;
 struct exynos5_usbdrd_phy *VAR_8 = FUNC_2(VAR_6);


 VAR_7 = FUNC_1(VAR_8->reg_phy + VAR_0);

 VAR_7 &= ~VAR_4;
 VAR_7 |= VAR_3;

 VAR_7 &= ~VAR_1 |
  VAR_2 |
  VAR_5;
 VAR_7 |= FUNC_0(VAR_8->extrefclk);

 return VAR_7;
}
