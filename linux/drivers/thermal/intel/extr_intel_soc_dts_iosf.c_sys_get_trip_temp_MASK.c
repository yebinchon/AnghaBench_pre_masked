
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thermal_zone_device {struct intel_soc_dts_sensor_entry* devdata; } ;
struct intel_soc_dts_sensors {int tj_max; int dts_update_lock; } ;
struct intel_soc_dts_sensor_entry {struct intel_soc_dts_sensors* sensors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_4, int VAR_5,
        int *VAR_6)
{
 int VAR_7;
 u32 VAR_8;
 struct intel_soc_dts_sensor_entry *VAR_9;
 struct intel_soc_dts_sensors *VAR_10;

 VAR_9 = VAR_4->devdata;
 VAR_10 = VAR_9->sensors;
 FUNC_1(&VAR_10->dts_update_lock);
 VAR_7 = FUNC_0(VAR_0, VAR_1,
          VAR_2, &VAR_8);
 FUNC_2(&VAR_10->dts_update_lock);
 if (VAR_7)
  return VAR_7;

 VAR_8 = (VAR_8 >> (VAR_5 * 8)) & VAR_3;
 if (!VAR_8)
  *VAR_6 = 0;
 else
  *VAR_6 = VAR_10->tj_max - VAR_8 * 1000;

 return 0;
}
