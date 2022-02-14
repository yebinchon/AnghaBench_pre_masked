
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mac_addr_value; } ;
struct aggregator {int is_individual; int aggregator_identifier; TYPE_3__* slave; scalar_t__ num_of_ports; scalar_t__ is_active; int * lag_ports; scalar_t__ transmit_state; scalar_t__ receive_state; scalar_t__ partner_oper_aggregator_key; scalar_t__ partner_system_priority; TYPE_1__ partner_system; scalar_t__ actor_oper_aggregator_key; scalar_t__ actor_admin_aggregator_key; } ;
struct TYPE_6__ {TYPE_2__* dev; } ;
struct TYPE_5__ {char* name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct aggregator *VAR_0)
{
 if (VAR_0) {
  VAR_0->is_individual = 0;
  VAR_0->actor_admin_aggregator_key = 0;
  VAR_0->actor_oper_aggregator_key = 0;
  FUNC_0(VAR_0->partner_system.mac_addr_value);
  VAR_0->partner_system_priority = 0;
  VAR_0->partner_oper_aggregator_key = 0;
  VAR_0->receive_state = 0;
  VAR_0->transmit_state = 0;
  VAR_0->lag_ports = ((void*)0);
  VAR_0->is_active = 0;
  VAR_0->num_of_ports = 0;
  FUNC_1("%s: LAG %d was cleared\n",
    VAR_0->slave ?
    VAR_0->slave->dev->name : "NULL",
    VAR_0->aggregator_identifier);
 }
}
