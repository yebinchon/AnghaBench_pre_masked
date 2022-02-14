
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {struct regulation_constraints* constraints; } ;
struct regulation_constraints {scalar_t__ min_uV; scalar_t__ max_uV; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1,
       unsigned VAR_2)
{
 struct regulation_constraints *VAR_3 = VAR_1->constraints;

 if (VAR_3 == ((void*)0)) {
  FUNC_0(FUNC_1(VAR_1), "regulator constraints null pointer\n");
  return -VAR_0;
 }

 if (VAR_3->min_uV && VAR_3->max_uV) {
  if (VAR_3->min_uV == VAR_3->max_uV)
   return VAR_3->min_uV;
 }
 return -VAR_0;
}
