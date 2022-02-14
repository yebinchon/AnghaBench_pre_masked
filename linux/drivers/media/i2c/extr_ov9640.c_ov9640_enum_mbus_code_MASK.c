
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {size_t index; int code; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
  struct v4l2_subdev_pad_config *VAR_3,
  struct v4l2_subdev_mbus_code_enum *VAR_4)
{
 if (VAR_4->pad || VAR_4->index >= FUNC_0(VAR_1))
  return -VAR_0;

 VAR_4->code = VAR_1[VAR_4->index];

 return 0;
}
