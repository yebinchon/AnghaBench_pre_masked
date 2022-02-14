
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int get_property; int num_properties; int properties; int type; } ;
struct rx51_device_info {void* channel_temp; void* channel_bsi; void* channel_vbat; void* bat; TYPE_1__ bat_desc; int * dev; } ;
struct power_supply_config {struct rx51_device_info* drv_data; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_2 ;
 int FUNC_2 (void*) ;
 struct rx51_device_info* FUNC_3 (int *,int,int ) ;
 void* FUNC_4 (int *,char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct platform_device*,struct rx51_device_info*) ;
 void* FUNC_7 (int *,TYPE_1__*,struct power_supply_config*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct power_supply_config VAR_6 = {};
 struct rx51_device_info *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_6(VAR_5, VAR_7);

 VAR_7->dev = &VAR_5->dev;
 VAR_7->bat_desc.name = "rx51-battery";
 VAR_7->bat_desc.type = VAR_2;
 VAR_7->bat_desc.properties = VAR_4;
 VAR_7->bat_desc.num_properties = FUNC_0(VAR_4);
 VAR_7->bat_desc.get_property = VAR_3;

 VAR_6.drv_data = VAR_7;

 VAR_7->channel_temp = FUNC_4(VAR_7->dev, "temp");
 if (FUNC_1(VAR_7->channel_temp)) {
  VAR_8 = FUNC_2(VAR_7->channel_temp);
  goto error;
 }

 VAR_7->channel_bsi = FUNC_4(VAR_7->dev, "bsi");
 if (FUNC_1(VAR_7->channel_bsi)) {
  VAR_8 = FUNC_2(VAR_7->channel_bsi);
  goto error_channel_temp;
 }

 VAR_7->channel_vbat = FUNC_4(VAR_7->dev, "vbat");
 if (FUNC_1(VAR_7->channel_vbat)) {
  VAR_8 = FUNC_2(VAR_7->channel_vbat);
  goto error_channel_bsi;
 }

 VAR_7->bat = FUNC_7(VAR_7->dev, &VAR_7->bat_desc, &VAR_6);
 if (FUNC_1(VAR_7->bat)) {
  VAR_8 = FUNC_2(VAR_7->bat);
  goto error_channel_vbat;
 }

 return 0;

error_channel_vbat:
 FUNC_5(VAR_7->channel_vbat);
error_channel_bsi:
 FUNC_5(VAR_7->channel_bsi);
error_channel_temp:
 FUNC_5(VAR_7->channel_temp);
error:

 return VAR_8;
}
