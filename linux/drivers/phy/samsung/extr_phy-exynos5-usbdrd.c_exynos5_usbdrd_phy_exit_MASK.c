
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_usb_instance {int dummy; } ;
struct phy {int dummy; } ;
struct exynos5_usbdrd_phy {int clk; scalar_t__ reg_phy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct phy_usb_instance* FUNC_2 (struct phy*) ;
 int FUNC_3 (scalar_t__) ;
 struct exynos5_usbdrd_phy* FUNC_4 (struct phy_usb_instance*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_11)
{
 int VAR_12;
 u32 VAR_13;
 struct phy_usb_instance *VAR_14 = FUNC_2(VAR_11);
 struct exynos5_usbdrd_phy *VAR_15 = FUNC_4(VAR_14);

 VAR_12 = FUNC_1(VAR_15->clk);
 if (VAR_12)
  return VAR_12;

 VAR_13 = VAR_10 |
  VAR_9 |
  VAR_8;
 FUNC_5(VAR_13, VAR_15->reg_phy + VAR_2);


 VAR_13 = FUNC_3(VAR_15->reg_phy + VAR_0);
 VAR_13 &= ~(VAR_4 |
   VAR_5 |
   VAR_3);
 FUNC_5(VAR_13, VAR_15->reg_phy + VAR_0);


 VAR_13 = FUNC_3(VAR_15->reg_phy + VAR_1);
 VAR_13 |= VAR_7 |
  VAR_6;
 FUNC_5(VAR_13, VAR_15->reg_phy + VAR_1);

 FUNC_0(VAR_15->clk);

 return 0;
}
