
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int * rfkill; } ;
struct TYPE_14__ {int * rfkill; } ;
struct TYPE_13__ {int * rfkill; } ;
struct TYPE_12__ {int * rfkill; } ;
struct TYPE_11__ {int * rfkill; } ;
struct TYPE_16__ {scalar_t__ ops; } ;
struct TYPE_10__ {int * rfkill; } ;
struct asus_wmi {TYPE_7__ uwb; TYPE_6__ gps; TYPE_5__ wwan3g; TYPE_4__ wimax; TYPE_3__ bluetooth; scalar_t__ hotplug_workqueue; TYPE_8__ hotplug_slot; TYPE_2__ wlan; TYPE_1__* driver; } ;
struct TYPE_9__ {scalar_t__ wlan_ctrl_by_user; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct asus_wmi*) ;
 int FUNC_2 (struct asus_wmi*,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct asus_wmi *VAR_0)
{
 if (VAR_0->driver->wlan_ctrl_by_user && FUNC_0())
  return;

 FUNC_2(VAR_0, "\\_SB.PCI0.P0P5");
 FUNC_2(VAR_0, "\\_SB.PCI0.P0P6");
 FUNC_2(VAR_0, "\\_SB.PCI0.P0P7");
 if (VAR_0->wlan.rfkill) {
  FUNC_6(VAR_0->wlan.rfkill);
  FUNC_5(VAR_0->wlan.rfkill);
  VAR_0->wlan.rfkill = ((void*)0);
 }




 FUNC_1(VAR_0);
 if (VAR_0->hotplug_slot.ops)
  FUNC_4(&VAR_0->hotplug_slot);
 if (VAR_0->hotplug_workqueue)
  FUNC_3(VAR_0->hotplug_workqueue);

 if (VAR_0->bluetooth.rfkill) {
  FUNC_6(VAR_0->bluetooth.rfkill);
  FUNC_5(VAR_0->bluetooth.rfkill);
  VAR_0->bluetooth.rfkill = ((void*)0);
 }
 if (VAR_0->wimax.rfkill) {
  FUNC_6(VAR_0->wimax.rfkill);
  FUNC_5(VAR_0->wimax.rfkill);
  VAR_0->wimax.rfkill = ((void*)0);
 }
 if (VAR_0->wwan3g.rfkill) {
  FUNC_6(VAR_0->wwan3g.rfkill);
  FUNC_5(VAR_0->wwan3g.rfkill);
  VAR_0->wwan3g.rfkill = ((void*)0);
 }
 if (VAR_0->gps.rfkill) {
  FUNC_6(VAR_0->gps.rfkill);
  FUNC_5(VAR_0->gps.rfkill);
  VAR_0->gps.rfkill = ((void*)0);
 }
 if (VAR_0->uwb.rfkill) {
  FUNC_6(VAR_0->uwb.rfkill);
  FUNC_5(VAR_0->uwb.rfkill);
  VAR_0->uwb.rfkill = ((void*)0);
 }
}
