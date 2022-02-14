
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_slot {int kobj; } ;
struct hotplug_slot {int slot_list; struct pci_slot* pci_slot; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct pci_slot*) ;
 int FUNC_2 (struct hotplug_slot*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_7(struct hotplug_slot *VAR_3)
{
 struct pci_slot *VAR_4 = VAR_3->pci_slot;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_3(&VAR_4->kobj, VAR_0);
 FUNC_5(&VAR_2);
 FUNC_4(&VAR_3->slot_list, &VAR_1);
 FUNC_6(&VAR_2);
 FUNC_0("Added slot %s to the list\n", FUNC_2(VAR_3));
 return 0;
}
