
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_thermal_sensor {int regmap; } ;
typedef enum st_thermal_power_state { ____Placeholder_st_thermal_power_state } st_thermal_power_state ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int const,unsigned int const) ;

__attribute__((used)) static int FUNC_1(struct st_thermal_sensor *VAR_3,
         enum st_thermal_power_state VAR_4)
{
 const unsigned int VAR_5 = (VAR_1 | VAR_2);
 const unsigned int VAR_6 = VAR_4 ? VAR_5 : 0;

 return FUNC_0(VAR_3->regmap, VAR_0, VAR_5, VAR_6);
}
