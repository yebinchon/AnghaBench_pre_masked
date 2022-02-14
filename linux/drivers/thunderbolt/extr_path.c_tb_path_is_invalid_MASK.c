
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tb_path {int path_length; TYPE_5__* hops; } ;
struct TYPE_10__ {TYPE_4__* out_port; TYPE_2__* in_port; } ;
struct TYPE_9__ {TYPE_3__* sw; } ;
struct TYPE_8__ {scalar_t__ is_unplugged; } ;
struct TYPE_7__ {TYPE_1__* sw; } ;
struct TYPE_6__ {scalar_t__ is_unplugged; } ;



bool FUNC_0(struct tb_path *VAR_0)
{
 int VAR_1 = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->path_length; VAR_1++) {
  if (VAR_0->hops[VAR_1].in_port->sw->is_unplugged)
   return 1;
  if (VAR_0->hops[VAR_1].out_port->sw->is_unplugged)
   return 1;
 }
 return 0;
}
