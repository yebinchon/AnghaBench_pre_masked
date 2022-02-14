
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_tmu_data {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct exynos_tmu_data *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2->base + VAR_1);


 return (VAR_3 < 75 || VAR_3 > 175) ? -VAR_0 : VAR_3;
}
