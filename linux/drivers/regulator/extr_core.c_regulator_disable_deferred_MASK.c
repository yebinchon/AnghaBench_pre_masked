
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int disable_work; } ;
struct regulator {int deferred_disables; struct regulator_dev* rdev; } ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct regulator*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;
 int VAR_0 ;

int FUNC_5(struct regulator *VAR_1, int VAR_2)
{
 struct regulator_dev *VAR_3 = VAR_1->rdev;

 if (!VAR_2)
  return FUNC_2(VAR_1);

 FUNC_3(VAR_3);
 VAR_1->deferred_disables++;
 FUNC_0(VAR_0, &VAR_3->disable_work,
    FUNC_1(VAR_2));
 FUNC_4(VAR_3);

 return 0;
}
