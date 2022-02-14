
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct intel_soc_dts_sensor_entry* devdata; } ;
struct intel_soc_dts_sensors {int tj_max; int dts_update_lock; } ;
struct intel_soc_dts_sensor_entry {int * trip_types; struct intel_soc_dts_sensors* sensors; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_soc_dts_sensor_entry*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_1, int VAR_2,
        int VAR_3)
{
 struct intel_soc_dts_sensor_entry *VAR_4 = VAR_1->devdata;
 struct intel_soc_dts_sensors *VAR_5 = VAR_4->sensors;
 int VAR_6;

 if (VAR_3 > VAR_5->tj_max)
  return -VAR_0;

 FUNC_0(&VAR_5->dts_update_lock);
 VAR_6 = FUNC_2(VAR_1->devdata, VAR_2, VAR_3,
      VAR_4->trip_types[VAR_2]);
 FUNC_1(&VAR_5->dts_update_lock);

 return VAR_6;
}
