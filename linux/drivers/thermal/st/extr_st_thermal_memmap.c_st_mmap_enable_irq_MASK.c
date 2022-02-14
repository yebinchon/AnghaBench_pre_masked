
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_thermal_sensor {int int_enable; TYPE_1__* cdata; int int_thresh_hi; } ;
struct TYPE_2__ {int crit_temp; int temp_adjust_val; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct st_thermal_sensor *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_0(VAR_0->int_thresh_hi,
     VAR_0->cdata->crit_temp -
     VAR_0->cdata->temp_adjust_val);
 if (VAR_1)
  return VAR_1;

 return FUNC_0(VAR_0->int_enable, 1);
}
