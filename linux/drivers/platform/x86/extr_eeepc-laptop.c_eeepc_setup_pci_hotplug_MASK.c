
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_bus {int dummy; } ;
struct TYPE_2__ {int * ops; } ;
struct eeepc_laptop {TYPE_1__ hotplug_slot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pci_bus* FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,struct pci_bus*,int ,char*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct eeepc_laptop *VAR_3)
{
 int VAR_4 = -VAR_1;
 struct pci_bus *VAR_5 = FUNC_0(0, 1);

 if (!VAR_5) {
  FUNC_2("Unable to find wifi PCI bus\n");
  return -VAR_0;
 }

 VAR_3->hotplug_slot.ops = &VAR_2;

 VAR_4 = FUNC_1(&VAR_3->hotplug_slot, VAR_5, 0, "eeepc-wifi");
 if (VAR_4) {
  FUNC_2("Unable to register hotplug slot - %d\n", VAR_4);
  goto error_register;
 }

 return 0;

error_register:
 VAR_3->hotplug_slot.ops = ((void*)0);
 return VAR_4;
}
