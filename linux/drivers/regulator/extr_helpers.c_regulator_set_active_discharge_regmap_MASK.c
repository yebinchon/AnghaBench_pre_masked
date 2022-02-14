
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {unsigned int active_discharge_on; unsigned int active_discharge_off; int active_discharge_mask; int active_discharge_reg; } ;


 int FUNC_0 (int ,int ,int ,unsigned int) ;

int FUNC_1(struct regulator_dev *VAR_0,
       bool VAR_1)
{
 unsigned int VAR_2;

 if (VAR_1)
  VAR_2 = VAR_0->desc->active_discharge_on;
 else
  VAR_2 = VAR_0->desc->active_discharge_off;

 return FUNC_0(VAR_0->regmap,
      VAR_0->desc->active_discharge_reg,
      VAR_0->desc->active_discharge_mask, VAR_2);
}
