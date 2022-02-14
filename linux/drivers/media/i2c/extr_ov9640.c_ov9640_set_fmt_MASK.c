
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int code; int colorspace; int field; int height; int width; } ;
struct v4l2_subdev_pad_config {struct v4l2_mbus_framefmt try_fmt; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_mbus_framefmt*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_5,
  struct v4l2_subdev_pad_config *VAR_6,
  struct v4l2_subdev_format *VAR_7)
{
 struct v4l2_mbus_framefmt *VAR_8 = &VAR_7->format;

 if (VAR_7->pad)
  return -VAR_0;

 FUNC_0(&VAR_8->width, &VAR_8->height);

 VAR_8->field = VAR_3;

 switch (VAR_8->code) {
 case 130:
 case 129:
  VAR_8->colorspace = VAR_2;
  break;
 default:
  VAR_8->code = 128;

 case 128:
  VAR_8->colorspace = VAR_1;
  break;
 }

 if (VAR_7->which == VAR_4)
  return FUNC_1(VAR_5, VAR_8);

 VAR_6->try_fmt = *VAR_8;

 return 0;
}
