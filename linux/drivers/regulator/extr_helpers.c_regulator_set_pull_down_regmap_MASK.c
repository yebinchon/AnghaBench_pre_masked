
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {unsigned int pull_down_val_on; unsigned int pull_down_mask; int pull_down_reg; } ;


 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;

int FUNC_1(struct regulator_dev *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = VAR_0->desc->pull_down_val_on;
 if (!VAR_1)
  VAR_1 = VAR_0->desc->pull_down_mask;

 return FUNC_0(VAR_0->regmap, VAR_0->desc->pull_down_reg,
      VAR_0->desc->pull_down_mask, VAR_1);
}
