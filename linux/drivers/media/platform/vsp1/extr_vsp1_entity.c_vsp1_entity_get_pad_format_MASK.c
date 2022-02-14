
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_entity {int subdev; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;


 struct v4l2_mbus_framefmt* FUNC_0 (int *,struct v4l2_subdev_pad_config*,unsigned int) ;

struct v4l2_mbus_framefmt *
FUNC_1(struct vsp1_entity *VAR_0,
      struct v4l2_subdev_pad_config *VAR_1,
      unsigned int VAR_2)
{
 return FUNC_0(&VAR_0->subdev, VAR_1, VAR_2);
}
