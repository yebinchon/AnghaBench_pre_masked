
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct asus_wmi_driver {int panel_power; TYPE_1__* quirks; } ;
struct TYPE_3__ {int wapf; int hotplug_wireless; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_1(struct asus_wmi_driver *VAR_5)
{
 VAR_4 = &VAR_3;
 VAR_4->hotplug_wireless = VAR_2;

 FUNC_0(VAR_1);

 VAR_5->quirks = VAR_4;
 VAR_5->quirks->wapf = -1;
 VAR_5->panel_power = VAR_0;
}
