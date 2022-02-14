
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int* linear_range_selectors; unsigned int vsel_range_mask; int n_linear_ranges; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct regulator_dev *VAR_1,
          unsigned int VAR_2)
{
 int VAR_3;

 if (!VAR_1->desc->linear_range_selectors)
  return -VAR_0;

 VAR_2 &= VAR_1->desc->vsel_range_mask;

 for (VAR_3 = 0; VAR_3 < VAR_1->desc->n_linear_ranges; VAR_3++) {
  if (VAR_1->desc->linear_range_selectors[VAR_3] == VAR_2)
   return VAR_3;
 }
 return -VAR_0;
}
