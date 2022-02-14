
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ pad; size_t index; int code; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;
struct isp_res_device {int dummy; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct isp_res_device*,struct v4l2_subdev_pad_config*,scalar_t__,int ) ;
 int * VAR_2 ;
 struct isp_res_device* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3,
      struct v4l2_subdev_pad_config *VAR_4,
      struct v4l2_subdev_mbus_code_enum *VAR_5)
{
 struct isp_res_device *VAR_6 = FUNC_2(VAR_3);
 struct v4l2_mbus_framefmt *VAR_7;

 if (VAR_5->pad == VAR_1) {
  if (VAR_5->index >= FUNC_0(VAR_2))
   return -VAR_0;

  VAR_5->code = VAR_2[VAR_5->index];
 } else {
  if (VAR_5->index != 0)
   return -VAR_0;

  VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_1,
           VAR_5->which);
  VAR_5->code = VAR_7->code;
 }

 return 0;
}
