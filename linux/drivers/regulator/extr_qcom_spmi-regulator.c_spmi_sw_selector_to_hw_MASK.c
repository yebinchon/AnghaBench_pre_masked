
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct spmi_voltage_range {unsigned int n_voltages; unsigned int set_point_min_uV; unsigned int min_uV; unsigned int step_uV; unsigned int range_sel; } ;
struct spmi_regulator {TYPE_1__* set_points; } ;
struct TYPE_2__ {int count; struct spmi_voltage_range* range; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct spmi_regulator *VAR_1,
      unsigned VAR_2, u8 *VAR_3,
      u8 *VAR_4)
{
 const struct spmi_voltage_range *VAR_5, *VAR_6;
 unsigned VAR_7;

 VAR_5 = VAR_1->set_points->range;
 VAR_6 = VAR_5 + VAR_1->set_points->count;

 for (; VAR_5 < VAR_6; VAR_5++) {
  if (VAR_2 < VAR_5->n_voltages) {




   VAR_7 = VAR_5->set_point_min_uV - VAR_5->min_uV;
   VAR_7 /= VAR_5->step_uV;
   *VAR_4 = VAR_2 + VAR_7;
   *VAR_3 = VAR_5->range_sel;
   return 0;
  }

  VAR_2 -= VAR_5->n_voltages;
 }

 return -VAR_0;
}
