
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct v4l2_subdev*,int,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct v4l2_subdev*,char*) ;

int FUNC_3(struct v4l2_subdev *VAR_1, u32 VAR_2, u8 *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 if (FUNC_0(VAR_2) != 1) {
  FUNC_2(VAR_1, "Wrong data size\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_1, FUNC_0(VAR_2), VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;

 *VAR_3 = (u8)VAR_4;
 return VAR_5;
}
