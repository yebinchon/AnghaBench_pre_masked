
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_notifier_match {struct notifier_block* nb; struct regulator* regulator; } ;
struct regulator {int dev; } ;
struct notifier_block {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,struct regulator_notifier_match*) ;

void FUNC_2(struct regulator *VAR_2,
     struct notifier_block *VAR_3)
{
 struct regulator_notifier_match VAR_4;
 int VAR_5;

 VAR_4.regulator = VAR_2;
 VAR_4.nb = VAR_3;

 VAR_5 = FUNC_1(VAR_2->dev, VAR_0,
       VAR_1, &VAR_4);
 if (VAR_5 != 0)
  FUNC_0(VAR_5);
}
