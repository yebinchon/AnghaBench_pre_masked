
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct imx355 {int cur_mode; struct v4l2_subdev sd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct imx355*,int ,struct v4l2_subdev_format*) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_2(struct imx355 *VAR_1,
        struct v4l2_subdev_pad_config *VAR_2,
        struct v4l2_subdev_format *VAR_3)
{
 struct v4l2_mbus_framefmt *VAR_4;
 struct v4l2_subdev *VAR_5 = &VAR_1->sd;

 if (VAR_3->which == VAR_0) {
  VAR_4 = FUNC_1(VAR_5, VAR_2, VAR_3->pad);
  VAR_3->format = *VAR_4;
 } else {
  FUNC_0(VAR_1, VAR_1->cur_mode, VAR_3);
 }

 return 0;
}
