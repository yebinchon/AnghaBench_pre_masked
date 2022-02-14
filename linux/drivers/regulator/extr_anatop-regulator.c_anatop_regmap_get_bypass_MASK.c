
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct anatop_regulator {int bypass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct anatop_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2, bool *VAR_3)
{
 struct anatop_regulator *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 == VAR_0)
  FUNC_0(!VAR_4->bypass);
 else if (VAR_5 != VAR_1)
  FUNC_0(VAR_4->bypass);

 *VAR_3 = VAR_4->bypass;
 return 0;
}
