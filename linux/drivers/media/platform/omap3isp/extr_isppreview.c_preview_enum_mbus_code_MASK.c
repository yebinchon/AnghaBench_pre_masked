
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int pad; size_t index; void* code; } ;
struct v4l2_subdev {int dummy; } ;


 size_t FUNC_0 (void**) ;
 int VAR_0 ;


 void** VAR_1 ;
 void** VAR_2 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3,
      struct v4l2_subdev_pad_config *VAR_4,
      struct v4l2_subdev_mbus_code_enum *VAR_5)
{
 switch (VAR_5->pad) {
 case 129:
  if (VAR_5->index >= FUNC_0(VAR_1))
   return -VAR_0;

  VAR_5->code = VAR_1[VAR_5->index];
  break;
 case 128:
  if (VAR_5->index >= FUNC_0(VAR_2))
   return -VAR_0;

  VAR_5->code = VAR_2[VAR_5->index];
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
