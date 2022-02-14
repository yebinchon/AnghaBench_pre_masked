
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_voltage_set_points {int count; unsigned int n_voltages; struct spmi_voltage_range* range; } ;
struct spmi_voltage_range {unsigned int set_point_max_uV; unsigned int set_point_min_uV; unsigned int step_uV; unsigned int n_voltages; } ;



__attribute__((used)) static void FUNC_0(struct spmi_voltage_set_points *VAR_0)
{
 unsigned int VAR_1;
 struct spmi_voltage_range *VAR_2 = VAR_0->range;

 for (; VAR_2 < VAR_0->range + VAR_0->count; VAR_2++) {
  VAR_1 = 0;
  if (VAR_2->set_point_max_uV) {
   VAR_1 = VAR_2->set_point_max_uV - VAR_2->set_point_min_uV;
   VAR_1 = (VAR_1 / VAR_2->step_uV) + 1;
  }
  VAR_2->n_voltages = VAR_1;
  VAR_0->n_voltages += VAR_1;
 }
}
