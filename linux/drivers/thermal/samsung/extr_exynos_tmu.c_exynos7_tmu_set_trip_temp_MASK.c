
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct exynos_tmu_data {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct exynos_tmu_data*,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct exynos_tmu_data *VAR_2,
          int VAR_3, u8 VAR_4)
{
 unsigned int VAR_5, VAR_6;
 u32 VAR_7;

 VAR_5 = ((7 - VAR_3) / 2) * 4;
 VAR_6 = ((8 - VAR_3) % 2);

 VAR_7 = FUNC_0(VAR_2->base + VAR_0 + VAR_5);
 VAR_7 &= ~(VAR_1 << (16 * VAR_6));
 VAR_7 |= FUNC_1(VAR_2, VAR_4) << (16 * VAR_6);
 FUNC_2(VAR_7, VAR_2->base + VAR_0 + VAR_5);
}
