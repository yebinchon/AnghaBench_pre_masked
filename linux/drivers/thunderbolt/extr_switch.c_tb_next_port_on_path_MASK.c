
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tb_port {scalar_t__ link_nr; struct tb_port* dual_link_port; TYPE_2__* sw; struct tb_port* remote; } ;
struct TYPE_5__ {scalar_t__ depth; } ;
struct TYPE_6__ {TYPE_1__ config; } ;


 scalar_t__ FUNC_0 (struct tb_port*) ;
 struct tb_port* FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 struct tb_port* FUNC_3 (TYPE_2__*) ;

struct tb_port *FUNC_4(struct tb_port *VAR_0, struct tb_port *VAR_1,
         struct tb_port *VAR_2)
{
 struct tb_port *VAR_3;

 if (!VAR_2)
  return VAR_0;

 if (VAR_2->sw == VAR_1->sw) {
  if (VAR_2 == VAR_1)
   return ((void*)0);
  return VAR_1;
 }

 if (VAR_0->sw->config.depth < VAR_1->sw->config.depth) {
  if (VAR_2->remote &&
      VAR_2->remote->sw->config.depth > VAR_2->sw->config.depth)
   VAR_3 = VAR_2->remote;
  else
   VAR_3 = FUNC_1(FUNC_2(VAR_1->sw), VAR_2->sw);
 } else {
  if (FUNC_0(VAR_2)) {
   VAR_3 = VAR_2->remote;
  } else {
   VAR_3 = FUNC_3(VAR_2->sw);




   if (VAR_3->dual_link_port &&
       VAR_3->link_nr != VAR_2->link_nr) {
    VAR_3 = VAR_3->dual_link_port;
   }
  }
 }

 return VAR_3;
}
