
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_notifier_match {struct notifier_block* nb; struct regulator* regulator; } ;
struct regulator {int dev; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct regulator_notifier_match*) ;
 struct regulator_notifier_match* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct regulator_notifier_match*) ;
 int FUNC_3 (struct regulator*,struct notifier_block*) ;

int FUNC_4(struct regulator *VAR_3,
         struct notifier_block *VAR_4)
{
 struct regulator_notifier_match *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2,
        sizeof(struct regulator_notifier_match),
        VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->regulator = VAR_3;
 VAR_5->nb = VAR_4;

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (VAR_6 < 0) {
  FUNC_2(VAR_5);
  return VAR_6;
 }

 FUNC_0(VAR_3->dev, VAR_5);

 return 0;
}
