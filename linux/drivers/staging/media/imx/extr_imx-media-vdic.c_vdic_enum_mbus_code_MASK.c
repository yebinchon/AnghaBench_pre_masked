
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ pad; int index; int code; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3,
          struct v4l2_subdev_pad_config *VAR_4,
          struct v4l2_subdev_mbus_code_enum *VAR_5)
{
 if (VAR_5->pad >= VAR_2)
  return -VAR_1;

 return FUNC_0(&VAR_5->code, VAR_5->index, VAR_0);
}
