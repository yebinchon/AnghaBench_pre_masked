
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct ov965x {int lock; struct v4l2_mbus_framefmt format; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ov965x* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_3 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1,
     struct v4l2_subdev_pad_config *VAR_2,
     struct v4l2_subdev_format *VAR_3)
{
 struct ov965x *VAR_4 = FUNC_2(VAR_1);
 struct v4l2_mbus_framefmt *VAR_5;

 if (VAR_3->which == VAR_0) {
  VAR_5 = FUNC_3(VAR_1, VAR_2, 0);
  VAR_3->format = *VAR_5;
  return 0;
 }

 FUNC_0(&VAR_4->lock);
 VAR_3->format = VAR_4->format;
 FUNC_1(&VAR_4->lock);

 return 0;
}
