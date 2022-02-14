
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spmi_regulator {TYPE_2__* set_points; } ;
struct regulator_dev {int dummy; } ;
struct TYPE_4__ {unsigned int n_voltages; int count; TYPE_1__* range; } ;
struct TYPE_3__ {unsigned int n_voltages; unsigned int step_uV; unsigned int set_point_min_uV; } ;


 struct spmi_regulator* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_0,
   unsigned VAR_1)
{
 struct spmi_regulator *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;
 int VAR_4;

 if (VAR_1 >= VAR_2->set_points->n_voltages)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->set_points->count; VAR_4++) {
  if (VAR_1 < VAR_2->set_points->range[VAR_4].n_voltages) {
   VAR_3 = VAR_1 * VAR_2->set_points->range[VAR_4].step_uV
    + VAR_2->set_points->range[VAR_4].set_point_min_uV;
   break;
  }

  VAR_1 -= VAR_2->set_points->range[VAR_4].n_voltages;
 }

 return VAR_3;
}
