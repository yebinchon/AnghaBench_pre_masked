
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tb_tunnel {int list; TYPE_3__* src_port; TYPE_2__* dst_port; } ;
struct TYPE_9__ {int max_port_number; } ;
struct tb_switch {int boot; struct tb_port* ports; TYPE_4__ config; struct tb* tb; } ;
struct TYPE_6__ {int type; } ;
struct tb_port {TYPE_5__* remote; TYPE_1__ config; } ;
struct tb_cm {int tunnel_list; } ;
struct tb {int dummy; } ;
struct TYPE_10__ {struct tb_switch* sw; } ;
struct TYPE_8__ {struct tb_switch* sw; } ;
struct TYPE_7__ {struct tb_switch* sw; } ;




 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct tb_port*) ;
 struct tb_cm* FUNC_2 (struct tb*) ;
 struct tb_switch* FUNC_3 (struct tb_switch*) ;
 struct tb_tunnel* FUNC_4 (struct tb*,struct tb_port*) ;
 struct tb_tunnel* FUNC_5 (struct tb*,struct tb_port*) ;
 scalar_t__ FUNC_6 (struct tb_tunnel*) ;

__attribute__((used)) static void FUNC_7(struct tb_switch *VAR_0)
{
 struct tb *VAR_1 = VAR_0->tb;
 struct tb_cm *VAR_2 = FUNC_2(VAR_1);
 struct tb_port *VAR_3;
 int VAR_4;

 for (VAR_4 = 1; VAR_4 <= VAR_0->config.max_port_number; VAR_4++) {
  struct tb_tunnel *VAR_5 = ((void*)0);

  VAR_3 = &VAR_0->ports[VAR_4];
  switch (VAR_3->config.type) {
  case 129:
   VAR_5 = FUNC_4(VAR_1, VAR_3);
   break;

  case 128:
   VAR_5 = FUNC_5(VAR_1, VAR_3);
   break;

  default:
   break;
  }

  if (!VAR_5)
   continue;

  if (FUNC_6(VAR_5)) {
   struct tb_switch *VAR_6 = VAR_5->dst_port->sw;

   while (VAR_6 != VAR_5->src_port->sw) {
    VAR_6->boot = 1;
    VAR_6 = FUNC_3(VAR_6);
   }
  }

  FUNC_0(&VAR_5->list, &VAR_2->tunnel_list);
 }

 for (VAR_4 = 1; VAR_4 <= VAR_0->config.max_port_number; VAR_4++) {
  if (FUNC_1(&VAR_0->ports[VAR_4]))
   FUNC_7(VAR_0->ports[VAR_4].remote->sw);
 }
}
