
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct axp288_chrg_info {TYPE_1__* pdev; int max_cv; int max_cc; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;



 int FUNC_1 (struct axp288_chrg_info*,int) ;
 int FUNC_2 (struct axp288_chrg_info*,int) ;
 int FUNC_3 (struct axp288_chrg_info*,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int ) ;
 struct axp288_chrg_info* FUNC_6 (struct power_supply*) ;

__attribute__((used)) static int FUNC_7(struct power_supply *VAR_1,
        enum power_supply_property VAR_2,
        const union power_supply_propval *VAR_3)
{
 struct axp288_chrg_info *VAR_4 = FUNC_6(VAR_1);
 int VAR_5 = 0;
 int VAR_6;

 switch (VAR_2) {
 case 130:
  VAR_6 = FUNC_5(VAR_3->intval, VAR_4->max_cc);
  VAR_6 = FUNC_0(VAR_6, 1000);
  VAR_5 = FUNC_1(VAR_4, VAR_6);
  if (VAR_5 < 0)
   FUNC_4(&VAR_4->pdev->dev, "set charge current failed\n");
  break;
 case 129:
  VAR_6 = FUNC_5(VAR_3->intval, VAR_4->max_cv);
  VAR_6 = FUNC_0(VAR_6, 1000);
  VAR_5 = FUNC_2(VAR_4, VAR_6);
  if (VAR_5 < 0)
   FUNC_4(&VAR_4->pdev->dev, "set charge voltage failed\n");
  break;
 case 128:
  VAR_5 = FUNC_3(VAR_4, VAR_3->intval);
  if (VAR_5 < 0)
   FUNC_4(&VAR_4->pdev->dev, "set input current limit failed\n");
  break;
 default:
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
