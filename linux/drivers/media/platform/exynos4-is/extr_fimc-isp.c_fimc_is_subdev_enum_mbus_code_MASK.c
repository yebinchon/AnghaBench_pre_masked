
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int code; int index; } ;
struct v4l2_subdev {int dummy; } ;
struct fimc_fmt {int mbus_code; } ;


 int VAR_0 ;
 struct fimc_fmt* FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
    struct v4l2_subdev_pad_config *VAR_2,
    struct v4l2_subdev_mbus_code_enum *VAR_3)
{
 const struct fimc_fmt *VAR_4;

 VAR_4 = FUNC_0(((void*)0), ((void*)0), VAR_3->index);
 if (!VAR_4)
  return -VAR_0;
 VAR_3->code = VAR_4->mbus_code;
 return 0;
}
