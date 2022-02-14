
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct regulator_dev {TYPE_1__ mutex; } ;
struct regulator {int enable_count; scalar_t__ uA_load; struct regulator_dev* rdev; } ;


 int FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct regulator *VAR_0)
{
 struct regulator_dev *VAR_1 = VAR_0->rdev;

 FUNC_1(&VAR_1->mutex.base);

 VAR_0->enable_count++;
 if (VAR_0->uA_load && VAR_0->enable_count == 1)
  return FUNC_0(VAR_1);

 return 0;
}
