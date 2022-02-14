
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ index; size_t pad; int code; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;




 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_2,
      struct v4l2_subdev_pad_config *VAR_3,
      struct v4l2_subdev_mbus_code_enum *VAR_4)
{
 static const int VAR_5[] = {
   [130] = 131,
   [128] = 129};

 if (VAR_4->index > 0 || VAR_4->pad >= VAR_1)
  return -VAR_0;

 VAR_4->code = VAR_5[VAR_4->pad];

 return 0;
}
