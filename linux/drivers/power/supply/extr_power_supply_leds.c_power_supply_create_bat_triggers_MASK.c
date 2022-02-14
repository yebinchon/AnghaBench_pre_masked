
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply {void* charging_full_trig_name; void* charging_trig_name; void* full_trig_name; int charging_blink_full_solid_trig; void* charging_blink_full_solid_trig_name; int full_trig; int charging_trig; int charging_full_trig; TYPE_1__* desc; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int *) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_2)
{
 VAR_2->charging_full_trig_name = FUNC_0(VAR_1,
     "%s-charging-or-full", VAR_2->desc->name);
 if (!VAR_2->charging_full_trig_name)
  goto charging_full_failed;

 VAR_2->charging_trig_name = FUNC_0(VAR_1,
     "%s-charging", VAR_2->desc->name);
 if (!VAR_2->charging_trig_name)
  goto charging_failed;

 VAR_2->full_trig_name = FUNC_0(VAR_1, "%s-full", VAR_2->desc->name);
 if (!VAR_2->full_trig_name)
  goto full_failed;

 VAR_2->charging_blink_full_solid_trig_name = FUNC_0(VAR_1,
  "%s-charging-blink-full-solid", VAR_2->desc->name);
 if (!VAR_2->charging_blink_full_solid_trig_name)
  goto charging_blink_full_solid_failed;

 FUNC_2(VAR_2->charging_full_trig_name,
        &VAR_2->charging_full_trig);
 FUNC_2(VAR_2->charging_trig_name,
        &VAR_2->charging_trig);
 FUNC_2(VAR_2->full_trig_name,
        &VAR_2->full_trig);
 FUNC_2(VAR_2->charging_blink_full_solid_trig_name,
        &VAR_2->charging_blink_full_solid_trig);

 return 0;

charging_blink_full_solid_failed:
 FUNC_1(VAR_2->full_trig_name);
full_failed:
 FUNC_1(VAR_2->charging_trig_name);
charging_failed:
 FUNC_1(VAR_2->charging_full_trig_name);
charging_full_failed:
 return -VAR_0;
}
