
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thermal_zone_device {int device; int type; } ;
struct TYPE_8__ {int mode; int name; } ;
struct TYPE_9__ {TYPE_3__ attr; int show; } ;
struct TYPE_7__ {TYPE_4__ attr; int name; } ;
struct TYPE_6__ {TYPE_4__ attr; int name; } ;
struct thermal_hwmon_temp {int count; int device; TYPE_2__ temp_input; int tz_list; int hwmon_node; int node; TYPE_1__ temp_crit; struct thermal_zone_device* tz; int type; } ;
struct thermal_hwmon_device {int count; int device; TYPE_2__ temp_input; int tz_list; int hwmon_node; int node; TYPE_1__ temp_crit; struct thermal_zone_device* tz; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (int *,int ,struct thermal_hwmon_temp*,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct thermal_hwmon_temp*) ;
 struct thermal_hwmon_temp* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int,char*,int) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,char,char) ;
 int FUNC_15 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct thermal_hwmon_temp* FUNC_16 (struct thermal_zone_device*) ;
 scalar_t__ FUNC_17 (struct thermal_zone_device*) ;

int FUNC_18(struct thermal_zone_device *VAR_7)
{
 struct thermal_hwmon_device *VAR_8;
 struct thermal_hwmon_temp *VAR_9;
 int VAR_10 = 1;
 int VAR_11;

 VAR_8 = FUNC_16(VAR_7);
 if (VAR_8) {
  VAR_10 = 0;
  goto register_sys_interface;
 }

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_0(&VAR_8->tz_list);
 FUNC_13(VAR_8->type, VAR_7->type, VAR_2);
 FUNC_14(VAR_8->type, '-', '_');
 VAR_8->device = FUNC_5(&VAR_7->device, VAR_8->type,
       VAR_8, ((void*)0), ((void*)0));
 if (FUNC_1(VAR_8->device)) {
  VAR_11 = FUNC_2(VAR_8->device);
  goto free_mem;
 }

 register_sys_interface:
 VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_1);
 if (!VAR_9) {
  VAR_11 = -VAR_0;
  goto unregister_name;
 }

 VAR_9->tz = VAR_7;
 VAR_8->count++;

 FUNC_12(VAR_9->temp_input.name, sizeof(VAR_9->temp_input.name),
   "temp%d_input", VAR_8->count);
 VAR_9->temp_input.attr.attr.name = VAR_9->temp_input.name;
 VAR_9->temp_input.attr.attr.mode = 0444;
 VAR_9->temp_input.attr.show = VAR_4;
 FUNC_15(&VAR_9->temp_input.attr.attr);
 VAR_11 = FUNC_3(VAR_8->device, &VAR_9->temp_input.attr);
 if (VAR_11)
  goto free_temp_mem;

 if (FUNC_17(VAR_7)) {
  FUNC_12(VAR_9->temp_crit.name,
    sizeof(VAR_9->temp_crit.name),
    "temp%d_crit", VAR_8->count);
  VAR_9->temp_crit.attr.attr.name = VAR_9->temp_crit.name;
  VAR_9->temp_crit.attr.attr.mode = 0444;
  VAR_9->temp_crit.attr.show = VAR_3;
  FUNC_15(&VAR_9->temp_crit.attr.attr);
  VAR_11 = FUNC_3(VAR_8->device,
         &VAR_9->temp_crit.attr);
  if (VAR_11)
   goto unregister_input;
 }

 FUNC_10(&VAR_6);
 if (VAR_10)
  FUNC_9(&VAR_8->node, &VAR_5);
 FUNC_9(&VAR_9->hwmon_node, &VAR_8->tz_list);
 FUNC_11(&VAR_6);

 return 0;

 unregister_input:
 FUNC_4(VAR_8->device, &VAR_9->temp_input.attr);
 free_temp_mem:
 FUNC_7(VAR_9);
 unregister_name:
 if (VAR_10)
  FUNC_6(VAR_8->device);
 free_mem:
 if (VAR_10)
  FUNC_7(VAR_8);

 return VAR_11;
}
