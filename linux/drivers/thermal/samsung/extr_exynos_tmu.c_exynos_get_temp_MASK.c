
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_tmu_data {int (* tmu_read ) (struct exynos_tmu_data*) ;int lock; int clk; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct exynos_tmu_data*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct exynos_tmu_data*) ;

__attribute__((used)) static int FUNC_6(void *VAR_3, int *VAR_4)
{
 struct exynos_tmu_data *VAR_5 = VAR_3;
 int VAR_6, VAR_7 = 0;

 if (!VAR_5 || !VAR_5->tmu_read)
  return -VAR_1;
 else if (!VAR_5->enabled)




  return -VAR_0;

 FUNC_3(&VAR_5->lock);
 FUNC_1(VAR_5->clk);

 VAR_6 = VAR_5->tmu_read(VAR_5);
 if (VAR_6 < 0)
  VAR_7 = VAR_6;
 else
  *VAR_4 = FUNC_2(VAR_5, VAR_6) * VAR_2;

 FUNC_0(VAR_5->clk);
 FUNC_4(&VAR_5->lock);

 return VAR_7;
}
