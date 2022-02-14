
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; int top; int left; } ;
struct v4l2_subdev_selection {TYPE_1__ r; int target; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int height; int width; } ;
struct mt9m001_datafmt {int colorspace; } ;
struct TYPE_4__ {int height; int width; int top; int left; } ;
struct mt9m001 {struct mt9m001_datafmt const* fmt; TYPE_2__ rect; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int *,struct v4l2_subdev_selection*) ;
 struct mt9m001* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
    const struct mt9m001_datafmt *VAR_3,
    struct v4l2_mbus_framefmt *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_2(VAR_2);
 struct mt9m001 *VAR_6 = FUNC_1(VAR_5);
 struct v4l2_subdev_selection VAR_7 = {
  .which = VAR_1,
  .target = VAR_0,
  .r.left = VAR_6->rect.left,
  .r.top = VAR_6->rect.top,
  .r.width = VAR_4->width,
  .r.height = VAR_4->height,
 };
 int VAR_8;


 VAR_8 = FUNC_0(VAR_2, ((void*)0), &VAR_7);
 if (!VAR_8) {
  VAR_4->width = VAR_6->rect.width;
  VAR_4->height = VAR_6->rect.height;
  VAR_6->fmt = VAR_3;
  VAR_4->colorspace = VAR_3->colorspace;
 }

 return VAR_8;
}
