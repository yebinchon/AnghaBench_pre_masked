
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_cm {int hotplug_active; } ;
struct tb {int root_switch; } ;


 int FUNC_0 (struct tb*,char*) ;
 struct tb_cm* FUNC_1 (struct tb*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct tb *VAR_0)
{
 struct tb_cm *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0, "suspending...\n");
 FUNC_2(VAR_0->root_switch);
 VAR_1->hotplug_active = 0;
 FUNC_0(VAR_0, "suspend finished\n");

 return 0;
}
