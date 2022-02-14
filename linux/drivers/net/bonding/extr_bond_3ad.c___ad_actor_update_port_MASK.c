
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port {int actor_system_priority; int actor_system; int slave; } ;
struct bonding {int dummy; } ;
struct TYPE_3__ {int sys_priority; int sys_mac_addr; } ;
struct TYPE_4__ {TYPE_1__ system; } ;


 TYPE_2__ FUNC_0 (struct bonding const*) ;
 struct bonding* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct port *VAR_0)
{
 const struct bonding *VAR_1 = FUNC_1(VAR_0->slave);

 VAR_0->actor_system = FUNC_0(VAR_1).system.sys_mac_addr;
 VAR_0->actor_system_priority = FUNC_0(VAR_1).system.sys_priority;
}
