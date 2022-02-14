
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_config {struct lego_ev3_battery* drv_data; int of_node; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct lego_ev3_battery {int v_max; int v_min; void* psy; int technology; void* rechargeable_gpio; void* iio_i; void* iio_v; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct device*,char*) ;
 void* FUNC_2 (struct device*,char*,int ) ;
 void* FUNC_3 (struct device*,char*) ;
 struct lego_ev3_battery* FUNC_4 (struct device*,int,int ) ;
 void* FUNC_5 (struct device*,int *,struct power_supply_config*) ;
 scalar_t__ FUNC_6 (void*) ;
 int VAR_6 ;
 int FUNC_7 (struct platform_device*,struct lego_ev3_battery*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct lego_ev3_battery *VAR_9;
 struct power_supply_config VAR_10 = {};
 int VAR_11;

 VAR_9 = FUNC_4(VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 FUNC_7(VAR_7, VAR_9);

 VAR_9->iio_v = FUNC_3(VAR_8, "voltage");
 VAR_11 = FUNC_0(VAR_9->iio_v);
 if (VAR_11) {
  if (VAR_11 != -VAR_1)
   FUNC_1(VAR_8, "Failed to get voltage iio channel\n");
  return VAR_11;
 }

 VAR_9->iio_i = FUNC_3(VAR_8, "current");
 VAR_11 = FUNC_0(VAR_9->iio_i);
 if (VAR_11) {
  if (VAR_11 != -VAR_1)
   FUNC_1(VAR_8, "Failed to get current iio channel\n");
  return VAR_11;
 }

 VAR_9->rechargeable_gpio = FUNC_2(VAR_8, "rechargeable", VAR_3);
 VAR_11 = FUNC_0(VAR_9->rechargeable_gpio);
 if (VAR_11) {
  if (VAR_11 != -VAR_1)
   FUNC_1(VAR_8, "Failed to get rechargeable gpio\n");
  return VAR_11;
 }





 if (FUNC_6(VAR_9->rechargeable_gpio)) {

  VAR_9->technology = VAR_4;
  VAR_9->v_max = 84000000;
  VAR_9->v_min = 60000000;
 } else {

  VAR_9->technology = VAR_5;
  VAR_9->v_max = 90000000;
  VAR_9->v_min = 48000000;
 }

 VAR_10.of_node = VAR_7->dev.of_node;
 VAR_10.drv_data = VAR_9;

 VAR_9->psy = FUNC_5(VAR_8, &VAR_6,
            &VAR_10);
 VAR_11 = FUNC_0(VAR_9->psy);
 if (VAR_11) {
  FUNC_1(VAR_8, "failed to register power supply\n");
  return VAR_11;
 }

 return 0;
}
