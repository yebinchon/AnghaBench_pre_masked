
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct platform_device {int dummy; } ;
struct exynos_tmu_data {unsigned int ntrip; scalar_t__ soc; scalar_t__ base; struct thermal_zone_device* tzd; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (struct exynos_tmu_data*,int ) ;
 int FUNC_1 (struct thermal_zone_device*,unsigned int) ;
 struct exynos_tmu_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_6, bool VAR_7)
{
 struct exynos_tmu_data *VAR_8 = FUNC_2(VAR_6);
 struct thermal_zone_device *VAR_9 = VAR_8->tzd;
 unsigned int VAR_10, VAR_11 = 0, VAR_12;

 VAR_10 = FUNC_0(VAR_8, FUNC_3(VAR_8->base + VAR_3));

 if (VAR_7) {
  for (VAR_12 = 0; VAR_12 < VAR_8->ntrip; VAR_12++) {
   if (!FUNC_1(VAR_9, VAR_12))
    continue;

   VAR_11 |=
    (1 << (VAR_2 + VAR_12 * 4));
  }

  if (VAR_8->soc != VAR_5)
   VAR_11 |=
    VAR_11 << VAR_1;

  VAR_10 |= (1 << VAR_0);
 } else {
  VAR_10 &= ~(1 << VAR_0);
 }

 FUNC_4(VAR_11, VAR_8->base + VAR_4);
 FUNC_4(VAR_10, VAR_8->base + VAR_3);
}
