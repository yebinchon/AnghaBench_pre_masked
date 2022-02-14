
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct slot {int latch_status; } ;
struct hotplug_slot {int dummy; } ;


 struct slot* FUNC_0 (struct hotplug_slot*) ;

__attribute__((used)) static int
FUNC_1(struct hotplug_slot *VAR_0, u8 *VAR_1)
{
 struct slot *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->latch_status;
 return 0;
}
