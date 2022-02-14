
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply_set_property_request {int prop_val; int property; int psy_id; } ;
struct gb_power_supply_prop {int val; int gb_prop; } ;
struct gb_power_supply {int id; } ;
struct gb_connection {int bundle; } ;
typedef int s32 ;
typedef int req ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gb_connection*,int ,struct gb_power_supply_set_property_request*,int,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct gb_connection* FUNC_4 (struct gb_power_supply*) ;
 struct gb_power_supply_prop* FUNC_5 (struct gb_power_supply*,int) ;

__attribute__((used)) static int FUNC_6(struct gb_power_supply *VAR_2,
     enum power_supply_property VAR_3,
     int VAR_4)
{
 struct gb_connection *VAR_5 = FUNC_4(VAR_2);
 struct gb_power_supply_prop *VAR_6;
 struct gb_power_supply_set_property_request VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_5->bundle);
 if (VAR_8)
  return VAR_8;

 VAR_6 = FUNC_5(VAR_2, VAR_3);
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_7.psy_id = VAR_2->id;
 VAR_7.property = VAR_6->gb_prop;
 VAR_7.prop_val = FUNC_0((s32)VAR_4);

 VAR_8 = FUNC_1(VAR_5, VAR_1,
    &VAR_7, sizeof(VAR_7), ((void*)0), 0);
 if (VAR_8 < 0)
  goto out;


 VAR_6->val = VAR_4;

out:
 FUNC_3(VAR_5->bundle);
 return VAR_8;
}
