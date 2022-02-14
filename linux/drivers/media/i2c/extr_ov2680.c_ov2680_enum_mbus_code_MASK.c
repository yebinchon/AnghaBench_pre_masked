
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ pad; scalar_t__ index; int code; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int code; } ;
struct ov2680_dev {TYPE_1__ fmt; } ;


 int VAR_0 ;
 struct ov2680_dev* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
     struct v4l2_subdev_pad_config *VAR_2,
     struct v4l2_subdev_mbus_code_enum *VAR_3)
{
 struct ov2680_dev *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->pad != 0 || VAR_3->index != 0)
  return -VAR_0;

 VAR_3->code = VAR_4->fmt.code;

 return 0;
}
