
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;
struct ov7670_info {scalar_t__ on; int wsize; int fmt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_mbus_framefmt*,int *,int *) ;
 struct ov7670_info* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_3 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2,
  struct v4l2_subdev_pad_config *VAR_3,
  struct v4l2_subdev_format *VAR_4)
{
 struct ov7670_info *VAR_5 = FUNC_2(VAR_2);



 int VAR_6;

 if (VAR_4->pad)
  return -VAR_0;

 if (VAR_4->which == VAR_1) {
  VAR_6 = FUNC_1(VAR_2, &VAR_4->format, ((void*)0), ((void*)0));
  if (VAR_6)
   return VAR_6;




  return 0;
 }

 VAR_6 = FUNC_1(VAR_2, &VAR_4->format, &VAR_5->fmt, &VAR_5->wsize);
 if (VAR_6)
  return VAR_6;






 if (VAR_5->on)
  return FUNC_0(VAR_2);

 return 0;
}
