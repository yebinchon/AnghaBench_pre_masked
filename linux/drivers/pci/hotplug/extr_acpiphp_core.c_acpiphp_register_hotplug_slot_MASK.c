
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ops; } ;
struct slot {unsigned int sun; TYPE_1__ hotplug_slot; struct acpiphp_slot* acpi_slot; } ;
struct acpiphp_slot {int device; int bus; struct slot* slot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct slot*) ;
 struct slot* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct slot*) ;
 int FUNC_6 (char*,int,char*,unsigned int) ;

int FUNC_7(struct acpiphp_slot *VAR_5,
      unsigned int VAR_6)
{
 struct slot *VAR_7;
 int VAR_8 = -VAR_1;
 char VAR_9[VAR_3];

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  goto error;

 VAR_7->hotplug_slot.ops = &VAR_4;

 VAR_7->acpi_slot = VAR_5;

 VAR_5->slot = VAR_7;
 VAR_7->sun = VAR_6;
 FUNC_6(VAR_9, VAR_3, "%u", VAR_6);

 VAR_8 = FUNC_2(&VAR_7->hotplug_slot, VAR_5->bus,
     VAR_5->device, VAR_9);
 if (VAR_8 == -VAR_0)
  goto error_slot;
 if (VAR_8) {
  FUNC_3("pci_hp_register failed with error %d\n", VAR_8);
  goto error_slot;
 }

 FUNC_4("Slot [%s] registered\n", FUNC_5(VAR_7));

 return 0;
error_slot:
 FUNC_0(VAR_7);
error:
 return VAR_8;
}
