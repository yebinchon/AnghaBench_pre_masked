
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tb_switch {int dev; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct tb_port {TYPE_2__* dual_link_port; struct tb_port* remote; int * xdomain; TYPE_3__* sw; scalar_t__ link_nr; TYPE_1__ config; int port; } ;
struct tb_cm {int hotplug_active; } ;
struct TYPE_6__ {int dev; int tb; } ;
struct TYPE_5__ {struct TYPE_5__* remote; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tb_switch*) ;
 int FUNC_1 (struct tb_switch*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct tb_port*) ;
 int FUNC_4 (struct tb_port*) ;
 int FUNC_5 (struct tb_port*) ;
 scalar_t__ FUNC_6 (struct tb_port*) ;
 int FUNC_7 (struct tb_port*,char*) ;
 scalar_t__ FUNC_8 (struct tb_port*) ;
 struct tb_cm* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct tb_switch*) ;
 int FUNC_13 (struct tb_port*) ;
 scalar_t__ FUNC_14 (struct tb_switch*) ;
 struct tb_switch* FUNC_15 (int ,int *,int ) ;
 scalar_t__ FUNC_16 (struct tb_switch*) ;
 int FUNC_17 (struct tb_switch*) ;
 struct tb_port* FUNC_18 (struct tb_switch*) ;
 scalar_t__ FUNC_19 (struct tb_port*,int) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static void FUNC_21(struct tb_port *VAR_3)
{
 struct tb_cm *VAR_4 = FUNC_9(VAR_3->sw->tb);
 struct tb_port *VAR_5;
 struct tb_switch *VAR_6;

 if (FUNC_6(VAR_3))
  return;

 if (FUNC_8(VAR_3) && FUNC_4(VAR_3) == 1 &&
     !FUNC_5(VAR_3)) {
  FUNC_7(VAR_3, "DP adapter HPD set, queuing hotplug\n");
  FUNC_10(VAR_3->sw->tb, FUNC_11(VAR_3->sw), VAR_3->port,
     0);
  return;
 }

 if (VAR_3->config.type != VAR_2)
  return;
 if (VAR_3->dual_link_port && VAR_3->link_nr)
  return;



 if (FUNC_19(VAR_3, 0) <= 0)
  return;
 if (VAR_3->remote) {
  FUNC_7(VAR_3, "port already has a remote\n");
  return;
 }
 VAR_6 = FUNC_15(VAR_3->sw->tb, &VAR_3->sw->dev,
        FUNC_3(VAR_3));
 if (FUNC_0(VAR_6)) {





  if (FUNC_1(VAR_6) == -VAR_1 || FUNC_1(VAR_6) == -VAR_0)
   FUNC_13(VAR_3);
  return;
 }

 if (FUNC_16(VAR_6)) {
  FUNC_17(VAR_6);
  return;
 }





 if (VAR_3->xdomain) {
  FUNC_20(VAR_3->xdomain);
  VAR_3->xdomain = ((void*)0);
 }






 if (!VAR_4->hotplug_active)
  FUNC_2(&VAR_6->dev, 1);

 if (FUNC_14(VAR_6)) {
  FUNC_17(VAR_6);
  return;
 }


 VAR_5 = FUNC_18(VAR_6);
 VAR_3->remote = VAR_5;
 VAR_5->remote = VAR_3;
 if (VAR_3->dual_link_port && VAR_5->dual_link_port) {
  VAR_3->dual_link_port->remote = VAR_5->dual_link_port;
  VAR_5->dual_link_port->remote = VAR_3->dual_link_port;
 }

 FUNC_12(VAR_6);
}
