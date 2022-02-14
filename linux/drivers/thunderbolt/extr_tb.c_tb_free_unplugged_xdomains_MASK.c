
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int max_port_number; } ;
struct tb_switch {struct tb_port* ports; TYPE_2__ config; } ;
struct tb_port {TYPE_1__* remote; TYPE_3__* xdomain; } ;
struct TYPE_6__ {scalar_t__ is_unplugged; } ;
struct TYPE_4__ {struct tb_switch* sw; } ;


 scalar_t__ FUNC_0 (struct tb_port*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(struct tb_switch *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 1; VAR_1 <= VAR_0->config.max_port_number; VAR_1++) {
  struct tb_port *VAR_3 = &VAR_0->ports[VAR_1];

  if (FUNC_0(VAR_3))
   continue;
  if (VAR_3->xdomain && VAR_3->xdomain->is_unplugged) {
   FUNC_1(VAR_3->xdomain);
   VAR_3->xdomain = ((void*)0);
   VAR_2++;
  } else if (VAR_3->remote) {
   VAR_2 += FUNC_2(VAR_3->remote->sw);
  }
 }

 return VAR_2;
}
