
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int max_port_number; } ;
struct tb_switch {scalar_t__ is_unplugged; struct tb_port* ports; TYPE_3__ config; } ;
struct tb_port {TYPE_2__* remote; TYPE_1__* dual_link_port; } ;
struct TYPE_5__ {struct tb_switch* sw; } ;
struct TYPE_4__ {int * remote; } ;


 int FUNC_0 (struct tb_port*) ;
 int FUNC_1 (struct tb_switch*) ;

__attribute__((used)) static void FUNC_2(struct tb_switch *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 1; VAR_1 <= VAR_0->config.max_port_number; VAR_1++) {
  struct tb_port *VAR_2 = &VAR_0->ports[VAR_1];

  if (!FUNC_0(VAR_2))
   continue;

  if (VAR_2->remote->sw->is_unplugged) {
   FUNC_1(VAR_2->remote->sw);
   VAR_2->remote = ((void*)0);
   if (VAR_2->dual_link_port)
    VAR_2->dual_link_port->remote = ((void*)0);
  } else {
   FUNC_2(VAR_2->remote->sw);
  }
 }
}
