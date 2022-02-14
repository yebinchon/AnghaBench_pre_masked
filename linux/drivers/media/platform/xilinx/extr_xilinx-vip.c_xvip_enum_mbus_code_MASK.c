
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ which; int code; int pad; scalar_t__ index; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

int FUNC_1(struct v4l2_subdev *VAR_2,
   struct v4l2_subdev_pad_config *VAR_3,
   struct v4l2_subdev_mbus_code_enum *VAR_4)
{
 struct v4l2_mbus_framefmt *VAR_5;




 if (VAR_4->which == VAR_1)
  return -VAR_0;

 if (VAR_4->index)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4->pad);

 VAR_4->code = VAR_5->code;

 return 0;
}
