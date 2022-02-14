
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct exynos_tmu_data {int enabled; int lock; int clk; int (* tmu_control ) (struct platform_device*,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct exynos_tmu_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_0, bool VAR_1)
{
 struct exynos_tmu_data *VAR_2 = FUNC_4(VAR_0);

 FUNC_2(&VAR_2->lock);
 FUNC_1(VAR_2->clk);
 VAR_2->tmu_control(VAR_0, VAR_1);
 VAR_2->enabled = VAR_1;
 FUNC_0(VAR_2->clk);
 FUNC_3(&VAR_2->lock);
}
