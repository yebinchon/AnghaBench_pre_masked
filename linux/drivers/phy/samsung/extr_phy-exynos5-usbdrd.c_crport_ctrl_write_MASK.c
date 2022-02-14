
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos5_usbdrd_phy {scalar_t__ reg_phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct exynos5_usbdrd_phy*,int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct exynos5_usbdrd_phy *VAR_4,
        u32 VAR_5, u32 VAR_6)
{
 int VAR_7;


 FUNC_2(FUNC_0(VAR_5),
        VAR_4->reg_phy + VAR_0);
 VAR_7 = FUNC_1(VAR_4, FUNC_0(VAR_5),
          VAR_1);
 if (VAR_7)
  return VAR_7;


 FUNC_2(FUNC_0(VAR_6),
        VAR_4->reg_phy + VAR_0);
 VAR_7 = FUNC_1(VAR_4, FUNC_0(VAR_6),
          VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_4, FUNC_0(VAR_6),
          VAR_3);

 return VAR_7;
}
