
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos5_usbdrd_phy {scalar_t__ reg_phy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct exynos5_usbdrd_phy *VAR_10)
{
 u32 VAR_11;

 VAR_11 = FUNC_0(VAR_10->reg_phy + VAR_0);

 VAR_11 &= ~VAR_5;
 VAR_11 |= VAR_4;
 FUNC_1(VAR_11, VAR_10->reg_phy + VAR_0);

 VAR_11 = FUNC_0(VAR_10->reg_phy + VAR_1);

 VAR_11 &= ~VAR_7;
 VAR_11 |= VAR_6;
 FUNC_1(VAR_11, VAR_10->reg_phy + VAR_1);


 FUNC_1(VAR_9, VAR_10->reg_phy + VAR_3);

 VAR_11 = FUNC_0(VAR_10->reg_phy + VAR_2);
 VAR_11 &= ~VAR_8;
 FUNC_1(VAR_11, VAR_10->reg_phy + VAR_2);
}
