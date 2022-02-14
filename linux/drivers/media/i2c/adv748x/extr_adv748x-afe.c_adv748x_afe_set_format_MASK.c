
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ pad; scalar_t__ which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3,
          struct v4l2_subdev_pad_config *VAR_4,
          struct v4l2_subdev_format *VAR_5)
{
 struct v4l2_mbus_framefmt *VAR_6;


 if (VAR_5->pad != VAR_0)
  return -VAR_1;

 if (VAR_5->which == VAR_2)
  return FUNC_0(VAR_3, VAR_4, VAR_5);

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5->pad);
 *VAR_6 = VAR_5->format;

 return 0;
}
