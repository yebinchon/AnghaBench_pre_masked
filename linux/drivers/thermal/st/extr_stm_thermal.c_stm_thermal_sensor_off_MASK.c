
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_thermal_sensor {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct stm_thermal_sensor*) ;

__attribute__((used)) static int FUNC_2(struct stm_thermal_sensor *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_0(VAR_0->clk);

 return 0;
}
