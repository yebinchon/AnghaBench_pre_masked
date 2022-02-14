
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot {int hotplug_slot; } ;
struct acpiphp_slot {struct slot* slot; } ;


 int FUNC_0 (struct slot*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct slot*) ;

void FUNC_4(struct acpiphp_slot *VAR_0)
{
 struct slot *VAR_1 = VAR_0->slot;

 FUNC_2("Slot [%s] unregistered\n", FUNC_3(VAR_1));

 FUNC_1(&VAR_1->hotplug_slot);
 FUNC_0(VAR_1);
}
