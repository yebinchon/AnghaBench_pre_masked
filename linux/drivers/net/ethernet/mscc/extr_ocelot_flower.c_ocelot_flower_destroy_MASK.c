
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocelot_port_block {TYPE_3__* port; } ;
struct ocelot_ace_rule {int id; TYPE_3__* port; int prio; } ;
struct TYPE_4__ {int prio; } ;
struct flow_cls_offload {int cookie; TYPE_1__ common; } ;
struct TYPE_5__ {int offload_cnt; } ;
struct TYPE_6__ {TYPE_2__ tc; } ;


 int FUNC_0 (struct ocelot_ace_rule*) ;

__attribute__((used)) static int FUNC_1(struct flow_cls_offload *VAR_0,
     struct ocelot_port_block *VAR_1)
{
 struct ocelot_ace_rule VAR_2;
 int VAR_3;

 VAR_2.prio = VAR_0->common.prio;
 VAR_2.port = VAR_1->port;
 VAR_2.id = VAR_0->cookie;

 VAR_3 = FUNC_0(&VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_1->port->tc.offload_cnt--;
 return 0;
}
