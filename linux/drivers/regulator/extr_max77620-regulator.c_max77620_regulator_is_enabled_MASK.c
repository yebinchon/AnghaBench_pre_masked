
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max77620_regulator {scalar_t__* active_fps_src; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct max77620_regulator*,int) ;
 struct max77620_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2)
{
 struct max77620_regulator *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 if (VAR_3->active_fps_src[VAR_4] != VAR_0)
  return 1;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_5 != VAR_1)
  return 1;

 return 0;
}
