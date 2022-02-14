
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thermal_zone_device {struct intel_soc_dts_sensor_entry* devdata; } ;
struct intel_soc_dts_sensors {int tj_max; } ;
struct intel_soc_dts_sensor_entry {int temp_mask; int temp_shift; struct intel_soc_dts_sensors* sensors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_4,
        int *VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 struct intel_soc_dts_sensor_entry *VAR_8;
 struct intel_soc_dts_sensors *VAR_9;

 VAR_8 = VAR_4->devdata;
 VAR_9 = VAR_8->sensors;
 VAR_6 = FUNC_0(VAR_0, VAR_1,
          VAR_2, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_7 = (VAR_7 & VAR_8->temp_mask) >> VAR_8->temp_shift;
 VAR_7 -= VAR_3;
 *VAR_5 = VAR_9->tj_max - VAR_7 * 1000;

 return 0;
}
