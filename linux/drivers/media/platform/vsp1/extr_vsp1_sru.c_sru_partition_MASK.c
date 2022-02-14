
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;
struct vsp1_sru {TYPE_1__ entity; } ;
struct vsp1_pipeline {int dummy; } ;
struct vsp1_partition_window {int width; int left; } ;
struct vsp1_partition {struct vsp1_partition_window sru; } ;
struct vsp1_entity {int subdev; } ;
struct v4l2_mbus_framefmt {scalar_t__ width; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vsp1_sru* FUNC_0 (int *) ;
 struct v4l2_mbus_framefmt* FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vsp1_entity *VAR_2,
     struct vsp1_pipeline *VAR_3,
     struct vsp1_partition *VAR_4,
     unsigned int VAR_5,
     struct vsp1_partition_window *VAR_6)
{
 struct vsp1_sru *VAR_7 = FUNC_0(&VAR_2->subdev);
 struct v4l2_mbus_framefmt *VAR_8;
 struct v4l2_mbus_framefmt *VAR_9;

 VAR_8 = FUNC_1(&VAR_7->entity, VAR_7->entity.config,
        VAR_0);
 VAR_9 = FUNC_1(&VAR_7->entity, VAR_7->entity.config,
         VAR_1);


 if (VAR_8->width != VAR_9->width) {
  VAR_6->width /= 2;
  VAR_6->left /= 2;
 }

 VAR_4->sru = *VAR_6;
}
