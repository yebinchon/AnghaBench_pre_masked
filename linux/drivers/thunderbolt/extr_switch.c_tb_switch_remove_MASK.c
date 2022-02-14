
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_port_number; } ;
struct tb_switch {int dev; int is_unplugged; TYPE_3__* ports; TYPE_1__ config; scalar_t__ rpm; } ;
struct TYPE_6__ {int * xdomain; TYPE_2__* remote; } ;
struct TYPE_5__ {struct tb_switch* sw; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tb_switch*) ;
 int FUNC_5 (struct tb_switch*,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (struct tb_switch*) ;
 int FUNC_8 (struct tb_switch*) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct tb_switch *VAR_0)
{
 int VAR_1;

 if (VAR_0->rpm) {
  FUNC_3(&VAR_0->dev);
  FUNC_2(&VAR_0->dev);
 }


 for (VAR_1 = 1; VAR_1 <= VAR_0->config.max_port_number; VAR_1++) {
  if (FUNC_6(&VAR_0->ports[VAR_1])) {
   FUNC_10(VAR_0->ports[VAR_1].remote->sw);
   VAR_0->ports[VAR_1].remote = ((void*)0);
  } else if (VAR_0->ports[VAR_1].xdomain) {
   FUNC_9(VAR_0->ports[VAR_1].xdomain);
   VAR_0->ports[VAR_1].xdomain = ((void*)0);
  }
 }

 if (!VAR_0->is_unplugged)
  FUNC_5(VAR_0, 0);
 FUNC_4(VAR_0);

 FUNC_8(VAR_0);

 if (FUNC_7(VAR_0))
  FUNC_0(&VAR_0->dev, "device disconnected\n");
 FUNC_1(&VAR_0->dev);
}
