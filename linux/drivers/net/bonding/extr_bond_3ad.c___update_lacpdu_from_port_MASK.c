
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port_params {int port_state; int port_number; int port_priority; int key; int system; int system_priority; } ;
struct lacpdu {int partner_state; void* partner_port; void* partner_port_priority; void* partner_key; int partner_system; void* partner_system_priority; int actor_state; void* actor_port; void* actor_port_priority; void* actor_key; int actor_system; void* actor_system_priority; } ;
struct port {int actor_oper_port_state; TYPE_2__* slave; int actor_port_number; int actor_port_priority; int actor_oper_port_key; int actor_system; int actor_system_priority; struct port_params partner_oper; struct lacpdu lacpdu; } ;
struct TYPE_4__ {int dev; TYPE_1__* bond; } ;
struct TYPE_3__ {int dev; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct port *VAR_0)
{
 struct lacpdu *VAR_1 = &VAR_0->lacpdu;
 const struct port_params *VAR_2 = &VAR_0->partner_oper;
 VAR_1->actor_system_priority = FUNC_0(VAR_0->actor_system_priority);
 VAR_1->actor_system = VAR_0->actor_system;
 VAR_1->actor_key = FUNC_0(VAR_0->actor_oper_port_key);
 VAR_1->actor_port_priority = FUNC_0(VAR_0->actor_port_priority);
 VAR_1->actor_port = FUNC_0(VAR_0->actor_port_number);
 VAR_1->actor_state = VAR_0->actor_oper_port_state;
 FUNC_1(VAR_0->slave->bond->dev, VAR_0->slave->dev,
    "update lacpdu: actor port state %x\n",
    VAR_0->actor_oper_port_state);






 VAR_1->partner_system_priority = FUNC_0(VAR_2->system_priority);
 VAR_1->partner_system = VAR_2->system;
 VAR_1->partner_key = FUNC_0(VAR_2->key);
 VAR_1->partner_port_priority = FUNC_0(VAR_2->port_priority);
 VAR_1->partner_port = FUNC_0(VAR_2->port_number);
 VAR_1->partner_state = VAR_2->port_state;
}
