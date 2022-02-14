
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int code; scalar_t__ index; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int code; } ;
struct mt9p031 {TYPE_1__ format; } ;


 int VAR_0 ;
 struct mt9p031* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
      struct v4l2_subdev_pad_config *VAR_2,
      struct v4l2_subdev_mbus_code_enum *VAR_3)
{
 struct mt9p031 *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->pad || VAR_3->index)
  return -VAR_0;

 VAR_3->code = VAR_4->format.code;
 return 0;
}
