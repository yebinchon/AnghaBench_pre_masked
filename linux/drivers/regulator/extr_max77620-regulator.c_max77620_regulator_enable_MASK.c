
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max77620_regulator {scalar_t__* active_fps_src; int * enable_power_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct max77620_regulator*,int ,int) ;
 struct max77620_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1)
{
 struct max77620_regulator *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = FUNC_2(VAR_1);

 if (VAR_2->active_fps_src[VAR_3] != VAR_0)
  return 0;

 return FUNC_0(VAR_2,
   VAR_2->enable_power_mode[VAR_3], VAR_3);
}
