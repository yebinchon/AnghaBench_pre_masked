
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_slot {struct hotplug_slot* hotplug; } ;
struct pci_bus {int dummy; } ;
struct module {int dummy; } ;
struct hotplug_slot {char const* mod_name; struct pci_slot* pci_slot; struct module* owner; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_slot*) ;
 int FUNC_1 (struct pci_slot*) ;
 struct pci_slot* FUNC_2 (struct pci_bus*,int,char const*,struct hotplug_slot*) ;

int FUNC_3(struct hotplug_slot *VAR_2, struct pci_bus *VAR_3,
   int VAR_4, const char *VAR_5, struct module *VAR_6,
   const char *VAR_7)
{
 struct pci_slot *VAR_8;

 if (VAR_2 == ((void*)0))
  return -VAR_1;
 if (VAR_2->ops == ((void*)0))
  return -VAR_0;

 VAR_2->owner = VAR_6;
 VAR_2->mod_name = VAR_7;






 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_2);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_2->pci_slot = VAR_8;
 VAR_8->hotplug = VAR_2;
 return 0;
}
