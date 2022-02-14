
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;
struct vsp1_uds {TYPE_1__ entity; } ;
struct vsp1_pipeline {int dummy; } ;
struct vsp1_entity {int subdev; } ;
struct v4l2_mbus_framefmt {unsigned int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vsp1_uds* FUNC_0 (int *) ;
 struct v4l2_mbus_framefmt* FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct vsp1_entity *VAR_2,
      struct vsp1_pipeline *VAR_3)
{
 struct vsp1_uds *VAR_4 = FUNC_0(&VAR_2->subdev);
 const struct v4l2_mbus_framefmt *VAR_5;
 const struct v4l2_mbus_framefmt *VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_1(&VAR_4->entity, VAR_4->entity.config,
        VAR_0);
 VAR_5 = FUNC_1(&VAR_4->entity, VAR_4->entity.config,
         VAR_1);
 VAR_7 = VAR_5->width / VAR_6->width;
 if (VAR_7 <= 2)
  return 256;
 else if (VAR_7 <= 4)
  return 512;
 else if (VAR_7 <= 8)
  return 1024;
 else
  return 2048;
}
