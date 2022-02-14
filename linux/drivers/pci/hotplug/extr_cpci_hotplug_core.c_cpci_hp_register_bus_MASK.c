
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * ops; } ;
struct slot {int number; int slot_list; TYPE_1__ hotplug_slot; int devfn; struct pci_bus* bus; } ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct slot*) ;
 struct slot* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_1__*,struct pci_bus*,int,char*) ;
 int VAR_7 ;
 char* FUNC_8 (struct slot*) ;
 int VAR_8 ;
 int FUNC_9 (char*,int,char*,int,int) ;
 int FUNC_10 (int *) ;

int
FUNC_11(struct pci_bus *VAR_9, u8 VAR_10, u8 VAR_11)
{
 struct slot *VAR_12;
 char VAR_13[VAR_3];
 int VAR_14;
 int VAR_15;

 if (!(VAR_4 && VAR_9))
  return -VAR_0;





 for (VAR_15 = VAR_10; VAR_15 <= VAR_11; ++VAR_15) {
  VAR_12 = FUNC_5(sizeof(struct slot), VAR_2);
  if (!VAR_12) {
   VAR_14 = -VAR_1;
   goto error;
  }

  VAR_12->bus = VAR_9;
  VAR_12->number = VAR_15;
  VAR_12->devfn = FUNC_0(VAR_15, 0);

  FUNC_9(VAR_13, VAR_3, "%02x:%02x", VAR_9->number, VAR_15);

  VAR_12->hotplug_slot.ops = &VAR_5;

  FUNC_1("registering slot %s", VAR_13);
  VAR_14 = FUNC_7(&VAR_12->hotplug_slot, VAR_9, VAR_15, VAR_13);
  if (VAR_14) {
   FUNC_3("pci_hp_register failed with error %d", VAR_14);
   goto error_slot;
  }
  FUNC_1("slot registered with name: %s", FUNC_8(VAR_12));


  FUNC_2(&VAR_6);
  FUNC_6(&VAR_12->slot_list, &VAR_7);
  VAR_8++;
  FUNC_10(&VAR_6);
 }
 return 0;
error_slot:
 FUNC_4(VAR_12);
error:
 return VAR_14;
}
