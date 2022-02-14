
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int code; int index; int pad; } ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0,
    struct v4l2_subdev_pad_config *VAR_1,
    struct v4l2_subdev_mbus_code_enum *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->pad, VAR_2->index);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->code = VAR_3;

 return 0;
}
