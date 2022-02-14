
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_linear_range {unsigned int max_sel; unsigned int min_sel; int min_uV; unsigned int uV_step; } ;
struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {int n_linear_ranges; struct regulator_linear_range* linear_ranges; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

int FUNC_1(struct regulator_dev *VAR_1,
       unsigned int VAR_2)
{
 const struct regulator_linear_range *VAR_3;
 int VAR_4;
 unsigned int VAR_5 = 0;

 if (!VAR_1->desc->n_linear_ranges) {
  FUNC_0(!VAR_1->desc->n_linear_ranges);
  return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->desc->n_linear_ranges; VAR_4++) {
  unsigned int VAR_6;

  VAR_3 = &VAR_1->desc->linear_ranges[VAR_4];

  VAR_6 = VAR_3->max_sel - VAR_3->min_sel;

  if (VAR_5 + VAR_6 >= VAR_2) {
   VAR_2 -= VAR_5;
   return VAR_3->min_uV + (VAR_3->uV_step * VAR_2);
  }

  VAR_5 += (VAR_6 + 1);
 }

 return -VAR_0;
}
