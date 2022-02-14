
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct exynos_tmu_data {scalar_t__ cal_type; int temp_error1; int temp_error2; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct exynos_tmu_data *VAR_3, u8 VAR_4)
{
 if (VAR_3->cal_type == VAR_2)
  return VAR_4 + VAR_3->temp_error1 - VAR_0;

 return (VAR_4 - VAR_0) *
  (VAR_3->temp_error2 - VAR_3->temp_error1) /
  (VAR_1 - VAR_0) +
  VAR_3->temp_error1;
}
