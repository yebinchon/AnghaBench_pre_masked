
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int top; int left; int height; int width; } ;
struct v4l2_mbus_framefmt {int colorspace; int code; int height; int width; } ;
struct TYPE_4__ {int top; int left; } ;
struct mt9t112_priv {TYPE_1__* format; TYPE_2__ frame; } ;
struct i2c_client {int dummy; } ;
struct TYPE_3__ {int colorspace; } ;


 int FUNC_0 (struct mt9t112_priv*,struct v4l2_rect*,int ) ;
 struct mt9t112_priv* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0,
    struct v4l2_mbus_framefmt *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_2(VAR_0);
 struct mt9t112_priv *VAR_3 = FUNC_1(VAR_2);
 struct v4l2_rect VAR_4 = {
  .width = VAR_1->width,
  .height = VAR_1->height,
  .left = VAR_3->frame.left,
  .top = VAR_3->frame.top,
 };
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, &VAR_4, VAR_1->code);

 if (!VAR_5)
  VAR_1->colorspace = VAR_3->format->colorspace;

 return VAR_5;
}
