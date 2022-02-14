
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_9__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct imx_thermal_data {scalar_t__ irq; int temp_max; int temp_critical; int temp_passive; int irq_enabled; struct regmap* thermal_clk; struct regmap* tz; int mode; TYPE_1__* socdata; int temp_grade; struct regmap* tempmon; } ;
struct TYPE_8__ {scalar_t__ version; int low_alarm_mask; int power_down_mask; int measure_temp_mask; int measure_freq_mask; int measure_freq_shift; scalar_t__ sensor_ctrl; scalar_t__ measure_freq_ctrl; scalar_t__ low_alarm_ctrl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (struct regmap*) ;
 int FUNC_3 (struct regmap*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (struct regmap*) ;
 int FUNC_5 (struct regmap*) ;
 int FUNC_6 (TYPE_2__*,char*,...) ;
 int FUNC_7 (TYPE_2__*,char*,int ,int,int,int) ;
 struct regmap* FUNC_8 (TYPE_2__*,int *) ;
 struct imx_thermal_data* FUNC_9 (TYPE_2__*,int,int ) ;
 int FUNC_10 (TYPE_2__*,int,int ,int ,int ,char*,struct imx_thermal_data*) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (struct platform_device*) ;
 int FUNC_13 (struct imx_thermal_data*,int) ;
 int FUNC_14 (struct imx_thermal_data*,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_15 (struct imx_thermal_data*) ;
 int FUNC_16 (struct imx_thermal_data*) ;
 int VAR_21 ;
 TYPE_1__* FUNC_17 (TYPE_2__*) ;
 scalar_t__ FUNC_18 (int ,char*,int *) ;
 scalar_t__ FUNC_19 (struct platform_device*,int ) ;
 int FUNC_20 (struct platform_device*,struct imx_thermal_data*) ;
 int FUNC_21 (struct regmap*,scalar_t__,int) ;
 struct regmap* FUNC_22 (int ,char*) ;
 struct regmap* FUNC_23 (char*,int ,int ,struct imx_thermal_data*,int *,int *,int ,int ) ;
 int FUNC_24 (struct regmap*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_22)
{
 struct imx_thermal_data *VAR_23;
 struct regmap *VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_23 = FUNC_9(&VAR_22->dev, sizeof(*VAR_23), VAR_3);
 if (!VAR_23)
  return -VAR_1;

 VAR_24 = FUNC_22(VAR_22->dev.of_node, "fsl,tempmon");
 if (FUNC_2(VAR_24)) {
  VAR_26 = FUNC_3(VAR_24);
  FUNC_6(&VAR_22->dev, "failed to get tempmon regmap: %d\n", VAR_26);
  return VAR_26;
 }
 VAR_23->tempmon = VAR_24;

 VAR_23->socdata = FUNC_17(&VAR_22->dev);
 if (!VAR_23->socdata) {
  FUNC_6(&VAR_22->dev, "no device match found\n");
  return -VAR_0;
 }


 if (VAR_23->socdata->version == VAR_16) {
  FUNC_21(VAR_24, VAR_6 + VAR_14,
   VAR_7 | VAR_8
   | VAR_9);




  FUNC_21(VAR_24, VAR_23->socdata->low_alarm_ctrl + VAR_15,
        VAR_23->socdata->low_alarm_mask);
 }

 VAR_23->irq = FUNC_19(VAR_22, 0);
 if (VAR_23->irq < 0)
  return VAR_23->irq;

 FUNC_20(VAR_22, VAR_23);

 if (FUNC_18(VAR_22->dev.of_node, "nvmem-cells", ((void*)0))) {
  VAR_26 = FUNC_11(VAR_22);
  if (VAR_26) {
   if (VAR_26 == -VAR_2)
    return VAR_26;

   FUNC_6(&VAR_22->dev, "failed to init from nvmem: %d\n",
    VAR_26);
   return VAR_26;
  }
 } else {
  VAR_26 = FUNC_12(VAR_22);
  if (VAR_26) {
   FUNC_6(&VAR_22->dev, "failed to init from fsl,tempmon-data\n");
   return VAR_26;
  }
 }


 FUNC_21(VAR_24, VAR_23->socdata->sensor_ctrl + VAR_14,
       VAR_23->socdata->power_down_mask);
 FUNC_21(VAR_24, VAR_23->socdata->sensor_ctrl + VAR_14,
       VAR_23->socdata->measure_temp_mask);
 FUNC_21(VAR_24, VAR_23->socdata->measure_freq_ctrl + VAR_14,
       VAR_23->socdata->measure_freq_mask);
 if (VAR_23->socdata->version != VAR_17)
  FUNC_21(VAR_24, VAR_4 + VAR_15,
   VAR_5);
 FUNC_21(VAR_24, VAR_23->socdata->sensor_ctrl + VAR_15,
       VAR_23->socdata->power_down_mask);

 VAR_26 = FUNC_15(VAR_23);
 if (VAR_26) {
  if (VAR_26 == -VAR_2)
   return VAR_26;

  FUNC_6(&VAR_22->dev,
   "failed to register cpufreq cooling device: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_23->thermal_clk = FUNC_8(&VAR_22->dev, ((void*)0));
 if (FUNC_2(VAR_23->thermal_clk)) {
  VAR_26 = FUNC_3(VAR_23->thermal_clk);
  if (VAR_26 != -VAR_2)
   FUNC_6(&VAR_22->dev,
    "failed to get thermal clk: %d\n", VAR_26);
  goto legacy_cleanup;
 }
 VAR_26 = FUNC_5(VAR_23->thermal_clk);
 if (VAR_26) {
  FUNC_6(&VAR_22->dev, "failed to enable thermal clk: %d\n", VAR_26);
  goto legacy_cleanup;
 }

 VAR_23->tz = FUNC_23("imx_thermal_zone",
      VAR_12,
      FUNC_0(VAR_13), VAR_23,
      &VAR_21, ((void*)0),
      VAR_10,
      VAR_11);
 if (FUNC_2(VAR_23->tz)) {
  VAR_26 = FUNC_3(VAR_23->tz);
  FUNC_6(&VAR_22->dev,
   "failed to register thermal zone device %d\n", VAR_26);
  goto clk_disable;
 }

 FUNC_7(&VAR_22->dev, "%s CPU temperature grade - max:%dC"
   " critical:%dC passive:%dC\n", VAR_23->temp_grade,
   VAR_23->temp_max / 1000, VAR_23->temp_critical / 1000,
   VAR_23->temp_passive / 1000);


 FUNC_21(VAR_24, VAR_23->socdata->measure_freq_ctrl + VAR_14,
       VAR_23->socdata->measure_freq_mask);
 VAR_25 = FUNC_1(32768, 10);
 FUNC_21(VAR_24, VAR_23->socdata->measure_freq_ctrl + VAR_15,
       VAR_25 << VAR_23->socdata->measure_freq_shift);
 FUNC_13(VAR_23, VAR_23->temp_passive);

 if (VAR_23->socdata->version == VAR_16)
  FUNC_14(VAR_23, VAR_23->temp_critical);

 FUNC_21(VAR_24, VAR_23->socdata->sensor_ctrl + VAR_14,
       VAR_23->socdata->power_down_mask);
 FUNC_21(VAR_24, VAR_23->socdata->sensor_ctrl + VAR_15,
       VAR_23->socdata->measure_temp_mask);

 VAR_23->irq_enabled = 1;
 VAR_23->mode = VAR_18;

 VAR_26 = FUNC_10(&VAR_22->dev, VAR_23->irq,
   VAR_19, VAR_20,
   0, "imx_thermal", VAR_23);
 if (VAR_26 < 0) {
  FUNC_6(&VAR_22->dev, "failed to request alarm irq: %d\n", VAR_26);
  goto thermal_zone_unregister;
 }

 return 0;

thermal_zone_unregister:
 FUNC_24(VAR_23->tz);
clk_disable:
 FUNC_4(VAR_23->thermal_clk);
legacy_cleanup:
 FUNC_16(VAR_23);

 return VAR_26;
}
