
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int property_is_writeable; int set_property; int get_property; void* num_properties; void* properties; void* num_usb_types; void* usb_types; int type; } ;
struct tcpm_port {int psy; TYPE_1__ psy_desc; int dev; int usb_type; } ;
struct power_supply_config {int fwnode; struct tcpm_port* drv_data; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ,size_t,int ) ;
 int FUNC_5 (int ,TYPE_1__*,struct power_supply_config*) ;
 int FUNC_6 (char*,size_t,char*,char*,char const*) ;
 int FUNC_7 (char const*) ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;

__attribute__((used)) static int FUNC_8(struct tcpm_port *VAR_10)
{
 struct power_supply_config VAR_11 = {};
 const char *VAR_12 = FUNC_3(VAR_10->dev);
 size_t VAR_13 = FUNC_7(VAR_5) +
         FUNC_7(VAR_12) + 1;
 char *VAR_14;

 VAR_11.drv_data = VAR_10;
 VAR_11.fwnode = FUNC_2(VAR_10->dev);
 VAR_14 = FUNC_4(VAR_10->dev, VAR_13, VAR_1);
 if (!VAR_14)
  return -VAR_0;

 FUNC_6(VAR_14, VAR_13, "%s%s", VAR_5,
   VAR_12);
 VAR_10->psy_desc.name = VAR_14;
 VAR_10->psy_desc.type = VAR_2,
 VAR_10->psy_desc.usb_types = VAR_9;
 VAR_10->psy_desc.num_usb_types = FUNC_0(VAR_9);
 VAR_10->psy_desc.properties = VAR_7,
 VAR_10->psy_desc.num_properties = FUNC_0(VAR_7),
 VAR_10->psy_desc.get_property = VAR_4,
 VAR_10->psy_desc.set_property = VAR_8,
 VAR_10->psy_desc.property_is_writeable = VAR_6,

 VAR_10->usb_type = VAR_3;

 VAR_10->psy = FUNC_5(VAR_10->dev, &VAR_10->psy_desc,
            &VAR_11);

 return FUNC_1(VAR_10->psy);
}
