
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int dummy; } ;
struct module {int dummy; } ;
struct hotplug_slot {int dummy; } ;


 int FUNC_0 (struct hotplug_slot*,struct pci_bus*,int,char const*,struct module*,char const*) ;
 int FUNC_1 (struct hotplug_slot*) ;
 int FUNC_2 (struct hotplug_slot*) ;

int FUNC_3(struct hotplug_slot *VAR_0, struct pci_bus *VAR_1,
        int VAR_2, const char *VAR_3,
        struct module *VAR_4, const char *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_0);
 if (VAR_6)
  FUNC_2(VAR_0);

 return VAR_6;
}
