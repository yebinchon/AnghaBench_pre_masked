
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subdev; } ;
struct vsp1_brx {TYPE_1__ entity; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_rect {int dummy; } ;


 struct v4l2_rect* FUNC_0 (int *,struct v4l2_subdev_pad_config*,unsigned int) ;

__attribute__((used)) static struct v4l2_rect *FUNC_1(struct vsp1_brx *VAR_0,
      struct v4l2_subdev_pad_config *VAR_1,
      unsigned int VAR_2)
{
 return FUNC_0(&VAR_0->entity.subdev, VAR_1, VAR_2);
}
