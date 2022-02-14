
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {struct regulator* supply; int is_switch; TYPE_1__* desc; } ;
struct regulator {struct regulator_dev* rdev; } ;
struct TYPE_2__ {int n_voltages; } ;


 int VAR_0 ;

int FUNC_0(struct regulator *VAR_1)
{
 struct regulator_dev *VAR_2 = VAR_1->rdev;

 if (VAR_2->desc->n_voltages)
  return VAR_2->desc->n_voltages;

 if (!VAR_2->is_switch || !VAR_2->supply)
  return -VAR_0;

 return FUNC_0(VAR_2->supply);
}
