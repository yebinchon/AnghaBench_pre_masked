
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply_get_description_response {int properties_count; int type; int serial_number; int model; int manufacturer; } ;
struct gb_power_supply_get_description_request {int psy_id; } ;
struct gb_power_supply {int properties_count; int type; void* serial_number; void* model_name; void* manufacturer; int id; } ;
struct gb_connection {int dummy; } ;
typedef int resp ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gb_connection*,int ,struct gb_power_supply_get_description_request*,int,struct gb_power_supply_get_description_response*,int) ;
 struct gb_connection* FUNC_1 (struct gb_power_supply*) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct gb_power_supply *VAR_4)
{
 struct gb_connection *VAR_5 = FUNC_1(VAR_4);
 struct gb_power_supply_get_description_request VAR_6;
 struct gb_power_supply_get_description_response VAR_7;
 int VAR_8;

 VAR_6.psy_id = VAR_4->id;

 VAR_8 = FUNC_0(VAR_5,
    VAR_1,
    &VAR_6, sizeof(VAR_6), &VAR_7, sizeof(VAR_7));
 if (VAR_8 < 0)
  return VAR_8;

 VAR_4->manufacturer = FUNC_2(VAR_7.manufacturer, VAR_3, VAR_2);
 if (!VAR_4->manufacturer)
  return -VAR_0;
 VAR_4->model_name = FUNC_2(VAR_7.model, VAR_3, VAR_2);
 if (!VAR_4->model_name)
  return -VAR_0;
 VAR_4->serial_number = FUNC_2(VAR_7.serial_number, VAR_3,
           VAR_2);
 if (!VAR_4->serial_number)
  return -VAR_0;

 VAR_4->type = FUNC_3(VAR_7.type);
 VAR_4->properties_count = VAR_7.properties_count;

 return 0;
}
