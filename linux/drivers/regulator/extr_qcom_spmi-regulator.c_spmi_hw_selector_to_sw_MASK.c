
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct spmi_voltage_range {unsigned int set_point_min_uV; unsigned int min_uV; unsigned int step_uV; unsigned int set_point_max_uV; scalar_t__ n_voltages; } ;
struct spmi_regulator {TYPE_1__* set_points; } ;
struct TYPE_2__ {int count; struct spmi_voltage_range* range; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct spmi_regulator *VAR_1, u8 VAR_2,
      const struct spmi_voltage_range *VAR_3)
{
 unsigned VAR_4 = 0;
 unsigned VAR_5, VAR_6;
 const struct spmi_voltage_range *VAR_7 = VAR_1->set_points->range;
 const struct spmi_voltage_range *VAR_8 = VAR_7 + VAR_1->set_points->count;

 for (; VAR_7 < VAR_8; VAR_7++) {
  if (VAR_7 == VAR_3 && VAR_3->n_voltages) {






   VAR_5 = VAR_3->set_point_min_uV - VAR_3->min_uV;
   VAR_5 /= VAR_3->step_uV;
   if (VAR_2 < VAR_5)
    return -VAR_0;

   VAR_6 = VAR_3->set_point_max_uV - VAR_3->min_uV;
   VAR_6 /= VAR_3->step_uV;
   if (VAR_2 > VAR_6)
    return -VAR_0;

   return VAR_4 + VAR_2 - VAR_5;
  }
  VAR_4 += VAR_7->n_voltages;
 }

 return -VAR_0;
}
