
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_slot {struct hotplug_slot* hotplug; } ;
struct hotplug_slot {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ get_latch_status; } ;



__attribute__((used)) static bool FUNC_0(struct pci_slot *VAR_0)
{
 struct hotplug_slot *VAR_1 = VAR_0->hotplug;

 if ((!VAR_1) || (!VAR_1->ops))
  return 0;
 if (VAR_1->ops->get_latch_status)
  return 1;
 return 0;
}
