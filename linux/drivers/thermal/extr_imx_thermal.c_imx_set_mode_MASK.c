
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {scalar_t__ passive_delay; scalar_t__ polling_delay; struct imx_thermal_data* devdata; } ;
struct thermal_soc_data {int power_down_mask; scalar_t__ sensor_ctrl; int measure_temp_mask; } ;
struct regmap {int dummy; } ;
struct imx_thermal_data {int irq_enabled; int mode; int irq; struct thermal_soc_data* socdata; struct regmap* tempmon; } ;
typedef enum thermal_device_mode { ____Placeholder_thermal_device_mode } thermal_device_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct regmap*,scalar_t__,int ) ;
 int FUNC_3 (struct thermal_zone_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct thermal_zone_device *VAR_6,
   enum thermal_device_mode VAR_7)
{
 struct imx_thermal_data *VAR_8 = VAR_6->devdata;
 struct regmap *VAR_9 = VAR_8->tempmon;
 const struct thermal_soc_data *VAR_10 = VAR_8->socdata;

 if (VAR_7 == VAR_4) {
  VAR_6->polling_delay = VAR_1;
  VAR_6->passive_delay = VAR_0;

  FUNC_2(VAR_9, VAR_10->sensor_ctrl + VAR_2,
        VAR_10->power_down_mask);
  FUNC_2(VAR_9, VAR_10->sensor_ctrl + VAR_3,
        VAR_10->measure_temp_mask);

  if (!VAR_8->irq_enabled) {
   VAR_8->irq_enabled = 1;
   FUNC_1(VAR_8->irq);
  }
 } else {
  FUNC_2(VAR_9, VAR_10->sensor_ctrl + VAR_2,
        VAR_10->measure_temp_mask);
  FUNC_2(VAR_9, VAR_10->sensor_ctrl + VAR_3,
        VAR_10->power_down_mask);

  VAR_6->polling_delay = 0;
  VAR_6->passive_delay = 0;

  if (VAR_8->irq_enabled) {
   FUNC_0(VAR_8->irq);
   VAR_8->irq_enabled = 0;
  }
 }

 VAR_8->mode = VAR_7;
 FUNC_3(VAR_6, VAR_5);

 return 0;
}
