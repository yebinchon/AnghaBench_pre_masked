
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {struct pci_bus* subordinate; } ;
struct pci_bus {int dummy; } ;
struct TYPE_2__ {int ops; } ;
struct eeepc_laptop {int hotplug_lock; TYPE_1__ hotplug_slot; scalar_t__ wlan_rfkill; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 struct pci_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct eeepc_laptop*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_bus*) ;
 scalar_t__ FUNC_6 (struct pci_bus*,int ,int ,int*) ;
 int FUNC_7 (struct pci_dev*) ;
 struct pci_dev* FUNC_8 (struct pci_bus*,int ) ;
 int FUNC_9 () ;
 struct pci_dev* FUNC_10 (struct pci_bus*,int ) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_17(struct eeepc_laptop *VAR_1, acpi_handle VAR_2)
{
 struct pci_dev *VAR_3;
 struct pci_dev *VAR_4;
 struct pci_bus *VAR_5;
 bool VAR_6 = FUNC_1(VAR_1);
 bool VAR_7;
 u32 VAR_8;

 if (VAR_1->wlan_rfkill)
  FUNC_16(VAR_1->wlan_rfkill, VAR_6);

 FUNC_2(&VAR_1->hotplug_lock);
 FUNC_9();

 if (!VAR_1->hotplug_slot.ops)
  goto out_unlock;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3) {
  FUNC_15("Unable to find port\n");
  goto out_unlock;
 }

 VAR_5 = VAR_3->subordinate;

 if (!VAR_5) {
  FUNC_14("Unable to find PCI bus 1?\n");
  goto out_put_dev;
 }

 if (FUNC_6(VAR_5, 0, VAR_0, &VAR_8)) {
  FUNC_13("Unable to read PCI config space?\n");
  goto out_put_dev;
 }

 VAR_7 = (VAR_8 == 0xffffffff);

 if (VAR_6 != VAR_7) {
  FUNC_14("BIOS says wireless lan is %s, but the pci device is %s\n",
   VAR_6 ? "blocked" : "unblocked",
   VAR_7 ? "absent" : "present");
  FUNC_14("skipped wireless hotplug as probably inappropriate for this model\n");
  goto out_put_dev;
 }

 if (!VAR_6) {
  VAR_4 = FUNC_8(VAR_5, 0);
  if (VAR_4) {

   FUNC_7(VAR_4);
   goto out_put_dev;
  }
  VAR_4 = FUNC_10(VAR_5, 0);
  if (VAR_4) {
   FUNC_5(VAR_5);
   FUNC_4(VAR_4);
  }
 } else {
  VAR_4 = FUNC_8(VAR_5, 0);
  if (VAR_4) {
   FUNC_11(VAR_4);
   FUNC_7(VAR_4);
  }
 }
out_put_dev:
 FUNC_7(VAR_3);

out_unlock:
 FUNC_12();
 FUNC_3(&VAR_1->hotplug_lock);
}
