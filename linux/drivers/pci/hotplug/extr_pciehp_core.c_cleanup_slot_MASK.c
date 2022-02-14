
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hotplug_slot {int ops; } ;
struct controller {struct hotplug_slot hotplug_slot; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hotplug_slot*) ;

__attribute__((used)) static void FUNC_2(struct controller *VAR_0)
{
 struct hotplug_slot *VAR_1 = &VAR_0->hotplug_slot;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1->ops);
}
