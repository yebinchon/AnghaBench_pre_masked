
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct exynos_tmu_data {scalar_t__ soc; scalar_t__ base; scalar_t__ base_second; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct exynos_tmu_data* FUNC_0 (struct platform_device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct exynos_tmu_data*,unsigned int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_8)
{
 struct exynos_tmu_data *VAR_9 = FUNC_0(VAR_8);
 unsigned int VAR_10, VAR_11;

 if (VAR_9->soc == VAR_4 ||
     VAR_9->soc == VAR_5 ||
     VAR_9->soc == VAR_6) {
  if (VAR_9->soc == VAR_4) {
   VAR_11 = FUNC_1(VAR_9->base + VAR_1);
   VAR_11 |= VAR_3;
   FUNC_3(VAR_11, VAR_9->base + VAR_1);
  }
  VAR_11 = FUNC_1(VAR_9->base + VAR_2);
  VAR_11 |= VAR_3;
  FUNC_3(VAR_11, VAR_9->base + VAR_2);
 }


 if (VAR_9->soc == VAR_7)
  VAR_10 = FUNC_1(VAR_9->base_second + VAR_0);
 else
  VAR_10 = FUNC_1(VAR_9->base + VAR_0);

 FUNC_2(VAR_9, VAR_10);
}
