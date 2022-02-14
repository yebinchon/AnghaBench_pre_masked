
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max77620_regulator_pdata {scalar_t__ ramp_rate_setting; } ;
struct max77620_regulator {struct max77620_regulator_pdata* reg_pdata; } ;


 int FUNC_0 (struct max77620_regulator*,int,int) ;
 struct max77620_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0,
          int VAR_1)
{
 struct max77620_regulator *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = FUNC_2(VAR_0);
 struct max77620_regulator_pdata *VAR_4 = &VAR_2->reg_pdata[VAR_3];





 if (VAR_4->ramp_rate_setting)
  return 0;

 return FUNC_0(VAR_2, VAR_3, VAR_1);
}
