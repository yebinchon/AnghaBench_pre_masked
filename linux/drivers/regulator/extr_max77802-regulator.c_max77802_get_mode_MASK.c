
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max77802_regulator_prv {int * opmode; } ;


 int FUNC_0 (int ) ;
 struct max77802_regulator_prv* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static unsigned FUNC_3(struct regulator_dev *VAR_0)
{
 struct max77802_regulator_prv *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = FUNC_2(VAR_0);

 return FUNC_0(VAR_1->opmode[VAR_2]);
}
