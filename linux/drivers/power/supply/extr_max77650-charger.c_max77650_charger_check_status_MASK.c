
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77650_charger_data {int dev; int map; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;



 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct max77650_charger_data*) ;
 int FUNC_3 (struct max77650_charger_data*) ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct max77650_charger_data *VAR_4 = VAR_3;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_4(VAR_4->map, VAR_1, &VAR_6);
 if (VAR_5) {
  FUNC_1(VAR_4->dev,
   "unable to read the charger status: %d\n", VAR_5);
  return VAR_0;
 }

 switch (FUNC_0(VAR_6)) {
 case 128:
  FUNC_1(VAR_4->dev, "undervoltage lockout detected, disabling charger\n");
  FUNC_2(VAR_4);
  break;
 case 129:
  FUNC_1(VAR_4->dev, "overvoltage lockout detected, disabling charger\n");
  FUNC_2(VAR_4);
  break;
 case 130:
  FUNC_3(VAR_4);
  break;
 default:

  break;
 }

 return VAR_0;
}
