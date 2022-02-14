
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; int top; int left; } ;
struct v4l2_subdev_selection {scalar_t__ which; int target; TYPE_1__ r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct ak881x {int lines; } ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;
 struct ak881x* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2,
    struct v4l2_subdev_pad_config *VAR_3,
    struct v4l2_subdev_selection *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_1(VAR_2);
 struct ak881x *VAR_6 = FUNC_0(VAR_5);

 if (VAR_4->which != VAR_1)
  return -VAR_0;

 switch (VAR_4->target) {
 case 128:
  VAR_4->r.left = 0;
  VAR_4->r.top = 0;
  VAR_4->r.width = 720;
  VAR_4->r.height = VAR_6->lines;
  return 0;
 default:
  return -VAR_0;
 }
}
