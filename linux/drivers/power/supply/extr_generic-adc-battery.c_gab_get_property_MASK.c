
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; int strval; } ;
struct power_supply_info {int technology; int voltage_min_design; int voltage_max_design; int charge_full_design; int name; } ;
struct power_supply {int dev; } ;
struct gab_platform_data {int (* cal_charge ) (int) ;struct power_supply_info battery_info; } ;
struct gab {struct gab_platform_data* pdata; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gab*) ;
 int FUNC_2 (struct gab*,int,int*) ;
 int FUNC_3 (int) ;
 struct gab* FUNC_4 (struct power_supply*) ;

__attribute__((used)) static int FUNC_5(struct power_supply *VAR_1,
  enum power_supply_property VAR_2, union power_supply_propval *VAR_3)
{
 struct gab *VAR_4;
 struct gab_platform_data *VAR_5;
 struct power_supply_info *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;

 VAR_4 = FUNC_4(VAR_1);
 if (!VAR_4) {
  FUNC_0(&VAR_1->dev, "no battery infos ?!\n");
  return -VAR_0;
 }
 VAR_5 = VAR_4->pdata;
 VAR_6 = &VAR_5->battery_info;

 switch (VAR_2) {
 case 132:
  VAR_3->intval = FUNC_1(VAR_4);
  break;
 case 138:
  VAR_3->intval = 0;
  break;
 case 136:
  VAR_3->intval = VAR_5->cal_charge(VAR_7);
  break;
 case 128:
 case 135:
 case 133:
  VAR_8 = FUNC_2(VAR_4, VAR_2, &VAR_7);
  if (VAR_8 < 0)
   goto err;
  VAR_3->intval = VAR_7;
  break;
 case 131:
  VAR_3->intval = VAR_6->technology;
  break;
 case 129:
  VAR_3->intval = VAR_6->voltage_min_design;
  break;
 case 130:
  VAR_3->intval = VAR_6->voltage_max_design;
  break;
 case 137:
  VAR_3->intval = VAR_6->charge_full_design;
  break;
 case 134:
  VAR_3->strval = VAR_6->name;
  break;
 default:
  return -VAR_0;
 }
err:
 return VAR_8;
}
