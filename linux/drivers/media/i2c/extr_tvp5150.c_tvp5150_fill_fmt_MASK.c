
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; int colorspace; int field; int code; } ;
struct v4l2_subdev_format {scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dev; } ;
struct TYPE_2__ {int height; int width; } ;
struct tvp5150 {TYPE_1__ rect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int ,char*,int ,int) ;
 struct tvp5150* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_6,
       struct v4l2_subdev_pad_config *VAR_7,
       struct v4l2_subdev_format *VAR_8)
{
 struct v4l2_mbus_framefmt *VAR_9;
 struct tvp5150 *VAR_10 = FUNC_1(VAR_6);

 if (!VAR_8 || (VAR_8->pad != VAR_4))
  return -VAR_0;

 VAR_9 = &VAR_8->format;

 VAR_9->width = VAR_10->rect.width;
 VAR_9->height = VAR_10->rect.height / 2;

 VAR_9->code = VAR_3;
 VAR_9->field = VAR_2;
 VAR_9->colorspace = VAR_1;

 FUNC_0(VAR_6->dev, 1, VAR_5, "width = %d, height = %d\n", VAR_9->width,
      VAR_9->height);
 return 0;
}
