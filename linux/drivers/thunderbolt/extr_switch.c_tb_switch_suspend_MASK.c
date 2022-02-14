
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_port_number; } ;
struct tb_switch {TYPE_3__* ports; TYPE_1__ config; } ;
struct TYPE_6__ {TYPE_2__* remote; } ;
struct TYPE_5__ {struct tb_switch* sw; } ;


 int FUNC_0 (struct tb_switch*) ;
 int FUNC_1 (struct tb_switch*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;

void FUNC_3(struct tb_switch *VAR_0)
{
 int VAR_1, VAR_2;
 VAR_2 = FUNC_1(VAR_0, 0);
 if (VAR_2)
  return;

 for (VAR_1 = 1; VAR_1 <= VAR_0->config.max_port_number; VAR_1++) {
  if (FUNC_2(&VAR_0->ports[VAR_1]))
   FUNC_3(VAR_0->ports[VAR_1].remote->sw);
 }

 FUNC_0(VAR_0);
}
