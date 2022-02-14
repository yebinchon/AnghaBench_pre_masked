
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_bus {int dummy; } ;
struct TYPE_2__ {int * ops; } ;
struct asus_wmi {int hotplug_workqueue; TYPE_1__ hotplug_slot; int hotplug_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 struct pci_bus* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,struct pci_bus*,int ,char*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct asus_wmi *VAR_4)
{
 int VAR_5 = -VAR_1;
 struct pci_bus *VAR_6 = FUNC_3(0, 1);

 if (!VAR_6) {
  FUNC_5("Unable to find wifi PCI bus\n");
  return -VAR_0;
 }

 VAR_4->hotplug_workqueue =
     FUNC_1("hotplug_workqueue");
 if (!VAR_4->hotplug_workqueue)
  goto error_workqueue;

 FUNC_0(&VAR_4->hotplug_work, VAR_3);

 VAR_4->hotplug_slot.ops = &VAR_2;

 VAR_5 = FUNC_4(&VAR_4->hotplug_slot, VAR_6, 0, "asus-wifi");
 if (VAR_5) {
  FUNC_5("Unable to register hotplug slot - %d\n", VAR_5);
  goto error_register;
 }

 return 0;

error_register:
 VAR_4->hotplug_slot.ops = ((void*)0);
 FUNC_2(VAR_4->hotplug_workqueue);
error_workqueue:
 return VAR_5;
}
