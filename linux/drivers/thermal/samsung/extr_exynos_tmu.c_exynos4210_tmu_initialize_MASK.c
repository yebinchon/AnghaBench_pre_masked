
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct exynos_tmu_data {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 struct exynos_tmu_data* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct exynos_tmu_data*,int ) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_1)
{
 struct exynos_tmu_data *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_2, FUNC_1(VAR_2->base + VAR_0));
}
