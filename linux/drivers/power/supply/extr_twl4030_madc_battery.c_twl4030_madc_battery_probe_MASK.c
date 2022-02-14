
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct twl4030_madc_battery {void* channel_temp; void* channel_ichg; void* channel_vbat; void* psy; struct twl4030_madc_bat_platform_data* pdata; } ;
struct twl4030_madc_bat_platform_data {int discharging_size; int discharging; int charging_size; int charging; } ;
struct twl4030_madc_bat_calibration {int dummy; } ;
struct power_supply_config {struct twl4030_madc_battery* drv_data; } ;
struct TYPE_4__ {struct twl4030_madc_bat_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 struct twl4030_madc_battery* FUNC_2 (TYPE_1__*,int,int ) ;
 void* FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct platform_device*,struct twl4030_madc_battery*) ;
 void* FUNC_6 (TYPE_1__*,int *,struct power_supply_config*) ;
 int FUNC_7 (int ,int ,int,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct twl4030_madc_battery *VAR_5;
 struct twl4030_madc_bat_platform_data *VAR_6 = VAR_4->dev.platform_data;
 struct power_supply_config VAR_7 = {};
 int VAR_8 = 0;

 VAR_5 = FUNC_2(&VAR_4->dev, sizeof(*VAR_5),
    VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->channel_temp = FUNC_3(&VAR_4->dev, "temp");
 if (FUNC_0(VAR_5->channel_temp)) {
  VAR_8 = FUNC_1(VAR_5->channel_temp);
  goto err;
 }

 VAR_5->channel_ichg = FUNC_3(&VAR_4->dev, "ichg");
 if (FUNC_0(VAR_5->channel_ichg)) {
  VAR_8 = FUNC_1(VAR_5->channel_ichg);
  goto err_temp;
 }

 VAR_5->channel_vbat = FUNC_3(&VAR_4->dev, "vbat");
 if (FUNC_0(VAR_5->channel_vbat)) {
  VAR_8 = FUNC_1(VAR_5->channel_vbat);
  goto err_ichg;
 }


 FUNC_7(VAR_6->charging, VAR_6->charging_size,
  sizeof(struct twl4030_madc_bat_calibration),
  VAR_2, ((void*)0));
 FUNC_7(VAR_6->discharging, VAR_6->discharging_size,
  sizeof(struct twl4030_madc_bat_calibration),
  VAR_2, ((void*)0));

 VAR_5->pdata = VAR_6;
 FUNC_5(VAR_4, VAR_5);
 VAR_7.drv_data = VAR_5;
 VAR_5->psy = FUNC_6(&VAR_4->dev,
            &VAR_3,
            &VAR_7);
 if (FUNC_0(VAR_5->psy)) {
  VAR_8 = FUNC_1(VAR_5->psy);
  goto err_vbat;
 }

 return 0;

err_vbat:
 FUNC_4(VAR_5->channel_vbat);
err_ichg:
 FUNC_4(VAR_5->channel_ichg);
err_temp:
 FUNC_4(VAR_5->channel_temp);
err:
 return VAR_8;
}
