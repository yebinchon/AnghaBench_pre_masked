
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_linear_range {int min_uV; int max_sel; int min_sel; int uV_step; } ;
struct regulator_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {int n_linear_ranges; TYPE_1__* ops; struct regulator_linear_range* linear_ranges; } ;
struct TYPE_3__ {int (* list_voltage ) (struct regulator_dev*,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct regulator_dev*,int) ;

int FUNC_3(struct regulator_dev *VAR_1,
      int VAR_2, int VAR_3)
{
 const struct regulator_linear_range *VAR_4;
 int VAR_5 = -VAR_0;
 int VAR_6, VAR_7;
 unsigned int VAR_8 = 0;

 if (!VAR_1->desc->n_linear_ranges) {
  FUNC_0(!VAR_1->desc->n_linear_ranges);
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_1->desc->n_linear_ranges; VAR_7++) {
  int VAR_9;

  VAR_4 = &VAR_1->desc->linear_ranges[VAR_7];
  VAR_9 = VAR_4->min_uV +
   (VAR_4->max_sel - VAR_4->min_sel) * VAR_4->uV_step;

  if (!(VAR_2 <= VAR_9 && VAR_3 >= VAR_4->min_uV)) {
   VAR_8 += (VAR_4->max_sel - VAR_4->min_sel + 1);
   continue;
  }

  if (VAR_2 <= VAR_4->min_uV)
   VAR_2 = VAR_4->min_uV;


  if (VAR_4->uV_step == 0) {
   VAR_5 = 0;
  } else {
   VAR_5 = FUNC_1(VAR_2 - VAR_4->min_uV,
        VAR_4->uV_step);
   if (VAR_5 < 0)
    return VAR_5;
  }

  VAR_5 += VAR_8;

  VAR_6 = VAR_1->desc->ops->list_voltage(VAR_1, VAR_5);






  if (VAR_6 < VAR_2 || VAR_6 > VAR_3)
   VAR_8 += (VAR_4->max_sel - VAR_4->min_sel + 1);
  else
   break;
 }

 if (VAR_7 == VAR_1->desc->n_linear_ranges)
  return -VAR_0;

 return VAR_5;
}
