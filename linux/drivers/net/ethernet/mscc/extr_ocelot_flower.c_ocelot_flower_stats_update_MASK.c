
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocelot_port_block {int port; } ;
struct TYPE_3__ {int pkts; } ;
struct ocelot_ace_rule {TYPE_1__ stats; int id; int port; int prio; } ;
struct TYPE_4__ {int prio; } ;
struct flow_cls_offload {int stats; int cookie; TYPE_2__ common; } ;


 int FUNC_0 (int *,int,int ,int) ;
 int FUNC_1 (struct ocelot_ace_rule*) ;

__attribute__((used)) static int FUNC_2(struct flow_cls_offload *VAR_0,
          struct ocelot_port_block *VAR_1)
{
 struct ocelot_ace_rule VAR_2;
 int VAR_3;

 VAR_2.prio = VAR_0->common.prio;
 VAR_2.port = VAR_1->port;
 VAR_2.id = VAR_0->cookie;
 VAR_3 = FUNC_1(&VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_0(&VAR_0->stats, 0x0, VAR_2.stats.pkts, 0x0);
 return 0;
}
