
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_subdev_selection {scalar_t__ which; scalar_t__ target; TYPE_1__ r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct tw9910_priv {int norm; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct tw9910_priv* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4,
    struct v4l2_subdev_pad_config *VAR_5,
    struct v4l2_subdev_selection *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_1(VAR_4);
 struct tw9910_priv *VAR_8 = FUNC_0(VAR_7);

 if (VAR_6->which != VAR_3)
  return -VAR_0;

 if (VAR_6->target > VAR_1)
  return -VAR_0;

 VAR_6->r.left = 0;
 VAR_6->r.top = 0;
 if (VAR_8->norm & VAR_2) {
  VAR_6->r.width = 640;
  VAR_6->r.height = 480;
 } else {
  VAR_6->r.width = 768;
  VAR_6->r.height = 576;
 }

 return 0;
}
