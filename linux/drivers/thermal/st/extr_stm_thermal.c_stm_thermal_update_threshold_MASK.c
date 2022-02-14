
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_thermal_sensor {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stm_thermal_sensor*) ;
 int FUNC_1 (struct stm_thermal_sensor*) ;
 int FUNC_2 (struct stm_thermal_sensor*) ;
 int FUNC_3 (struct stm_thermal_sensor*) ;
 int FUNC_4 (struct stm_thermal_sensor*) ;

__attribute__((used)) static int FUNC_5(struct stm_thermal_sensor *VAR_2)
{
 int VAR_3;

 VAR_2->mode = VAR_0;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_2->mode = VAR_1;

 return 0;
}
