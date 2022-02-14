
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_thermal_data {size_t sensor_id; struct thermal_zone_device* pcb_tz; int ti_thermal; struct ti_bandgap* bgp; } ;
struct ti_temp_sensor {int slope_pcb; int constant_pcb; } ;
struct ti_bandgap {int dev; TYPE_1__* conf; } ;
struct thermal_zone_device {int dummy; } ;
struct TYPE_2__ {struct ti_temp_sensor* sensors; } ;


 int FUNC_0 (struct thermal_zone_device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct thermal_zone_device*,int*) ;
 int FUNC_5 (struct ti_bandgap*,size_t,int*) ;
 int FUNC_6 (int,int,int) ;

__attribute__((used)) static inline int FUNC_7(void *VAR_0, int *VAR_1)
{
 struct thermal_zone_device *VAR_2 = ((void*)0);
 struct ti_thermal_data *VAR_3 = VAR_0;
 struct ti_bandgap *VAR_4;
 const struct ti_temp_sensor *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 if (!VAR_3)
  return 0;

 VAR_4 = VAR_3->bgp;
 VAR_5 = &VAR_4->conf->sensors[VAR_3->sensor_id];

 VAR_6 = FUNC_5(VAR_4, VAR_3->sensor_id, &VAR_7);
 if (VAR_6)
  return VAR_6;


 VAR_8 = FUNC_3(VAR_3->ti_thermal);
 VAR_9 = FUNC_2(VAR_3->ti_thermal);

 VAR_2 = VAR_3->pcb_tz;

 if (!FUNC_0(VAR_2)) {
  VAR_6 = FUNC_4(VAR_2, &VAR_10);
  if (!VAR_6) {
   VAR_7 -= VAR_10;
   VAR_8 = VAR_5->slope_pcb;
   VAR_9 = VAR_5->constant_pcb;
  } else {
   FUNC_1(VAR_4->dev,
    "Failed to read PCB state. Using defaults\n");
   VAR_6 = 0;
  }
 }
 *VAR_1 = FUNC_6(VAR_7, VAR_8, VAR_9);

 return VAR_6;
}
