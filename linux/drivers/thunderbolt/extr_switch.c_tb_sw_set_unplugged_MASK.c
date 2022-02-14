
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int max_port_number; } ;
struct tb_switch {int is_unplugged; TYPE_5__* ports; TYPE_1__ config; TYPE_4__* tb; } ;
struct TYPE_10__ {TYPE_3__* xdomain; TYPE_2__* remote; } ;
struct TYPE_9__ {struct tb_switch* root_switch; } ;
struct TYPE_8__ {int is_unplugged; } ;
struct TYPE_7__ {struct tb_switch* sw; } ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct tb_switch*,char*) ;

void FUNC_2(struct tb_switch *VAR_0)
{
 int VAR_1;
 if (VAR_0 == VAR_0->tb->root_switch) {
  FUNC_1(VAR_0, "cannot unplug root switch\n");
  return;
 }
 if (VAR_0->is_unplugged) {
  FUNC_1(VAR_0, "is_unplugged already set\n");
  return;
 }
 VAR_0->is_unplugged = 1;
 for (VAR_1 = 0; VAR_1 <= VAR_0->config.max_port_number; VAR_1++) {
  if (FUNC_0(&VAR_0->ports[VAR_1]))
   FUNC_2(VAR_0->ports[VAR_1].remote->sw);
  else if (VAR_0->ports[VAR_1].xdomain)
   VAR_0->ports[VAR_1].xdomain->is_unplugged = 1;
 }
}
