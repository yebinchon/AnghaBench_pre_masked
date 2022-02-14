
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {size_t index; unsigned int code; } ;
struct v4l2_subdev {int dummy; } ;


 size_t FUNC_0 (unsigned int const*) ;
 int VAR_0 ;




__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
        struct v4l2_subdev_pad_config *VAR_2,
        struct v4l2_subdev_mbus_code_enum *VAR_3)
{
 static const unsigned int VAR_4[] = {
  129,
  130,
  128,
 };

 if (VAR_3->index >= FUNC_0(VAR_4))
  return -VAR_0;

 VAR_3->code = VAR_4[VAR_3->index];

 return 0;
}
