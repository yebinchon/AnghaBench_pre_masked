
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_mbus_framefmt {scalar_t__ code; int field; int height; int width; int colorspace; } ;
struct v4l2_subdev_pad_config {struct v4l2_mbus_framefmt try_fmt; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9t112_priv {int num_formats; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {scalar_t__ code; int colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (struct v4l2_subdev*,struct v4l2_mbus_framefmt*) ;
 struct mt9t112_priv* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *,int ,int ,int ,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_8,
      struct v4l2_subdev_pad_config *VAR_9,
      struct v4l2_subdev_format *VAR_10)
{
 struct i2c_client *VAR_11 = FUNC_2(VAR_8);
 struct v4l2_mbus_framefmt *VAR_12 = &VAR_10->format;
 struct mt9t112_priv *VAR_13 = FUNC_1(VAR_11);
 int VAR_14;

 if (VAR_10->pad)
  return -VAR_0;

 for (VAR_14 = 0; VAR_14 < VAR_13->num_formats; VAR_14++)
  if (VAR_7[VAR_14].code == VAR_12->code)
   break;

 if (VAR_14 == VAR_13->num_formats) {
  VAR_12->code = VAR_3;
  VAR_12->colorspace = VAR_4;
 } else {
  VAR_12->colorspace = VAR_7[VAR_14].colorspace;
 }

 FUNC_3(&VAR_12->width, 0, VAR_2, 0,
         &VAR_12->height, 0, VAR_1, 0, 0);

 VAR_12->field = VAR_5;

 if (VAR_10->which == VAR_6)
  return FUNC_0(VAR_8, VAR_12);
 VAR_9->try_fmt = *VAR_12;

 return 0;
}
