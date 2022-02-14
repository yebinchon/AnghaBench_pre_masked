
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
     struct v4l2_subdev_pad_config *VAR_3,
     struct v4l2_subdev_format *VAR_4)
{
 const struct v4l2_mbus_framefmt *VAR_5;


 if (VAR_4->pad == VAR_0)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_1;

 VAR_4->format = *VAR_5;

 return 0;
}
