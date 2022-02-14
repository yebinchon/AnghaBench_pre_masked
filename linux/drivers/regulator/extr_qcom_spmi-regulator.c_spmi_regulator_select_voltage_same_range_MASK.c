
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spmi_voltage_range {int min_uV; int max_uV; int step_uV; } ;
struct spmi_regulator {TYPE_2__* set_points; } ;
struct TYPE_4__ {int count; int n_voltages; TYPE_1__* range; } ;
struct TYPE_3__ {int set_point_min_uV; int set_point_max_uV; int step_uV; scalar_t__ n_voltages; } ;


 int FUNC_0 (int,int) ;
 struct spmi_voltage_range* FUNC_1 (struct spmi_regulator*) ;
 int FUNC_2 (struct spmi_regulator*,int,int) ;

__attribute__((used)) static int FUNC_3(struct spmi_regulator *VAR_0,
  int VAR_1, int VAR_2)
{
 const struct spmi_voltage_range *VAR_3;
 int VAR_4 = VAR_1;
 int VAR_5, VAR_6;

 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_3)
  goto different_range;

 if (VAR_4 < VAR_3->min_uV && VAR_2 >= VAR_3->min_uV)
  VAR_4 = VAR_3->min_uV;

 if (VAR_4 < VAR_3->min_uV || VAR_4 > VAR_3->max_uV) {

  goto different_range;
 }





 VAR_4 = FUNC_0(VAR_4 - VAR_3->min_uV, VAR_3->step_uV);
 VAR_4 = VAR_4 * VAR_3->step_uV + VAR_3->min_uV;

 if (VAR_4 > VAR_2) {




  goto different_range;
 }

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0->set_points->count; VAR_5++) {
  if (VAR_4 >= VAR_0->set_points->range[VAR_5].set_point_min_uV
      && VAR_4 <= VAR_0->set_points->range[VAR_5].set_point_max_uV) {
   VAR_6 +=
       (VAR_4 - VAR_0->set_points->range[VAR_5].set_point_min_uV)
    / VAR_0->set_points->range[VAR_5].step_uV;
   break;
  }

  VAR_6 += VAR_0->set_points->range[VAR_5].n_voltages;
 }

 if (VAR_6 >= VAR_0->set_points->n_voltages)
  goto different_range;

 return VAR_6;

different_range:
 return FUNC_2(VAR_0, VAR_1, VAR_2);
}
