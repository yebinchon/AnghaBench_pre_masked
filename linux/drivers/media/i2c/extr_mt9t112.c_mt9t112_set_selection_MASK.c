
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int dummy; } ;
struct v4l2_subdev_selection {scalar_t__ which; scalar_t__ target; struct v4l2_rect r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9t112_priv {TYPE_1__* format; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mt9t112_priv*,struct v4l2_rect const*,int ) ;
 struct mt9t112_priv* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3,
     struct v4l2_subdev_pad_config *VAR_4,
     struct v4l2_subdev_selection *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_2(VAR_3);
 struct mt9t112_priv *VAR_7 = FUNC_1(VAR_6);
 const struct v4l2_rect *VAR_8 = &VAR_5->r;

 if (VAR_5->which != VAR_2 ||
     VAR_5->target != VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_7, VAR_8, VAR_7->format->code);
}
