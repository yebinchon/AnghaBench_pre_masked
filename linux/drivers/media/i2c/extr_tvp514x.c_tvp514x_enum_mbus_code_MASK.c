
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ pad; scalar_t__ index; int code; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev_mbus_code_enum*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
      struct v4l2_subdev_pad_config *VAR_3,
      struct v4l2_subdev_mbus_code_enum *VAR_4)
{
 u32 VAR_5 = VAR_4->pad;
 u32 VAR_6 = VAR_4->index;

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->index = VAR_6;
 VAR_4->pad = VAR_5;

 if (VAR_6 != 0)
  return -VAR_0;

 VAR_4->code = VAR_1;

 return 0;
}
