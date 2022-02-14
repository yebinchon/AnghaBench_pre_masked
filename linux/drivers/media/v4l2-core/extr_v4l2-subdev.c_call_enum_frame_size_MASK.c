
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {int which; int pad; } ;
struct v4l2_subdev {TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* pad; } ;
struct TYPE_3__ {int (* enum_frame_size ) (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_frame_size_enum*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct v4l2_subdev_pad_config*) ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_frame_size_enum*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1,
    struct v4l2_subdev_pad_config *VAR_2,
    struct v4l2_subdev_frame_size_enum *VAR_3)
{
 if (!VAR_3)
  return -VAR_0;

 return FUNC_2(VAR_3->which) ? : FUNC_1(VAR_1, VAR_3->pad) ? :
        FUNC_0(VAR_3->which, VAR_2) ? :
        VAR_1->ops->pad->enum_frame_size(VAR_1, VAR_2, VAR_3);
}
