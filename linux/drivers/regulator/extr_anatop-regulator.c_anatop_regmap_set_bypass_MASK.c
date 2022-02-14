
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct anatop_regulator {int bypass; int sel; } ;


 int VAR_0 ;
 struct anatop_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1, bool VAR_2)
{
 struct anatop_regulator *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 if (VAR_2 == VAR_3->bypass)
  return 0;

 VAR_4 = VAR_2 ? VAR_0 : VAR_3->sel;
 VAR_3->bypass = VAR_2;

 return FUNC_1(VAR_1, VAR_4);
}
