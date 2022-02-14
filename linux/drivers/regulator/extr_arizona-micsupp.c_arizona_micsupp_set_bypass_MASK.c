
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct arizona_micsupp {int check_cp_work; } ;


 struct arizona_micsupp* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0, bool VAR_1)
{
 struct arizona_micsupp *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3 == 0)
  FUNC_2(&VAR_2->check_cp_work);

 return VAR_3;
}
