
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct thermal_zone_device {int device; struct imx_thermal_data* devdata; } ;
struct thermal_soc_data {unsigned int temp_valid_mask; unsigned int temp_value_mask; unsigned int temp_value_shift; scalar_t__ version; int power_down_mask; scalar_t__ sensor_ctrl; int measure_temp_mask; int temp_data; } ;
struct regmap {int dummy; } ;
struct imx_thermal_data {scalar_t__ mode; unsigned int c1; unsigned int c2; int alarm_temp; int temp_passive; int temp_critical; int last_temp; int irq_enabled; int irq; struct thermal_soc_data* socdata; struct regmap* tempmon; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct imx_thermal_data*,int) ;
 int FUNC_3 (struct regmap*,int ,unsigned int*) ;
 int FUNC_4 (struct regmap*,scalar_t__,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct thermal_zone_device *VAR_6, int *VAR_7)
{
 struct imx_thermal_data *VAR_8 = VAR_6->devdata;
 const struct thermal_soc_data *VAR_9 = VAR_8->socdata;
 struct regmap *VAR_10 = VAR_8->tempmon;
 unsigned int VAR_11;
 bool VAR_12;
 u32 VAR_13;

 if (VAR_8->mode == VAR_5) {

  FUNC_3(VAR_10, VAR_9->temp_data, &VAR_13);
  VAR_12 = !(VAR_13 & VAR_9->temp_valid_mask);
 } else {





  FUNC_4(VAR_10, VAR_9->sensor_ctrl + VAR_1,
       VAR_9->power_down_mask);
  FUNC_4(VAR_10, VAR_9->sensor_ctrl + VAR_2,
       VAR_9->measure_temp_mask);

  VAR_12 = 1;
 }





 if (VAR_12)
  FUNC_5(20, 50);

 FUNC_3(VAR_10, VAR_9->temp_data, &VAR_13);

 if (VAR_8->mode != VAR_5) {
  FUNC_4(VAR_10, VAR_9->sensor_ctrl + VAR_1,
        VAR_9->measure_temp_mask);
  FUNC_4(VAR_10, VAR_9->sensor_ctrl + VAR_2,
        VAR_9->power_down_mask);
 }

 if ((VAR_13 & VAR_9->temp_valid_mask) == 0) {
  FUNC_0(&VAR_6->device, "temp measurement never finished\n");
  return -VAR_0;
 }

 VAR_11 = (VAR_13 & VAR_9->temp_value_mask)
  >> VAR_9->temp_value_shift;


 if (VAR_8->socdata->version == VAR_4)
  *VAR_7 = (VAR_11 - VAR_8->c1 + 25) * 1000;
 else
  *VAR_7 = VAR_8->c2 - VAR_11 * VAR_8->c1;


 if (VAR_8->socdata->version == VAR_3) {
  if (VAR_8->alarm_temp == VAR_8->temp_passive &&
   *VAR_7 >= VAR_8->temp_passive)
   FUNC_2(VAR_8, VAR_8->temp_critical);
  if (VAR_8->alarm_temp == VAR_8->temp_critical &&
   *VAR_7 < VAR_8->temp_passive) {
   FUNC_2(VAR_8, VAR_8->temp_passive);
   FUNC_0(&VAR_6->device, "thermal alarm off: T < %d\n",
    VAR_8->alarm_temp / 1000);
  }
 }

 if (*VAR_7 != VAR_8->last_temp) {
  FUNC_0(&VAR_6->device, "millicelsius: %d\n", *VAR_7);
  VAR_8->last_temp = *VAR_7;
 }


 if (!VAR_8->irq_enabled && *VAR_7 < VAR_8->alarm_temp) {
  VAR_8->irq_enabled = 1;
  FUNC_1(VAR_8->irq);
 }

 return 0;
}
