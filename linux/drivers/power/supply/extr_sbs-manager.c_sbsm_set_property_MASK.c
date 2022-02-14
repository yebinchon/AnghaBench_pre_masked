
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u16 ;
struct sbsm_data {int client; int is_ltc1760; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 struct sbsm_data* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_4,
        enum power_supply_property VAR_5,
        const union power_supply_propval *VAR_6)
{
 struct sbsm_data *VAR_7 = FUNC_0(VAR_4);
 int VAR_8 = -VAR_0;
 u16 VAR_9;

 switch (VAR_5) {
 case 128:

  if (!VAR_7->is_ltc1760)
   break;
  VAR_9 = VAR_6->intval ==
    VAR_1 ? VAR_2 : 0;
  VAR_8 = FUNC_1(VAR_7->client, VAR_3, VAR_9);
  break;

 default:
  break;
 }

 return VAR_8;
}
