
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ pad; size_t index; int code; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int code; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_4,
     struct v4l2_subdev_pad_config *VAR_5,
     struct v4l2_subdev_mbus_code_enum *VAR_6)
{
 if (VAR_6->pad == VAR_2) {
  if (VAR_6->index > 0)
   return -VAR_0;
  VAR_6->code = VAR_1;
  return 0;
 }

 if (VAR_6->index >= FUNC_0(VAR_3))
  return -VAR_0;

 VAR_6->code = VAR_3[VAR_6->index].code;
 return 0;
}
