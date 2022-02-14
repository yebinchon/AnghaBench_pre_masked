
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsp1_pipeline {int dummy; } ;
struct vsp1_entity {TYPE_1__* ops; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct TYPE_2__ {int (* configure_frame ) (struct vsp1_entity*,struct vsp1_pipeline*,struct vsp1_dl_list*,struct vsp1_dl_body*) ;} ;


 int FUNC_0 (struct vsp1_entity*,struct vsp1_pipeline*,struct vsp1_dl_list*,struct vsp1_dl_body*) ;

void FUNC_1(struct vsp1_entity *VAR_0,
     struct vsp1_pipeline *VAR_1,
     struct vsp1_dl_list *VAR_2,
     struct vsp1_dl_body *VAR_3)
{
 if (VAR_0->ops->configure_frame)
  VAR_0->ops->configure_frame(VAR_0, VAR_1, VAR_2, VAR_3);
}
