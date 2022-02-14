
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int height; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct s2250 {int reg12b_val; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct s2250* FUNC_0 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
  struct v4l2_subdev_pad_config *VAR_3,
  struct v4l2_subdev_format *VAR_4)
{
 struct v4l2_mbus_framefmt *VAR_5 = &VAR_4->format;
 struct s2250 *VAR_6 = FUNC_0(VAR_2);
 struct i2c_client *VAR_7 = FUNC_1(VAR_2);

 if (VAR_4->pad)
  return -VAR_0;

 if (VAR_4->which == VAR_1)
  return 0;

 if (VAR_5->height < 640) {
  FUNC_2(VAR_7, 0x12b, VAR_6->reg12b_val | 0x400);
  FUNC_2(VAR_7, 0x140, 0x060);
 } else {
  FUNC_2(VAR_7, 0x12b, VAR_6->reg12b_val & ~0x400);
  FUNC_2(VAR_7, 0x140, 0x060);
 }
 return 0;
}
