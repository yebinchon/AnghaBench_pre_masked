
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {scalar_t__ code; int height; int width; int colorspace; int field; } ;
struct v4l2_subdev_pad_config {struct v4l2_mbus_framefmt try_fmt; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9v011 {int height; int width; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 struct mt9v011* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int *,int,int,int,int *,int,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_5,
  struct v4l2_subdev_pad_config *VAR_6,
  struct v4l2_subdev_format *VAR_7)
{
 struct v4l2_mbus_framefmt *VAR_8 = &VAR_7->format;
 struct mt9v011 *VAR_9 = FUNC_1(VAR_5);

 if (VAR_7->pad || VAR_8->code != VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_8->width, 48, 639, 1,
         &VAR_8->height, 32, 480, 1, 0);
 VAR_8->field = VAR_3;
 VAR_8->colorspace = VAR_2;

 if (VAR_7->which == VAR_4) {
  VAR_9->width = VAR_8->width;
  VAR_9->height = VAR_8->height;

  FUNC_0(VAR_5);
 } else {
  VAR_6->try_fmt = *VAR_8;
 }

 return 0;
}
