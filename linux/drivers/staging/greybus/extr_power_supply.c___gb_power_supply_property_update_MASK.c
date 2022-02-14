
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply_prop {int val; int previous_val; int gb_prop; } ;
struct gb_power_supply_get_property_response {int prop_val; } ;
struct gb_power_supply_get_property_request {int property; int psy_id; } ;
struct gb_power_supply {int id; } ;
struct gb_connection {int dummy; } ;
typedef int resp ;
typedef int req ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gb_power_supply*,struct gb_power_supply_prop*) ;
 int FUNC_1 (struct gb_connection*,int ,struct gb_power_supply_get_property_request*,int,struct gb_power_supply_get_property_response*,int) ;
 struct gb_connection* FUNC_2 (struct gb_power_supply*) ;
 struct gb_power_supply_prop* FUNC_3 (struct gb_power_supply*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct gb_power_supply *VAR_2,
          enum power_supply_property VAR_3)
{
 struct gb_connection *VAR_4 = FUNC_2(VAR_2);
 struct gb_power_supply_prop *VAR_5;
 struct gb_power_supply_get_property_request VAR_6;
 struct gb_power_supply_get_property_response VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_0;
 VAR_6.psy_id = VAR_2->id;
 VAR_6.property = VAR_5->gb_prop;

 VAR_9 = FUNC_1(VAR_4, VAR_1,
    &VAR_6, sizeof(VAR_6), &VAR_7, sizeof(VAR_7));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_4(VAR_7.prop_val);
 if (VAR_8 == VAR_5->val)
  return 0;

 VAR_5->previous_val = VAR_5->val;
 VAR_5->val = VAR_8;

 FUNC_0(VAR_2, VAR_5);

 return 0;
}
