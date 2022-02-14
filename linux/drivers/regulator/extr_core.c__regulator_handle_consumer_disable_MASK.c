
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct regulator_dev {TYPE_1__ mutex; } ;
struct regulator {scalar_t__ enable_count; scalar_t__ uA_load; struct regulator_dev* rdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct regulator_dev*,char*) ;

__attribute__((used)) static int FUNC_3(struct regulator *VAR_1)
{
 struct regulator_dev *VAR_2 = VAR_1->rdev;

 FUNC_1(&VAR_2->mutex.base);

 if (!VAR_1->enable_count) {
  FUNC_2(VAR_2, "Underflow of regulator enable count\n");
  return -VAR_0;
 }

 VAR_1->enable_count--;
 if (VAR_1->uA_load && VAR_1->enable_count == 0)
  return FUNC_0(VAR_2);

 return 0;
}
