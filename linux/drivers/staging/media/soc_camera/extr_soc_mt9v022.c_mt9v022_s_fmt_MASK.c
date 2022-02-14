
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; int top; int left; } ;
struct v4l2_subdev_selection {TYPE_1__ r; int target; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; int colorspace; int height; int width; } ;
struct mt9v022_datafmt {int colorspace; } ;
struct TYPE_4__ {int height; int width; int top; int left; } ;
struct mt9v022 {struct mt9v022_datafmt const* fmt; TYPE_2__ rect; int model; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_subdev*,int *,struct v4l2_subdev_selection*) ;
 struct mt9v022* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_5,
    const struct mt9v022_datafmt *VAR_6,
    struct v4l2_mbus_framefmt *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_2(VAR_5);
 struct mt9v022 *VAR_9 = FUNC_1(VAR_8);
 struct v4l2_subdev_selection VAR_10 = {
  .which = VAR_4,
  .target = VAR_3,
  .r.left = VAR_9->rect.left,
  .r.top = VAR_9->rect.top,
  .r.width = VAR_7->width,
  .r.height = VAR_7->height,
 };
 int VAR_11;





 switch (VAR_7->code) {
 case 128:
 case 129:
  if (VAR_9->model != VAR_2)
   return -VAR_0;
  break;
 case 130:
 case 131:
  if (VAR_9->model != VAR_1)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }


 VAR_11 = FUNC_0(VAR_5, ((void*)0), &VAR_10);
 if (!VAR_11) {
  VAR_7->width = VAR_9->rect.width;
  VAR_7->height = VAR_9->rect.height;
  VAR_9->fmt = VAR_6;
  VAR_7->colorspace = VAR_6->colorspace;
 }

 return VAR_11;
}
