
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77620_regulator_pdata {int active_fps_src; scalar_t__ ramp_rate_setting; } ;
struct max77620_regulator {int* current_power_mode; int* enable_power_mode; struct max77620_regulator_pdata* reg_pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct max77620_regulator*,int) ;
 int FUNC_1 (struct max77620_regulator*,int) ;
 int FUNC_2 (struct max77620_regulator*,int) ;
 int FUNC_3 (struct max77620_regulator*,int,int) ;
 int FUNC_4 (struct max77620_regulator*,int,int) ;
 int FUNC_5 (struct max77620_regulator*,int,int) ;
 int FUNC_6 (struct max77620_regulator*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct max77620_regulator *VAR_3, int VAR_4)
{
 struct max77620_regulator_pdata *VAR_5 = &VAR_3->reg_pdata[VAR_4];
 int VAR_6;

 FUNC_0(VAR_3, VAR_4);


 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_3->current_power_mode[VAR_4] = VAR_6;
 VAR_3->enable_power_mode[VAR_4] = VAR_2;

 if (VAR_5->active_fps_src == VAR_0) {
  VAR_6 = FUNC_1(VAR_3, VAR_4);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_5->active_fps_src = VAR_6;
 }


 if (VAR_5->active_fps_src == VAR_1) {
  VAR_6 = FUNC_5(VAR_3,
     VAR_3->enable_power_mode[VAR_4], VAR_4);
  if (VAR_6 < 0)
   return VAR_6;
 } else {
  if (VAR_3->current_power_mode[VAR_4] !=
       VAR_3->enable_power_mode[VAR_4]) {
   VAR_6 = FUNC_5(VAR_3,
     VAR_3->enable_power_mode[VAR_4], VAR_4);
   if (VAR_6 < 0)
    return VAR_6;
  }
 }

 VAR_6 = FUNC_4(VAR_3, VAR_5->active_fps_src, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_3, VAR_4, 0);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5->ramp_rate_setting) {
  VAR_6 = FUNC_6(VAR_3, VAR_4,
          VAR_5->ramp_rate_setting);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}
