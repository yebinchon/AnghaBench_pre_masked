
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int code; int colorspace; int field; int height; int width; } ;
struct v4l2_subdev_pad_config {struct v4l2_mbus_framefmt try_fmt; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct ov6650 {int rect; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_mbus_framefmt*) ;
 struct ov6650* FUNC_2 (struct i2c_client*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int *,int,int ,int,int *,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_7,
  struct v4l2_subdev_pad_config *VAR_8,
  struct v4l2_subdev_format *VAR_9)
{
 struct v4l2_mbus_framefmt *VAR_10 = &VAR_9->format;
 struct i2c_client *VAR_11 = FUNC_3(VAR_7);
 struct ov6650 *VAR_12 = FUNC_2(VAR_11);

 if (VAR_9->pad)
  return -VAR_0;

 if (FUNC_0(VAR_10->width, VAR_10->height, &VAR_12->rect))
  FUNC_4(&VAR_10->width, 2, VAR_6, 1,
    &VAR_10->height, 2, VAR_1, 1, 0);

 VAR_10->field = VAR_4;

 switch (VAR_10->code) {
 case 131:
  VAR_10->code = 130;

 case 130:
 case 128:
 case 129:
 case 132:
 case 133:
  VAR_10->colorspace = VAR_2;
  break;
 default:
  VAR_10->code = 134;

 case 134:
  VAR_10->colorspace = VAR_3;
  break;
 }

 if (VAR_9->which == VAR_5)
  return FUNC_1(VAR_7, VAR_10);
 VAR_8->try_fmt = *VAR_10;

 return 0;
}
