
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {size_t index; int code; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9v022 {size_t num_fmts; TYPE_1__* fmts; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int code; } ;


 int VAR_0 ;
 struct mt9v022* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
  struct v4l2_subdev_pad_config *VAR_2,
  struct v4l2_subdev_mbus_code_enum *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_1(VAR_1);
 struct mt9v022 *VAR_5 = FUNC_0(VAR_4);

 if (VAR_3->pad || VAR_3->index >= VAR_5->num_fmts)
  return -VAR_0;

 VAR_3->code = VAR_5->fmts[VAR_3->index].code;
 return 0;
}
