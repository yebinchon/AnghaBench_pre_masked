
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct anatop_regulator {int sel; scalar_t__ bypass; } ;


 int FUNC_0 (struct regulator_dev*) ;
 struct anatop_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0)
{
 struct anatop_regulator *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->bypass || !FUNC_0(VAR_0))
  return VAR_1->sel;

 return FUNC_2(VAR_0);
}
