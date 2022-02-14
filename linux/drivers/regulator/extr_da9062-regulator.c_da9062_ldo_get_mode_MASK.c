
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct da9062_regulator {int sleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct da9062_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static unsigned FUNC_2(struct regulator_dev *VAR_2)
{
 struct da9062_regulator *VAR_3 = FUNC_0(VAR_2);
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_3->sleep, &VAR_5);
 if (VAR_4 < 0)
  return 0;

 if (VAR_5)
  return VAR_1;
 else
  return VAR_0;
}
