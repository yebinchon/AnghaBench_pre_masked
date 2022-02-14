
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_ops {scalar_t__ set_voltage_sel; } ;
struct regulator_dev {TYPE_1__* desc; } ;
struct regulator {struct regulator_dev* rdev; } ;
struct TYPE_2__ {unsigned int vsel_reg; unsigned int vsel_mask; struct regulator_ops* ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct regulator *VAR_2,
      unsigned *VAR_3,
      unsigned *VAR_4)
{
 struct regulator_dev *VAR_5 = VAR_2->rdev;
 const struct regulator_ops *VAR_6 = VAR_5->desc->ops;

 if (VAR_6->set_voltage_sel != VAR_1)
  return -VAR_0;

 *VAR_3 = VAR_5->desc->vsel_reg;
 *VAR_4 = VAR_5->desc->vsel_mask;

  return 0;
}
