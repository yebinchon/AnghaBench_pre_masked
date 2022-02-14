
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct thermal_trip {int temperature; } ;
struct exynos_tmu_data {scalar_t__ base; int tzd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct thermal_trip* FUNC_0 (int ) ;
 int FUNC_1 (struct exynos_tmu_data*,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct exynos_tmu_data *VAR_3,
      int VAR_4, u8 VAR_5)
{
 const struct thermal_trip * const VAR_6 =
  FUNC_0(VAR_3->tzd);
 u8 VAR_7, VAR_8;

 VAR_7 = VAR_6[0].temperature / VAR_2;

 if (VAR_4 == 0) {
  VAR_8 = FUNC_1(VAR_3, VAR_7);
  FUNC_2(VAR_8, VAR_3->base + VAR_0);
 }

 VAR_5 -= VAR_7;
 FUNC_2(VAR_5, VAR_3->base + VAR_1 + VAR_4 * 4);
}
