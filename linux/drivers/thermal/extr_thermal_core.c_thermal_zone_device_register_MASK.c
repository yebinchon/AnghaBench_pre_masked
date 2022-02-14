
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct thermal_zone_params {int no_hwmon; int governor_name; } ;
struct thermal_zone_device_ops {scalar_t__ (* get_trip_temp ) (struct thermal_zone_device*,int,int*) ;scalar_t__ (* get_trip_type ) (struct thermal_zone_device*,int,int*) ;} ;
struct TYPE_5__ {int * class; } ;
struct thermal_zone_device {int id; int trips; int passive_delay; int polling_delay; TYPE_1__ device; int need_update; int poll_queue; int node; struct thermal_zone_params* tzp; int trips_disabled; struct thermal_zone_device_ops* ops; void* devdata; int type; int lock; int ida; int thermal_instances; } ;
struct thermal_governor {int dummy; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct thermal_zone_device* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct thermal_governor* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct thermal_zone_device*) ;
 struct thermal_governor* VAR_6 ;
 int FUNC_7 (TYPE_1__*,char*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (struct thermal_zone_device*) ;
 struct thermal_zone_device* FUNC_14 (int,int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int,int *) ;
 int FUNC_22 (int ,char const*,int) ;
 scalar_t__ FUNC_23 (char const*) ;
 scalar_t__ FUNC_24 (struct thermal_zone_device*,int,int*) ;
 scalar_t__ FUNC_25 (struct thermal_zone_device*,int,int*) ;
 int FUNC_26 (struct thermal_zone_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_27 (struct thermal_zone_device*,struct thermal_governor*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_28 (struct thermal_zone_device*,int) ;
 int VAR_12 ;
 int FUNC_29 (struct thermal_zone_device*) ;
 int FUNC_30 (struct thermal_zone_device*,int ) ;

struct thermal_zone_device *
FUNC_31(const char *VAR_13, int VAR_14, int VAR_15,
        void *VAR_16, struct thermal_zone_device_ops *VAR_17,
        struct thermal_zone_params *VAR_18, int VAR_19,
        int VAR_20)
{
 struct thermal_zone_device *VAR_21;
 enum thermal_trip_type VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 struct thermal_governor *VAR_27;

 if (!VAR_13 || FUNC_23(VAR_13) == 0) {
  FUNC_19("Error: No thermal zone type defined\n");
  return FUNC_0(-VAR_0);
 }

 if (VAR_13 && FUNC_23(VAR_13) >= VAR_5) {
  FUNC_19("Error: Thermal zone name (%s) too long, should be under %d chars\n",
         VAR_13, VAR_5);
  return FUNC_0(-VAR_0);
 }

 if (VAR_14 > VAR_4 || VAR_14 < 0 || VAR_15 >> VAR_14) {
  FUNC_19("Error: Incorrect number of thermal trips\n");
  return FUNC_0(-VAR_0);
 }

 if (!VAR_17) {
  FUNC_19("Error: Thermal zone device ops not defined\n");
  return FUNC_0(-VAR_0);
 }

 if (VAR_14 > 0 && (!VAR_17->get_trip_type || !VAR_17->get_trip_temp))
  return FUNC_0(-VAR_0);

 VAR_21 = FUNC_14(sizeof(*VAR_21), VAR_2);
 if (!VAR_21)
  return FUNC_0(-VAR_1);

 FUNC_2(&VAR_21->thermal_instances);
 FUNC_10(&VAR_21->ida);
 FUNC_16(&VAR_21->lock);
 VAR_24 = FUNC_11(&VAR_10, 0, 0, VAR_2);
 if (VAR_24 < 0) {
  VAR_25 = VAR_24;
  goto free_tz;
 }

 VAR_21->id = VAR_24;
 FUNC_22(VAR_21->type, VAR_13, sizeof(VAR_21->type));
 VAR_21->ops = VAR_17;
 VAR_21->tzp = VAR_18;
 VAR_21->device.class = &VAR_7;
 VAR_21->devdata = VAR_16;
 VAR_21->trips = VAR_14;
 VAR_21->passive_delay = VAR_19;
 VAR_21->polling_delay = VAR_20;



 VAR_25 = FUNC_28(VAR_21, VAR_15);
 if (VAR_25)
  goto remove_id;


 FUNC_5(&VAR_21->need_update, 1);

 FUNC_7(&VAR_21->device, "thermal_zone%d", VAR_21->id);
 VAR_25 = FUNC_9(&VAR_21->device);
 if (VAR_25)
  goto release_device;

 for (VAR_26 = 0; VAR_26 < VAR_14; VAR_26++) {
  if (VAR_21->ops->get_trip_type(VAR_21, VAR_26, &VAR_22))
   FUNC_21(VAR_26, &VAR_21->trips_disabled);
  if (VAR_21->ops->get_trip_temp(VAR_21, VAR_26, &VAR_23))
   FUNC_21(VAR_26, &VAR_21->trips_disabled);

  if (VAR_23 == 0)
   FUNC_21(VAR_26, &VAR_21->trips_disabled);
 }


 FUNC_17(&VAR_8);

 if (VAR_21->tzp)
  VAR_27 = FUNC_3(VAR_21->tzp->governor_name);
 else
  VAR_27 = VAR_6;

 VAR_25 = FUNC_27(VAR_21, VAR_27);
 if (VAR_25) {
  FUNC_18(&VAR_8);
  goto unregister;
 }

 FUNC_18(&VAR_8);

 if (!VAR_21->tzp || !VAR_21->tzp->no_hwmon) {
  VAR_25 = FUNC_26(VAR_21);
  if (VAR_25)
   goto unregister;
 }

 FUNC_17(&VAR_9);
 FUNC_15(&VAR_21->node, &VAR_11);
 FUNC_18(&VAR_9);


 FUNC_6(VAR_21);

 FUNC_1(&VAR_21->poll_queue, VAR_12);

 FUNC_29(VAR_21);

 if (FUNC_4(&VAR_21->need_update, 1, 0))
  FUNC_30(VAR_21, VAR_3);

 return VAR_21;

unregister:
 FUNC_8(&VAR_21->device);
release_device:
 FUNC_20(&VAR_21->device);
 VAR_21 = ((void*)0);
remove_id:
 FUNC_12(&VAR_10, VAR_24);
free_tz:
 FUNC_13(VAR_21);
 return FUNC_0(VAR_25);
}
