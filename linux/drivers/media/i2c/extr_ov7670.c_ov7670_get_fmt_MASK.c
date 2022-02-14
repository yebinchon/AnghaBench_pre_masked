
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct ov7670_info {struct v4l2_mbus_framefmt format; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ov7670_info* FUNC_0 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2,
     struct v4l2_subdev_pad_config *VAR_3,
     struct v4l2_subdev_format *VAR_4)
{
 struct ov7670_info *VAR_5 = FUNC_0(VAR_2);




 if (VAR_4->which == VAR_1) {





  return -VAR_0;

 } else {
  VAR_4->format = VAR_5->format;
 }

 return 0;
}
