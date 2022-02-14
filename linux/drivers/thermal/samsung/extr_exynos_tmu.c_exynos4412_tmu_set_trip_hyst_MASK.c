
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct exynos_tmu_data {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct exynos_tmu_data*,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct exynos_tmu_data *VAR_1,
      int VAR_2, u8 VAR_3, u8 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_1->base + VAR_0);
 VAR_5 &= ~(0xff << 8 * VAR_2);
 if (VAR_4)
  VAR_5 |= FUNC_1(VAR_1, VAR_3 - VAR_4) << 8 * VAR_2;
 FUNC_2(VAR_5, VAR_1->base + VAR_0);
}
