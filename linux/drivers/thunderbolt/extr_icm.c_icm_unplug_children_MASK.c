
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int max_port_number; } ;
struct tb_switch {int is_unplugged; struct tb_port* ports; TYPE_2__ config; } ;
struct tb_port {TYPE_1__* remote; TYPE_3__* xdomain; } ;
struct TYPE_6__ {int is_unplugged; } ;
struct TYPE_4__ {struct tb_switch* sw; } ;


 scalar_t__ FUNC_0 (struct tb_port*) ;
 scalar_t__ FUNC_1 (struct tb_switch*) ;

__attribute__((used)) static void FUNC_2(struct tb_switch *VAR_0)
{
 unsigned int VAR_1;

 if (FUNC_1(VAR_0))
  VAR_0->is_unplugged = 1;

 for (VAR_1 = 1; VAR_1 <= VAR_0->config.max_port_number; VAR_1++) {
  struct tb_port *VAR_2 = &VAR_0->ports[VAR_1];

  if (VAR_2->xdomain)
   VAR_2->xdomain->is_unplugged = 1;
  else if (FUNC_0(VAR_2))
   FUNC_2(VAR_2->remote->sw);
 }
}
