
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_zone_device {int device; } ;
struct TYPE_4__ {int attr; } ;
struct TYPE_3__ {int attr; } ;
struct thermal_hwmon_temp {int device; int node; int tz_list; int hwmon_node; TYPE_2__ temp_crit; TYPE_1__ temp_input; } ;
struct thermal_hwmon_device {int device; int node; int tz_list; int hwmon_node; TYPE_2__ temp_crit; TYPE_1__ temp_input; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct thermal_hwmon_temp*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 struct thermal_hwmon_temp* FUNC_8 (struct thermal_zone_device*) ;
 struct thermal_hwmon_temp* FUNC_9 (struct thermal_hwmon_temp*,struct thermal_zone_device*) ;
 scalar_t__ FUNC_10 (struct thermal_zone_device*) ;
 scalar_t__ FUNC_11 (int) ;

void FUNC_12(struct thermal_zone_device *VAR_1)
{
 struct thermal_hwmon_device *VAR_2;
 struct thermal_hwmon_temp *VAR_3;

 VAR_2 = FUNC_8(VAR_1);
 if (FUNC_11(!VAR_2)) {

  FUNC_0(&VAR_1->device, "hwmon device lookup failed!\n");
  return;
 }

 VAR_3 = FUNC_9(VAR_2, VAR_1);
 if (FUNC_11(!VAR_3)) {

  FUNC_0(&VAR_1->device, "temperature input lookup failed!\n");
  return;
 }

 FUNC_1(VAR_2->device, &VAR_3->temp_input.attr);
 if (FUNC_10(VAR_1))
  FUNC_1(VAR_2->device, &VAR_3->temp_crit.attr);

 FUNC_6(&VAR_0);
 FUNC_4(&VAR_3->hwmon_node);
 FUNC_3(VAR_3);
 if (!FUNC_5(&VAR_2->tz_list)) {
  FUNC_7(&VAR_0);
  return;
 }
 FUNC_4(&VAR_2->node);
 FUNC_7(&VAR_0);

 FUNC_2(VAR_2->device);
 FUNC_3(VAR_2);
}
