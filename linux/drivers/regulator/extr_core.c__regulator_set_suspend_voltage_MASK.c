
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suspend_state_t ;
struct regulator_state {scalar_t__ min_uV; scalar_t__ max_uV; } ;
struct regulator_dev {int dummy; } ;
struct regulator {struct regulator_dev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regulator_dev*,char*) ;
 struct regulator_state* FUNC_1 (struct regulator_dev*,int ) ;
 int FUNC_2 (struct regulator*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator *VAR_2,
       int VAR_3, int VAR_4,
       suspend_state_t VAR_5)
{
 struct regulator_dev *VAR_6 = VAR_2->rdev;
 struct regulator_state *VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_5);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 if (VAR_7->min_uV == VAR_7->max_uV) {
  FUNC_0(VAR_6, "The suspend voltage can't be changed!\n");
  return -VAR_1;
 }

 return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
}
