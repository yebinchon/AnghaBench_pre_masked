
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tb_path {int activated; int path_length; TYPE_3__* hops; int name; int tb; } ;
struct TYPE_6__ {TYPE_2__* out_port; TYPE_1__* in_port; } ;
struct TYPE_5__ {int port; int sw; } ;
struct TYPE_4__ {int port; int sw; } ;


 int FUNC_0 (struct tb_path*,int ) ;
 int FUNC_1 (struct tb_path*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct tb_path *VAR_0)
{
 if (!VAR_0->activated) {
  FUNC_2(VAR_0->tb, "trying to deactivate an inactive path\n");
  return;
 }
 FUNC_3(VAR_0->tb,
        "deactivating %s path from %llx:%x to %llx:%x\n",
        VAR_0->name, FUNC_4(VAR_0->hops[0].in_port->sw),
        VAR_0->hops[0].in_port->port,
        FUNC_4(VAR_0->hops[VAR_0->path_length - 1].out_port->sw),
        VAR_0->hops[VAR_0->path_length - 1].out_port->port);
 FUNC_0(VAR_0, 0);
 FUNC_1(VAR_0, 0);
 VAR_0->activated = 0;
}
