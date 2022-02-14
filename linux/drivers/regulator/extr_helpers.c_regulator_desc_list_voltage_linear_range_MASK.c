
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_linear_range {unsigned int min_sel; unsigned int max_sel; int min_uV; unsigned int uV_step; } ;
struct regulator_desc {int n_linear_ranges; struct regulator_linear_range* linear_ranges; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

int FUNC_1(const struct regulator_desc *VAR_1,
          unsigned int VAR_2)
{
 const struct regulator_linear_range *VAR_3;
 int VAR_4;

 if (!VAR_1->n_linear_ranges) {
  FUNC_0(!VAR_1->n_linear_ranges);
  return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->n_linear_ranges; VAR_4++) {
  VAR_3 = &VAR_1->linear_ranges[VAR_4];

  if (!(VAR_2 >= VAR_3->min_sel &&
        VAR_2 <= VAR_3->max_sel))
   continue;

  VAR_2 -= VAR_3->min_sel;

  return VAR_3->min_uV + (VAR_3->uV_step * VAR_2);
 }

 return -VAR_0;
}
