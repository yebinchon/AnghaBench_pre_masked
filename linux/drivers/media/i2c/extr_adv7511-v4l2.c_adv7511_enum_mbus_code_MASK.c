
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ pad; int index; int code; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_4,
      struct v4l2_subdev_pad_config *VAR_5,
      struct v4l2_subdev_mbus_code_enum *VAR_6)
{
 if (VAR_6->pad != 0)
  return -VAR_0;

 switch (VAR_6->index) {
 case 0:
  VAR_6->code = VAR_1;
  break;
 case 1:
  VAR_6->code = VAR_3;
  break;
 case 2:
  VAR_6->code = VAR_2;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
