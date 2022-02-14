
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos5_usbdrd_phy {scalar_t__ reg_phy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct exynos5_usbdrd_phy *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5->reg_phy + VAR_0);

 VAR_6 &= ~VAR_3;
 VAR_6 |= VAR_2;
 FUNC_1(VAR_6, VAR_5->reg_phy + VAR_0);

 VAR_6 = FUNC_0(VAR_5->reg_phy + VAR_1);
 VAR_6 &= ~VAR_4;
 FUNC_1(VAR_6, VAR_5->reg_phy + VAR_1);
}
