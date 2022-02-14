
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; int top; int left; } ;
struct v4l2_subdev_selection {scalar_t__ which; int target; TYPE_1__ r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9m111 {TYPE_1__ rect; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ VAR_5 ;
 struct mt9m111* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_6,
     struct v4l2_subdev_pad_config *VAR_7,
     struct v4l2_subdev_selection *VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_1(VAR_6);
 struct mt9m111 *VAR_10 = FUNC_0(VAR_9);

 if (VAR_8->which != VAR_5)
  return -VAR_0;

 switch (VAR_8->target) {
 case 128:
  VAR_8->r.left = VAR_3;
  VAR_8->r.top = VAR_4;
  VAR_8->r.width = VAR_2;
  VAR_8->r.height = VAR_1;
  return 0;
 case 129:
  VAR_8->r = VAR_10->rect;
  return 0;
 default:
  return -VAR_0;
 }
}
