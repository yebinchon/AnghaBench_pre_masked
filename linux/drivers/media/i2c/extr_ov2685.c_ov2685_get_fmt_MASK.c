
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct ov2685 {int cur_mode; } ;


 int FUNC_0 (int ,struct v4l2_mbus_framefmt*) ;
 struct ov2685* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0,
     struct v4l2_subdev_pad_config *VAR_1,
     struct v4l2_subdev_format *VAR_2)
{
 struct ov2685 *VAR_3 = FUNC_1(VAR_0);
 struct v4l2_mbus_framefmt *VAR_4 = &VAR_2->format;

 FUNC_0(VAR_3->cur_mode, VAR_4);

 return 0;
}
