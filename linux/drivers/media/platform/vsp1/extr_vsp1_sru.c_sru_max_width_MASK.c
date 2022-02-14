
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;
struct vsp1_sru {TYPE_1__ entity; } ;
struct vsp1_pipeline {int dummy; } ;
struct vsp1_entity {int subdev; } ;
struct v4l2_mbus_framefmt {scalar_t__ width; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vsp1_sru* FUNC_0 (int *) ;
 struct v4l2_mbus_framefmt* FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct vsp1_entity *VAR_2,
      struct vsp1_pipeline *VAR_3)
{
 struct vsp1_sru *VAR_4 = FUNC_0(&VAR_2->subdev);
 struct v4l2_mbus_framefmt *VAR_5;
 struct v4l2_mbus_framefmt *VAR_6;

 VAR_5 = FUNC_1(&VAR_4->entity, VAR_4->entity.config,
        VAR_0);
 VAR_6 = FUNC_1(&VAR_4->entity, VAR_4->entity.config,
         VAR_1);






 if (VAR_5->width != VAR_6->width)
  return 512;
 else
  return 256;
}
