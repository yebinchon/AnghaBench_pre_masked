
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subdev; } ;
struct vsp1_rwpf {TYPE_1__ entity; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_rect {int dummy; } ;


 int VAR_0 ;
 struct v4l2_rect* FUNC_0 (int *,struct v4l2_subdev_pad_config*,int ) ;

struct v4l2_rect *FUNC_1(struct vsp1_rwpf *VAR_1,
         struct v4l2_subdev_pad_config *VAR_2)
{
 return FUNC_0(&VAR_1->entity.subdev, VAR_2,
     VAR_0);
}
