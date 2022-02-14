
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct sbsm_data {int client; int is_ltc1760; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sbsm_data* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_10,
        enum power_supply_property VAR_11,
        union power_supply_propval *VAR_12)
{
 struct sbsm_data *VAR_13 = FUNC_0(VAR_10);
 int VAR_14 = 0;

 switch (VAR_11) {
 case 128:
  VAR_14 = FUNC_1(VAR_13->client, VAR_7);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_12->intval = !!(VAR_14 & VAR_4);
  break;

 case 129:
  VAR_14 = FUNC_1(VAR_13->client, VAR_6);
  if (VAR_14 < 0)
   return VAR_14;

  if ((VAR_14 & VAR_9) == 0) {
   VAR_12->intval = VAR_2;
   return 0;
  }
  VAR_12->intval = VAR_3;

  if (VAR_13->is_ltc1760) {

   VAR_14 = FUNC_1(VAR_13->client, VAR_8);
   if (VAR_14 < 0)
    return VAR_14;
   else if (VAR_14 & VAR_5)
    VAR_12->intval = VAR_1;
  }
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
