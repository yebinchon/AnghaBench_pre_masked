
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_frame_size_enum*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_4,
     struct v4l2_subdev_pad_config *VAR_5,
     struct v4l2_subdev_frame_size_enum *VAR_6)
{
 if (VAR_6->pad != VAR_3)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_2,
        VAR_2, VAR_1,
        VAR_1);
}
