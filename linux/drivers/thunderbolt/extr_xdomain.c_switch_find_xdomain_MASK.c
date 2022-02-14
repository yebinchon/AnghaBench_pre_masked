
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tb_xdomain_lookup {scalar_t__ link; scalar_t__ depth; scalar_t__ route; int uuid; } ;
struct tb_xdomain {scalar_t__ link; scalar_t__ depth; scalar_t__ route; scalar_t__ remote_uuid; } ;
struct TYPE_3__ {int max_port_number; } ;
struct tb_switch {struct tb_port* ports; TYPE_1__ config; } ;
struct tb_port {TYPE_2__* remote; struct tb_xdomain* xdomain; } ;
struct TYPE_4__ {struct tb_switch* sw; } ;


 scalar_t__ FUNC_0 (struct tb_port*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static struct tb_xdomain *FUNC_2(struct tb_switch *VAR_0,
 const struct tb_xdomain_lookup *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 <= VAR_0->config.max_port_number; VAR_2++) {
  struct tb_port *VAR_3 = &VAR_0->ports[VAR_2];
  struct tb_xdomain *VAR_4;

  if (VAR_3->xdomain) {
   VAR_4 = VAR_3->xdomain;

   if (VAR_1->uuid) {
    if (VAR_4->remote_uuid &&
        FUNC_1(VAR_4->remote_uuid, VAR_1->uuid))
     return VAR_4;
   } else if (VAR_1->link &&
       VAR_1->link == VAR_4->link &&
       VAR_1->depth == VAR_4->depth) {
    return VAR_4;
   } else if (VAR_1->route &&
       VAR_1->route == VAR_4->route) {
    return VAR_4;
   }
  } else if (FUNC_0(VAR_3)) {
   VAR_4 = FUNC_2(VAR_3->remote->sw, VAR_1);
   if (VAR_4)
    return VAR_4;
  }
 }

 return ((void*)0);
}
