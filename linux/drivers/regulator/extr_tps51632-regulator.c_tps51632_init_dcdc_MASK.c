
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tps51632_regulator_platform_data {scalar_t__ max_voltage_uV; scalar_t__ dvfs_step_20mV; scalar_t__ base_voltage_uV; int enable_pwm_dvfs; } ;
struct tps51632_chip {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct tps51632_chip *VAR_6,
  struct tps51632_regulator_platform_data *VAR_7)
{
 int VAR_8;
 uint8_t VAR_9 = 0;
 int VAR_10;

 if (!VAR_7->enable_pwm_dvfs)
  goto skip_pwm_config;

 VAR_9 |= VAR_1;
 VAR_10 = FUNC_0(VAR_7->base_voltage_uV);
 VAR_8 = FUNC_3(VAR_6->regmap, VAR_5, VAR_10);
 if (VAR_8 < 0) {
  FUNC_1(VAR_6->dev, "BASE reg write failed, err %d\n", VAR_8);
  return VAR_8;
 }

 if (VAR_7->dvfs_step_20mV)
  VAR_9 |= VAR_2;

 if (VAR_7->max_voltage_uV) {
  unsigned int VAR_11;






  VAR_8 = FUNC_2(VAR_6->regmap, VAR_4, &VAR_11);
  if (VAR_8 < 0) {
   FUNC_1(VAR_6->dev, "VMAX read failed, err %d\n", VAR_8);
   return VAR_8;
  }
  if (!(VAR_11 & VAR_3)) {
   VAR_10 = FUNC_0(VAR_7->max_voltage_uV);
   VAR_8 = FUNC_3(VAR_6->regmap, VAR_4,
     VAR_10);
   if (VAR_8 < 0) {
    FUNC_1(VAR_6->dev,
     "VMAX write failed, err %d\n", VAR_8);
    return VAR_8;
   }
  }
 }

skip_pwm_config:
 VAR_8 = FUNC_3(VAR_6->regmap, VAR_0, VAR_9);
 if (VAR_8 < 0)
  FUNC_1(VAR_6->dev, "DVFS reg write failed, err %d\n", VAR_8);
 return VAR_8;
}
