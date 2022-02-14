
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_pipeline {scalar_t__* subdevs; } ;
struct fimc_md {int * wbclk; } ;
struct exynos_media_pipeline {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fimc_pipeline*,int) ;
 struct fimc_pipeline* FUNC_4 (struct exynos_media_pipeline*) ;

__attribute__((used)) static int FUNC_5(struct exynos_media_pipeline *VAR_2,
      struct fimc_md *VAR_3)
{
 struct fimc_pipeline *VAR_4 = FUNC_4(VAR_2);
 int VAR_5;


 if (!FUNC_0(VAR_3->wbclk[VAR_0]) && VAR_4->subdevs[VAR_1]) {
  VAR_5 = FUNC_2(VAR_3->wbclk[VAR_0]);
  if (VAR_5 < 0)
   return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_4, 1);
 if (!VAR_5)
  return 0;

 if (!FUNC_0(VAR_3->wbclk[VAR_0]) && VAR_4->subdevs[VAR_1])
  FUNC_1(VAR_3->wbclk[VAR_0]);

 return VAR_5;
}
