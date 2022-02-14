
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct exynos_tmu_data {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct exynos_tmu_data*,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct exynos_tmu_data *VAR_2,
          int VAR_3, u8 VAR_4, u8 VAR_5)
{
 unsigned int VAR_6, VAR_7;
 u32 VAR_8;

 VAR_6 = ((7 - VAR_3) / 2) * 4;
 VAR_7 = ((8 - VAR_3) % 2);

 VAR_8 = FUNC_0(VAR_2->base + VAR_0 + VAR_6);
 VAR_8 &= ~(VAR_1 << (16 * VAR_7));
 VAR_8 |= FUNC_1(VAR_2, VAR_4 - VAR_5) << (16 * VAR_7);
 FUNC_2(VAR_8, VAR_2->base + VAR_0 + VAR_6);
}
