
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct anatop_regulator {unsigned int sel; scalar_t__ bypass; } ;


 int FUNC_0 (struct regulator_dev*) ;
 struct anatop_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0,
           unsigned VAR_1)
{
 struct anatop_regulator *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 if (VAR_2->bypass || !FUNC_0(VAR_0)) {
  VAR_2->sel = VAR_1;
  return 0;
 }

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_3)
  VAR_2->sel = VAR_1;
 return VAR_3;
}
