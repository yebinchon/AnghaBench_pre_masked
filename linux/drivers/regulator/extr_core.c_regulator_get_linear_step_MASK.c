
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct regulator {struct regulator_dev* rdev; } ;
struct TYPE_2__ {unsigned int uV_step; } ;



unsigned int FUNC_0(struct regulator *VAR_0)
{
 struct regulator_dev *VAR_1 = VAR_0->rdev;

 return VAR_1->desc->uV_step;
}
