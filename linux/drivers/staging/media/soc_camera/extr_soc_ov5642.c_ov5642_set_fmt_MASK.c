
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int field; int colorspace; int code; int height; int width; } ;
struct v4l2_subdev_pad_config {struct v4l2_mbus_framefmt try_fmt; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct ov5642_datafmt {int dummy; } ;
struct TYPE_3__ {int height; int width; } ;
struct ov5642 {struct ov5642_datafmt const* fmt; TYPE_1__ crop_rect; } ;
struct i2c_client {int dummy; } ;
struct TYPE_4__ {int colorspace; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 struct ov5642_datafmt* FUNC_0 (int ) ;
 struct ov5642* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4,
  struct v4l2_subdev_pad_config *VAR_5,
  struct v4l2_subdev_format *VAR_6)
{
 struct v4l2_mbus_framefmt *VAR_7 = &VAR_6->format;
 struct i2c_client *VAR_8 = FUNC_2(VAR_4);
 struct ov5642 *VAR_9 = FUNC_1(VAR_8);
 const struct ov5642_datafmt *VAR_10 = FUNC_0(VAR_7->code);

 if (VAR_6->pad)
  return -VAR_0;

 VAR_7->width = VAR_9->crop_rect.width;
 VAR_7->height = VAR_9->crop_rect.height;

 if (!VAR_10) {
  if (VAR_6->which == VAR_2)
   return -VAR_0;
  VAR_7->code = VAR_3[0].code;
  VAR_7->colorspace = VAR_3[0].colorspace;
 }

 VAR_7->field = VAR_1;

 if (VAR_6->which == VAR_2)
  VAR_9->fmt = VAR_10;
 else
  VAR_5->try_fmt = *VAR_7;
 return 0;
}
