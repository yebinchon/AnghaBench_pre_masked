
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct da9052_regulator_info {unsigned int step_uV; } ;
struct da9052_regulator {struct da9052_regulator_info* info; } ;







 struct da9052_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0,
       unsigned int VAR_1,
       unsigned int VAR_2)
{
 struct da9052_regulator *VAR_3 = FUNC_0(VAR_0);
 struct da9052_regulator_info *VAR_4 = VAR_3->info;
 int VAR_5 = FUNC_1(VAR_0);
 int VAR_6 = 0;




 switch (VAR_5) {
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_6 = (VAR_2 - VAR_1) * VAR_4->step_uV / 6250;
  break;
 }

 return VAR_6;
}
