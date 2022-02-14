
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct ov2680_dev {int lock; struct v4l2_mbus_framefmt fmt; int sd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ov2680_dev* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_3 (int *,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2,
     struct v4l2_subdev_pad_config *VAR_3,
     struct v4l2_subdev_format *VAR_4)
{
 struct ov2680_dev *VAR_5 = FUNC_2(VAR_2);
 struct v4l2_mbus_framefmt *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 if (VAR_4->pad != 0)
  return -VAR_0;

 FUNC_0(&VAR_5->lock);

 if (VAR_4->which == VAR_1) {



  VAR_7 = -VAR_0;

 } else {
  VAR_6 = &VAR_5->fmt;
 }

 if (VAR_6)
  VAR_4->format = *VAR_6;

 FUNC_1(&VAR_5->lock);

 return VAR_7;
}
