
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct sc27xx_fgu_data {int bat_present; int total_cap; int lock; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sc27xx_fgu_data* FUNC_2 (struct power_supply*) ;
 int FUNC_3 (struct sc27xx_fgu_data*,int*) ;
 int FUNC_4 (struct sc27xx_fgu_data*,int*) ;
 int FUNC_5 (struct sc27xx_fgu_data*,int*) ;
 int FUNC_6 (struct sc27xx_fgu_data*,int*) ;
 int FUNC_7 (struct sc27xx_fgu_data*,int*) ;
 int FUNC_8 (struct sc27xx_fgu_data*,int*) ;
 int FUNC_9 (struct sc27xx_fgu_data*,int*) ;
 int FUNC_10 (struct sc27xx_fgu_data*,int*) ;

__attribute__((used)) static int FUNC_11(struct power_supply *VAR_2,
       enum power_supply_property VAR_3,
       union power_supply_propval *VAR_4)
{
 struct sc27xx_fgu_data *VAR_5 = FUNC_2(VAR_2);
 int VAR_6 = 0;
 int VAR_7;

 FUNC_0(&VAR_5->lock);

 switch (VAR_3) {
 case 132:
  VAR_6 = FUNC_7(VAR_5, &VAR_7);
  if (VAR_6)
   goto error;

  VAR_4->intval = VAR_7;
  break;

 case 134:
  VAR_6 = FUNC_6(VAR_5, &VAR_7);
  if (VAR_6)
   goto error;

  VAR_4->intval = VAR_7;
  break;

 case 133:
  VAR_4->intval = VAR_5->bat_present;
  break;

 case 130:
  VAR_6 = FUNC_8(VAR_5, &VAR_7);
  if (VAR_6)
   goto error;

  VAR_4->intval = VAR_7;
  break;

 case 131:
  VAR_4->intval = VAR_1;
  break;

 case 139:
  VAR_6 = FUNC_3(VAR_5, &VAR_7);
  if (VAR_6)
   goto error;

  VAR_4->intval = VAR_7;
  break;

 case 129:
  VAR_6 = FUNC_10(VAR_5, &VAR_7);
  if (VAR_6)
   goto error;

  VAR_4->intval = VAR_7 * 1000;
  break;

 case 128:
  VAR_6 = FUNC_9(VAR_5, &VAR_7);
  if (VAR_6)
   goto error;

  VAR_4->intval = VAR_7;
  break;

 case 138:
  VAR_6 = FUNC_4(VAR_5, &VAR_7);
  if (VAR_6)
   goto error;

  VAR_4->intval = VAR_7;
  break;

 case 136:
 case 137:
  VAR_6 = FUNC_5(VAR_5, &VAR_7);
  if (VAR_6)
   goto error;

  VAR_4->intval = VAR_7 * 1000;
  break;

 case 135:
  VAR_4->intval = VAR_5->total_cap * 1000;
  break;

 default:
  VAR_6 = -VAR_0;
  break;
 }

error:
 FUNC_1(&VAR_5->lock);
 return VAR_6;
}
