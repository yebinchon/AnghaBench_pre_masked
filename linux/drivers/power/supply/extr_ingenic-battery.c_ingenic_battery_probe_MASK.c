
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply_desc {char* name; int get_property; int num_properties; int properties; int type; } ;
struct power_supply_config {int of_node; struct ingenic_battery* drv_data; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {scalar_t__ voltage_min_design_uv; scalar_t__ voltage_max_design_uv; } ;
struct ingenic_battery {TYPE_1__ info; int battery; struct power_supply_desc desc; int channel; struct device* dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*) ;
 struct ingenic_battery* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,struct power_supply_desc*,struct power_supply_config*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct ingenic_battery*) ;
 int FUNC_8 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct ingenic_battery *VAR_7;
 struct power_supply_config VAR_8 = {};
 struct power_supply_desc *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_5(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = VAR_6;
 VAR_7->channel = FUNC_4(VAR_6, "battery");
 if (FUNC_1(VAR_7->channel))
  return FUNC_2(VAR_7->channel);

 VAR_9 = &VAR_7->desc;
 VAR_9->name = "jz-battery";
 VAR_9->type = VAR_2;
 VAR_9->properties = VAR_4;
 VAR_9->num_properties = FUNC_0(VAR_4);
 VAR_9->get_property = VAR_3;
 VAR_8.drv_data = VAR_7;
 VAR_8.of_node = VAR_6->of_node;

 VAR_7->battery = FUNC_6(VAR_6, VAR_9, &VAR_8);
 if (FUNC_1(VAR_7->battery)) {
  FUNC_3(VAR_6, "Unable to register battery\n");
  return FUNC_2(VAR_7->battery);
 }

 VAR_10 = FUNC_8(VAR_7->battery, &VAR_7->info);
 if (VAR_10) {
  FUNC_3(VAR_6, "Unable to get battery info: %d\n", VAR_10);
  return VAR_10;
 }
 if (VAR_7->info.voltage_min_design_uv < 0) {
  FUNC_3(VAR_6, "Unable to get voltage min design\n");
  return VAR_7->info.voltage_min_design_uv;
 }
 if (VAR_7->info.voltage_max_design_uv < 0) {
  FUNC_3(VAR_6, "Unable to get voltage max design\n");
  return VAR_7->info.voltage_max_design_uv;
 }

 return FUNC_7(VAR_7);
}
