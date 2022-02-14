
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int code; int index; } ;
struct v4l2_subdev {int dummy; } ;
struct fimc_fmt {int mbus_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fimc_fmt* FUNC_0 (int *,int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
          struct v4l2_subdev_pad_config *VAR_3,
          struct v4l2_subdev_mbus_code_enum *VAR_4)
{
 struct fimc_fmt *VAR_5;

 VAR_5 = FUNC_0(((void*)0), ((void*)0), VAR_1, VAR_4->index);
 if (!VAR_5)
  return -VAR_0;
 VAR_4->code = VAR_5->mbus_code;
 return 0;
}
