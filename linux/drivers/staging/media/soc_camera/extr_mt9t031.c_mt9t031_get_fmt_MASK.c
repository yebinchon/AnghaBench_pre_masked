
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int width; int height; int field; int colorspace; int code; } ;
struct v4l2_subdev_format {scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int width; int height; } ;
struct mt9t031 {int xskip; int yskip; TYPE_1__ rect; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mt9t031* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4,
  struct v4l2_subdev_pad_config *VAR_5,
  struct v4l2_subdev_format *VAR_6)
{
 struct v4l2_mbus_framefmt *VAR_7 = &VAR_6->format;
 struct i2c_client *VAR_8 = FUNC_1(VAR_4);
 struct mt9t031 *VAR_9 = FUNC_0(VAR_8);

 if (VAR_6->pad)
  return -VAR_0;

 VAR_7->width = VAR_9->rect.width / VAR_9->xskip;
 VAR_7->height = VAR_9->rect.height / VAR_9->yskip;
 VAR_7->code = VAR_1;
 VAR_7->colorspace = VAR_2;
 VAR_7->field = VAR_3;

 return 0;
}
