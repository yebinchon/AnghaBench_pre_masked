
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsp1_pipeline {int dummy; } ;
struct vsp1_entity {int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct TYPE_2__ {int config; } ;
struct vsp1_clu {int yuv_mode; TYPE_1__ entity; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct vsp1_clu* FUNC_0 (int *) ;
 struct v4l2_mbus_framefmt* FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vsp1_entity *VAR_2,
     struct vsp1_pipeline *VAR_3,
     struct vsp1_dl_list *VAR_4,
     struct vsp1_dl_body *VAR_5)
{
 struct vsp1_clu *VAR_6 = FUNC_0(&VAR_2->subdev);
 struct v4l2_mbus_framefmt *VAR_7;





 VAR_7 = FUNC_1(&VAR_6->entity,
         VAR_6->entity.config,
         VAR_0);
 VAR_6->yuv_mode = VAR_7->code == VAR_1;
}
