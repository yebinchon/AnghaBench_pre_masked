
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {struct regulation_constraints* constraints; } ;
struct regulation_constraints {int min_uV; int max_uV; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1, int VAR_2,
      int VAR_3, unsigned *VAR_4)
{
 struct regulation_constraints *VAR_5 = VAR_1->constraints;

 if (!VAR_5) {
  FUNC_0(FUNC_1(VAR_1), "No regulator constraints\n");
  return -VAR_0;
 }

 if (VAR_5->min_uV == VAR_2 &&
     VAR_5->max_uV == VAR_3)
  return 0;

 FUNC_0(FUNC_1(VAR_1),
  "Requested min %duV max %duV != constrained min %duV max %duV\n",
  VAR_2, VAR_3,
  VAR_5->min_uV, VAR_5->max_uV);

 return -VAR_0;
}
