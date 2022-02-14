
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_11__ {int parent; int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_device_id {struct da9063_compatible_rtc_regmap* data; } ;
struct da9063_compatible_rtc_regmap {size_t rtc_data_start; int rtc_alarm_len; int rtc_alarm_secs_reg; int rtc_tick_on_mask; int rtc_alarm_year_reg; int rtc_alarm_status_mask; int rtc_crystal_mask; int rtc_enable_32k_crystal_reg; int rtc_enable_mask; int rtc_enable_reg; } ;
struct da9063_compatible_rtc {int rtc_sync; TYPE_1__* rtc_dev; int alarm_time; int regmap; struct da9063_compatible_rtc_regmap* config; } ;
struct da9063 {scalar_t__ variant_code; } ;
struct TYPE_10__ {int uie_unsupported; int range_max; int range_min; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct da9063_compatible_rtc_regmap VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *,int *,struct da9063_compatible_rtc*) ;
 int VAR_14 ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 struct da9063* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 struct da9063_compatible_rtc* FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (TYPE_3__*,int,int *,int ,int,char*,struct da9063_compatible_rtc*) ;
 TYPE_1__* FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 struct of_device_id* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct platform_device*,char*) ;
 int FUNC_13 (struct platform_device*,struct da9063_compatible_rtc*) ;
 int FUNC_14 (int ,int ,int *,int ) ;
 int FUNC_15 (int ,int ,int ,int ) ;
 int FUNC_16 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_15)
{
 struct da9063_compatible_rtc *VAR_16;
 const struct da9063_compatible_rtc_regmap *VAR_17;
 const struct of_device_id *VAR_18;
 int VAR_19;
 u8 VAR_20[VAR_7];
 int VAR_21;

 if (!VAR_15->dev.of_node)
  return -VAR_2;

 VAR_18 = FUNC_11(VAR_13,
         VAR_15->dev.of_node);

 VAR_16 = FUNC_7(&VAR_15->dev, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->config = VAR_18->data;
 if (FUNC_10(VAR_15->dev.of_node, "dlg,da9063-rtc")) {
  struct da9063 *VAR_22 = FUNC_4(VAR_15->dev.parent);

  if (VAR_22->variant_code == VAR_6)
   VAR_16->config = &VAR_11;
 }

 VAR_16->regmap = FUNC_5(VAR_15->dev.parent, ((void*)0));
 if (!VAR_16->regmap) {
  FUNC_6(&VAR_15->dev, "Parent regmap unavailable.\n");
  return -VAR_2;
 }

 VAR_17 = VAR_16->config;
 VAR_21 = FUNC_15(VAR_16->regmap,
     VAR_17->rtc_enable_reg,
     VAR_17->rtc_enable_mask,
     VAR_17->rtc_enable_mask);
 if (VAR_21 < 0) {
  FUNC_3(&VAR_15->dev, "Failed to enable RTC\n");
  return VAR_21;
 }

 VAR_21 = FUNC_15(VAR_16->regmap,
     VAR_17->rtc_enable_32k_crystal_reg,
     VAR_17->rtc_crystal_mask,
     VAR_17->rtc_crystal_mask);
 if (VAR_21 < 0) {
  FUNC_3(&VAR_15->dev, "Failed to run 32kHz oscillator\n");
  return VAR_21;
 }

 VAR_21 = FUNC_15(VAR_16->regmap,
     VAR_17->rtc_alarm_secs_reg,
     VAR_17->rtc_alarm_status_mask,
     0);
 if (VAR_21 < 0) {
  FUNC_3(&VAR_15->dev, "Failed to access RTC alarm register\n");
  return VAR_21;
 }

 VAR_21 = FUNC_15(VAR_16->regmap,
     VAR_17->rtc_alarm_secs_reg,
     VAR_0,
     VAR_0);
 if (VAR_21 < 0) {
  FUNC_3(&VAR_15->dev, "Failed to access RTC alarm register\n");
  return VAR_21;
 }

 VAR_21 = FUNC_15(VAR_16->regmap,
     VAR_17->rtc_alarm_year_reg,
     VAR_17->rtc_tick_on_mask,
     0);
 if (VAR_21 < 0) {
  FUNC_3(&VAR_15->dev, "Failed to disable TICKs\n");
  return VAR_21;
 }

 VAR_20[VAR_8] = 0;
 VAR_21 = FUNC_14(VAR_16->regmap,
          VAR_17->rtc_alarm_secs_reg,
          &VAR_20[VAR_17->rtc_data_start],
          VAR_17->rtc_alarm_len);
 if (VAR_21 < 0) {
  FUNC_3(&VAR_15->dev, "Failed to read initial alarm data: %d\n",
   VAR_21);
  return VAR_21;
 }

 FUNC_13(VAR_15, VAR_16);

 VAR_16->rtc_dev = FUNC_9(&VAR_15->dev);
 if (FUNC_0(VAR_16->rtc_dev))
  return FUNC_1(VAR_16->rtc_dev);

 VAR_16->rtc_dev->ops = &VAR_14;
 VAR_16->rtc_dev->range_min = VAR_9;
 VAR_16->rtc_dev->range_max = VAR_10;

 FUNC_2(VAR_20, &VAR_16->alarm_time, VAR_16);
 VAR_16->rtc_sync = 0;





 if (VAR_17->rtc_data_start != VAR_8)
  VAR_16->rtc_dev->uie_unsupported = 1;

 VAR_19 = FUNC_12(VAR_15, "ALARM");
 VAR_21 = FUNC_8(&VAR_15->dev, VAR_19, ((void*)0),
     VAR_12,
     VAR_5 | VAR_4,
     "ALARM", VAR_16);
 if (VAR_21)
  FUNC_3(&VAR_15->dev, "Failed to request ALARM IRQ %d: %d\n",
   VAR_19, VAR_21);

 return FUNC_16(VAR_16->rtc_dev);
}
