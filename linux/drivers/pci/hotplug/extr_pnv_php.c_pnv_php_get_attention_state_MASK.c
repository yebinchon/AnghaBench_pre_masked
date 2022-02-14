
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pnv_php_slot {int attention_state; } ;
struct hotplug_slot {int dummy; } ;


 struct pnv_php_slot* FUNC_0 (struct hotplug_slot*) ;

__attribute__((used)) static int FUNC_1(struct hotplug_slot *VAR_0, u8 *VAR_1)
{
 struct pnv_php_slot *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->attention_state;
 return 0;
}
