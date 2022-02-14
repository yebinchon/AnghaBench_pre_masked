
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct pci_bus {int dummy; } ;
struct TYPE_4__ {scalar_t__ ops; } ;
struct TYPE_3__ {scalar_t__ rfkill; } ;
struct asus_wmi {int hotplug_lock; TYPE_2__ hotplug_slot; TYPE_1__ wlan; int wmi_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct asus_wmi*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_bus*) ;
 scalar_t__ FUNC_5 (struct pci_bus*,int ,int ,int*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct pci_bus* FUNC_7 (int ,int) ;
 struct pci_dev* FUNC_8 (struct pci_bus*,int ) ;
 int FUNC_9 () ;
 struct pci_dev* FUNC_10 (struct pci_bus*,int ) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_16(struct asus_wmi *VAR_1)
{
 struct pci_dev *VAR_2;
 struct pci_bus *VAR_3;
 bool VAR_4;
 bool VAR_5;
 u32 VAR_6;

 FUNC_1(&VAR_1->wmi_lock);
 VAR_4 = FUNC_0(VAR_1);
 FUNC_2(&VAR_1->wmi_lock);

 FUNC_1(&VAR_1->hotplug_lock);
 FUNC_9();

 if (VAR_1->wlan.rfkill)
  FUNC_15(VAR_1->wlan.rfkill, VAR_4);

 if (VAR_1->hotplug_slot.ops) {
  VAR_3 = FUNC_7(0, 1);
  if (!VAR_3) {
   FUNC_14("Unable to find PCI bus 1?\n");
   goto out_unlock;
  }

  if (FUNC_5(VAR_3, 0, VAR_0, &VAR_6)) {
   FUNC_13("Unable to read PCI config space?\n");
   goto out_unlock;
  }
  VAR_5 = (VAR_6 == 0xffffffff);

  if (VAR_4 != VAR_5) {
   FUNC_14("BIOS says wireless lan is %s, "
    "but the pci device is %s\n",
    VAR_4 ? "blocked" : "unblocked",
    VAR_5 ? "absent" : "present");
   FUNC_14("skipped wireless hotplug as probably "
    "inappropriate for this model\n");
   goto out_unlock;
  }

  if (!VAR_4) {
   VAR_2 = FUNC_8(VAR_3, 0);
   if (VAR_2) {

    FUNC_6(VAR_2);
    goto out_unlock;
   }
   VAR_2 = FUNC_10(VAR_3, 0);
   if (VAR_2) {
    FUNC_4(VAR_3);
    FUNC_3(VAR_2);
   }
  } else {
   VAR_2 = FUNC_8(VAR_3, 0);
   if (VAR_2) {
    FUNC_11(VAR_2);
    FUNC_6(VAR_2);
   }
  }
 }

out_unlock:
 FUNC_12();
 FUNC_2(&VAR_1->hotplug_lock);
}
