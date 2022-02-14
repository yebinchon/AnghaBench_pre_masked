
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_soc_dts_sensors {scalar_t__ intr_type; int tj_max; } ;
struct intel_soc_dts_sensor_entry {int* trip_types; struct intel_soc_dts_sensors* sensors; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,scalar_t__,int*) ;
 int FUNC_1 (int ,int ,scalar_t__,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct intel_soc_dts_sensor_entry *VAR_13,
       int VAR_14, int VAR_15,
       enum thermal_trip_type VAR_16)
{
 int VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24 = VAR_10;
 struct intel_soc_dts_sensors *VAR_25 = VAR_13->sensors;

 if (VAR_25->intr_type == VAR_1)
  VAR_24 |= VAR_12;

 VAR_18 = (VAR_25->tj_max - VAR_15) / 1000;

 VAR_17 = FUNC_0(VAR_0, VAR_2,
          VAR_9, &VAR_20);
 if (VAR_17)
  return VAR_17;

 VAR_19 = (VAR_20 & ~(0xFF << (VAR_14 * 8)));
 VAR_19 |= (VAR_18 & 0xFF) << (VAR_14 * 8);
 VAR_17 = FUNC_1(VAR_0, VAR_3,
    VAR_9, VAR_19);
 if (VAR_17)
  return VAR_17;

 FUNC_2("update_trip_temp PTPS = %x\n", VAR_19);
 VAR_17 = FUNC_0(VAR_0, VAR_2,
          VAR_8, &VAR_19);
 if (VAR_17)
  goto err_restore_ptps;

 VAR_21 = VAR_19;

 VAR_17 = FUNC_0(VAR_0, VAR_2,
          VAR_11 + VAR_14,
          &VAR_23);
 if (VAR_17)
  goto err_restore_ptmc;

 VAR_22 = VAR_23;

 VAR_19 |= (VAR_6 |
     VAR_7);
 if (VAR_15) {
  if (VAR_14)
   VAR_19 |= VAR_5;
  else
   VAR_19 |= VAR_4;
  VAR_23 |= VAR_24;
 } else {
  if (VAR_14)
   VAR_19 &= ~VAR_5;
  else
   VAR_19 &= ~VAR_4;
  VAR_23 &= ~VAR_24;
 }
 VAR_17 = FUNC_1(VAR_0, VAR_3,
    VAR_8, VAR_19);
 if (VAR_17)
  goto err_restore_te_out;

 VAR_17 = FUNC_1(VAR_0, VAR_3,
    VAR_11 + VAR_14,
    VAR_23);
 if (VAR_17)
  goto err_restore_te_out;

 VAR_13->trip_types[VAR_14] = VAR_16;

 return 0;
err_restore_te_out:
 FUNC_1(VAR_0, VAR_3,
         VAR_8, VAR_22);
err_restore_ptmc:
 FUNC_1(VAR_0, VAR_3,
         VAR_8, VAR_21);
err_restore_ptps:
 FUNC_1(VAR_0, VAR_3,
         VAR_9, VAR_20);


 return VAR_17;
}
