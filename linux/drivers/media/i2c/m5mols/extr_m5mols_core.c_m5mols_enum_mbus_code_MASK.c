
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {size_t index; int code; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int code; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_3,
     struct v4l2_subdev_pad_config *VAR_4,
     struct v4l2_subdev_mbus_code_enum *VAR_5)
{
 if (!VAR_5 || VAR_5->index >= VAR_1)
  return -VAR_0;

 VAR_5->code = VAR_2[VAR_5->index].code;

 return 0;
}
