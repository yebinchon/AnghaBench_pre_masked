
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {struct regulation_constraints* constraints; } ;
struct regulation_constraints {scalar_t__ max_uV_step; } ;


 int FUNC_0 (struct regulator_dev*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_0,
     int *VAR_1, int *VAR_2)
{
 struct regulation_constraints *VAR_3 = VAR_0->constraints;


 if (!VAR_3->max_uV_step || !FUNC_0(VAR_0))
  return 1;

 if (*VAR_1 < 0) {
  *VAR_1 = FUNC_4(VAR_0);

  if (*VAR_1 < 0)
   return *VAR_1;
 }

 if (FUNC_1(*VAR_1 - *VAR_2) <= VAR_3->max_uV_step)
  return 1;


 if (*VAR_1 < *VAR_2)
  *VAR_2 = FUNC_3(*VAR_1 + VAR_3->max_uV_step,
         *VAR_2);
 else
  *VAR_2 = FUNC_2(*VAR_1 - VAR_3->max_uV_step,
         *VAR_2);

 return 0;
}
