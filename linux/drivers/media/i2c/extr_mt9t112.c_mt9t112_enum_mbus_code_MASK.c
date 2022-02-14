
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ index; int code; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9t112_priv {scalar_t__ num_formats; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int code; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct mt9t112_priv* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2,
      struct v4l2_subdev_pad_config *VAR_3,
      struct v4l2_subdev_mbus_code_enum *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_1(VAR_2);
 struct mt9t112_priv *VAR_6 = FUNC_0(VAR_5);

 if (VAR_4->pad || VAR_4->index >= VAR_6->num_formats)
  return -VAR_0;

 VAR_4->code = VAR_1[VAR_4->index].code;

 return 0;
}
