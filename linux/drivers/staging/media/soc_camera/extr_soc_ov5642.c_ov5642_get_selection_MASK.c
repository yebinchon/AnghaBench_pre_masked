
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; int top; int left; } ;
struct v4l2_subdev_selection {scalar_t__ which; int target; TYPE_1__ r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct ov5642 {TYPE_1__ crop_rect; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 struct ov5642* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4,
  struct v4l2_subdev_pad_config *VAR_5,
  struct v4l2_subdev_selection *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_1(VAR_4);
 struct ov5642 *VAR_8 = FUNC_0(VAR_7);

 if (VAR_6->which != VAR_3)
  return -VAR_0;

 switch (VAR_6->target) {
 case 128:
  VAR_6->r.left = 0;
  VAR_6->r.top = 0;
  VAR_6->r.width = VAR_2;
  VAR_6->r.height = VAR_1;
  return 0;
 case 129:
  VAR_6->r = VAR_8->crop_rect;
  return 0;
 default:
  return -VAR_0;
 }
}
