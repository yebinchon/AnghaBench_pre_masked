
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ops; } ;
struct eeepc_laptop {int * wimax_rfkill; int * wwan3g_rfkill; int * bluetooth_rfkill; TYPE_1__ hotplug_slot; int * wlan_rfkill; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eeepc_laptop*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct eeepc_laptop *VAR_3)
{
 FUNC_0(VAR_3, VAR_0);
 FUNC_0(VAR_3, VAR_1);
 FUNC_0(VAR_3, VAR_2);
 if (VAR_3->wlan_rfkill) {
  FUNC_3(VAR_3->wlan_rfkill);
  FUNC_2(VAR_3->wlan_rfkill);
  VAR_3->wlan_rfkill = ((void*)0);
 }

 if (VAR_3->hotplug_slot.ops)
  FUNC_1(&VAR_3->hotplug_slot);

 if (VAR_3->bluetooth_rfkill) {
  FUNC_3(VAR_3->bluetooth_rfkill);
  FUNC_2(VAR_3->bluetooth_rfkill);
  VAR_3->bluetooth_rfkill = ((void*)0);
 }
 if (VAR_3->wwan3g_rfkill) {
  FUNC_3(VAR_3->wwan3g_rfkill);
  FUNC_2(VAR_3->wwan3g_rfkill);
  VAR_3->wwan3g_rfkill = ((void*)0);
 }
 if (VAR_3->wimax_rfkill) {
  FUNC_3(VAR_3->wimax_rfkill);
  FUNC_2(VAR_3->wimax_rfkill);
  VAR_3->wimax_rfkill = ((void*)0);
 }
}
