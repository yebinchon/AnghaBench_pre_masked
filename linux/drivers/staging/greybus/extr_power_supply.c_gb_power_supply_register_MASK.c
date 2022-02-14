
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct power_supply_config {struct gb_power_supply* drv_data; } ;
struct TYPE_4__ {int property_is_writeable; int set_property; int get_property; int num_properties; int properties; int type; int name; } ;
struct gb_power_supply {int psy; TYPE_2__ desc; int props_raw; int type; int name; } ;
struct gb_connection {TYPE_1__* bundle; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ) ;
 struct gb_connection* FUNC_1 (struct gb_power_supply*) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_2__*,struct power_supply_config*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct gb_power_supply*) ;

__attribute__((used)) static int FUNC_4(struct gb_power_supply *VAR_3)
{
 struct gb_connection *VAR_4 = FUNC_1(VAR_3);
 struct power_supply_config VAR_5 = {};

 VAR_5.drv_data = VAR_3;

 VAR_3->desc.name = VAR_3->name;
 VAR_3->desc.type = VAR_3->type;
 VAR_3->desc.properties = VAR_3->props_raw;
 VAR_3->desc.num_properties = FUNC_3(VAR_3);
 VAR_3->desc.get_property = VAR_0;
 VAR_3->desc.set_property = VAR_2;
 VAR_3->desc.property_is_writeable = VAR_1;

 VAR_3->psy = FUNC_2(&VAR_4->bundle->dev,
        &VAR_3->desc, &VAR_5);
 return FUNC_0(VAR_3->psy);
}
