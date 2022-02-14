
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct regulator {int uA_load; scalar_t__ enable_count; struct regulator_dev* rdev; } ;


 int FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

int FUNC_3(struct regulator *VAR_0, int VAR_1)
{
 struct regulator_dev *VAR_2 = VAR_0->rdev;
 int VAR_3;
 int VAR_4 = 0;

 FUNC_1(VAR_2);
 VAR_3 = VAR_0->uA_load;
 VAR_0->uA_load = VAR_1;
 if (VAR_0->enable_count && VAR_3 != VAR_1) {
  VAR_4 = FUNC_0(VAR_2);
  if (VAR_4 < 0)
   VAR_0->uA_load = VAR_3;
 }
 FUNC_2(VAR_2);

 return VAR_4;
}
