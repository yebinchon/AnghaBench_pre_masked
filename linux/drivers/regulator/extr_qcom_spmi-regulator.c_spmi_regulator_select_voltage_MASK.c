
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spmi_voltage_range {int set_point_min_uV; int set_point_max_uV; int min_uV; int step_uV; scalar_t__ n_voltages; } ;
struct spmi_regulator {TYPE_1__* set_points; int dev; } ;
struct TYPE_2__ {int count; struct spmi_voltage_range* range; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int,int,...) ;

__attribute__((used)) static int FUNC_2(struct spmi_regulator *VAR_1,
      int VAR_2, int VAR_3)
{
 const struct spmi_voltage_range *VAR_4;
 int VAR_5 = VAR_2;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;


 VAR_6 = VAR_1->set_points->range[0].set_point_min_uV;
 VAR_7 =
   VAR_1->set_points->range[VAR_1->set_points->count - 1].set_point_max_uV;

 if (VAR_5 < VAR_6 && VAR_3 >= VAR_6)
  VAR_5 = VAR_6;

 if (VAR_5 < VAR_6 || VAR_5 > VAR_7) {
  FUNC_1(VAR_1->dev,
   "request v=[%d, %d] is outside possible v=[%d, %d]\n",
    VAR_2, VAR_3, VAR_6, VAR_7);
  return -VAR_0;
 }


 for (VAR_8 = VAR_1->set_points->count - 1; VAR_8 > 0; VAR_8--) {
  VAR_10 = VAR_1->set_points->range[VAR_8 - 1].set_point_max_uV;
  if (VAR_5 > VAR_10 && VAR_10 > 0)
   break;
 }

 VAR_9 = VAR_8;
 VAR_4 = &VAR_1->set_points->range[VAR_9];





 VAR_12 = FUNC_0(VAR_5 - VAR_4->min_uV, VAR_4->step_uV);
 VAR_5 = VAR_12 * VAR_4->step_uV + VAR_4->min_uV;

 if (VAR_5 > VAR_3) {
  FUNC_1(VAR_1->dev,
   "request v=[%d, %d] cannot be met by any set point; "
   "next set point: %d\n",
   VAR_2, VAR_3, VAR_5);
  return -VAR_0;
 }

 VAR_11 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  VAR_11 += VAR_1->set_points->range[VAR_8].n_voltages;
 VAR_11 += (VAR_5 - VAR_4->set_point_min_uV) / VAR_4->step_uV;

 return VAR_11;
}
