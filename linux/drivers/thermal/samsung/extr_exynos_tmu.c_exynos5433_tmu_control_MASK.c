
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct platform_device {int dummy; } ;
struct exynos_tmu_data {unsigned int ntrip; scalar_t__ base; struct thermal_zone_device* tzd; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_0 (struct exynos_tmu_data*,int ) ;
 int FUNC_1 (struct thermal_zone_device*,unsigned int) ;
 struct exynos_tmu_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_7, bool VAR_8)
{
 struct exynos_tmu_data *VAR_9 = FUNC_2(VAR_7);
 struct thermal_zone_device *VAR_10 = VAR_9->tzd;
 unsigned int VAR_11, VAR_12 = 0, VAR_13, VAR_14;

 VAR_11 = FUNC_0(VAR_9, FUNC_3(VAR_9->base + VAR_6));

 if (VAR_8) {
  for (VAR_14 = 0; VAR_14 < VAR_9->ntrip; VAR_14++) {
   if (!FUNC_1(VAR_10, VAR_14))
    continue;

   VAR_12 |=
    (1 << (VAR_3 + VAR_14));
  }

  VAR_12 |=
   VAR_12 << VAR_5;

  VAR_11 |= (1 << VAR_4);
 } else
  VAR_11 &= ~(1 << VAR_4);

 VAR_13 = VAR_8 ? VAR_0 : 0;

 FUNC_4(VAR_13, VAR_9->base + VAR_1);
 FUNC_4(VAR_12, VAR_9->base + VAR_2);
 FUNC_4(VAR_11, VAR_9->base + VAR_6);
}
