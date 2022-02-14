
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_2__* desc; int regmap; } ;
struct TYPE_4__ {int n_linear_ranges; int vsel_mask; unsigned int* linear_range_selectors; scalar_t__ vsel_reg; scalar_t__ vsel_range_reg; int vsel_range_mask; int apply_bit; scalar_t__ apply_reg; TYPE_1__* linear_ranges; } ;
struct TYPE_3__ {int max_sel; int min_sel; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,int,unsigned int) ;

int FUNC_2(struct regulator_dev *VAR_1,
           unsigned int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4, VAR_5;
 unsigned int VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1->desc->n_linear_ranges; VAR_5++) {
  VAR_6 = (VAR_1->desc->linear_ranges[VAR_5].max_sel -
         VAR_1->desc->linear_ranges[VAR_5].min_sel) + 1;
  if (VAR_2 < VAR_6)
   break;
  VAR_2 -= VAR_6;
 }

 if (VAR_5 == VAR_1->desc->n_linear_ranges)
  return -VAR_0;

 VAR_2 <<= FUNC_0(VAR_1->desc->vsel_mask) - 1;
 VAR_2 += VAR_1->desc->linear_ranges[VAR_5].min_sel;

 VAR_3 = VAR_1->desc->linear_range_selectors[VAR_5];

 if (VAR_1->desc->vsel_reg == VAR_1->desc->vsel_range_reg) {
  VAR_4 = FUNC_1(VAR_1->regmap,
      VAR_1->desc->vsel_reg,
      VAR_1->desc->vsel_range_mask |
      VAR_1->desc->vsel_mask, VAR_2 | VAR_3);
 } else {
  VAR_4 = FUNC_1(VAR_1->regmap,
      VAR_1->desc->vsel_range_reg,
      VAR_1->desc->vsel_range_mask, VAR_3);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_1(VAR_1->regmap, VAR_1->desc->vsel_reg,
      VAR_1->desc->vsel_mask, VAR_2);
 }

 if (VAR_4)
  return VAR_4;

 if (VAR_1->desc->apply_bit)
  VAR_4 = FUNC_1(VAR_1->regmap, VAR_1->desc->apply_reg,
      VAR_1->desc->apply_bit,
      VAR_1->desc->apply_bit);
 return VAR_4;
}
