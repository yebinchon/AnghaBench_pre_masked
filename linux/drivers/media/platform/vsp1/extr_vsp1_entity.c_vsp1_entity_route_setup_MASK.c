
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct vsp1_pipeline {TYPE_2__* output; } ;
struct vsp1_entity {scalar_t__ type; size_t sink_pad; TYPE_5__* route; TYPE_4__* sink; struct vsp1_entity** sources; } ;
struct vsp1_dl_body {int dummy; } ;
struct TYPE_10__ {int output; scalar_t__ reg; } ;
struct TYPE_9__ {TYPE_3__* route; } ;
struct TYPE_8__ {int* inputs; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_7__ {TYPE_1__ entity; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct vsp1_dl_body*,scalar_t__,int) ;

void FUNC_1(struct vsp1_entity *VAR_8,
        struct vsp1_pipeline *VAR_9,
        struct vsp1_dl_body *VAR_10)
{
 struct vsp1_entity *VAR_11;
 u32 VAR_12;

 if (VAR_8->type == VAR_6) {
  u32 VAR_13;





  VAR_11 = VAR_8->sources[0];
  VAR_13 = (VAR_9->output->entity.index << VAR_4)
        | (VAR_11->route->output << VAR_3);

  FUNC_0(VAR_10, VAR_0, VAR_13);
  return;
 } else if (VAR_8->type == VAR_7) {
  u32 VAR_14;





  VAR_11 = VAR_8->sources[0];
  VAR_14 = (VAR_9->output->entity.index << VAR_4)
        | (VAR_11->route->output << VAR_3);

  FUNC_0(VAR_10, VAR_1, VAR_14);
  return;
 }

 VAR_11 = VAR_8;
 if (VAR_11->route->reg == 0)
  return;

 VAR_12 = VAR_11->sink->route->inputs[VAR_11->sink_pad];




 if (VAR_11->type == VAR_5)
  VAR_12 |= VAR_2;
 FUNC_0(VAR_10, VAR_11->route->reg, VAR_12);
}
