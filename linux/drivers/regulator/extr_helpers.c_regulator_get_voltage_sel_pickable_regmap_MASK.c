
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_2__* desc; int regmap; } ;
struct TYPE_4__ {unsigned int vsel_mask; TYPE_1__* linear_ranges; int vsel_range_reg; int vsel_reg; } ;
struct TYPE_3__ {scalar_t__ min_sel; scalar_t__ max_sel; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (struct regulator_dev*,unsigned int) ;

int FUNC_3(struct regulator_dev *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;
 unsigned int VAR_4;
 int VAR_5, VAR_6;
 unsigned int VAR_7 = 0;

 if (!VAR_1->desc->linear_ranges)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_1->regmap, VAR_1->desc->vsel_reg, &VAR_4);
 if (VAR_5 != 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_1->regmap, VAR_1->desc->vsel_range_reg, &VAR_2);
 if (VAR_5 != 0)
  return VAR_5;

 VAR_4 &= VAR_1->desc->vsel_mask;
 VAR_4 >>= FUNC_0(VAR_1->desc->vsel_mask) - 1;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_7 += (VAR_1->desc->linear_ranges[VAR_6].max_sel -
         VAR_1->desc->linear_ranges[VAR_6].min_sel) + 1;

 return VAR_4 + VAR_7;
}
