
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hotplug_slot {int pci_slot; int slot_list; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 struct hotplug_slot* FUNC_3 (int ) ;
 int FUNC_4 (struct hotplug_slot*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;

void FUNC_8(struct hotplug_slot *VAR_1)
{
 struct hotplug_slot *VAR_2;

 if (FUNC_0(!VAR_1))
  return;

 FUNC_6(&VAR_0);
 VAR_2 = FUNC_3(FUNC_4(VAR_1));
 if (FUNC_0(VAR_2 != VAR_1)) {
  FUNC_7(&VAR_0);
  return;
 }

 FUNC_5(&VAR_1->slot_list);
 FUNC_7(&VAR_0);
 FUNC_1("Removed slot %s from the list\n", FUNC_4(VAR_1));
 FUNC_2(VAR_1->pci_slot);
}
