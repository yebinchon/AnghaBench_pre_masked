
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct v4l2_subdev*,int,int ,int *) ;
 int FUNC_2 (struct v4l2_subdev*,char*) ;

int FUNC_3(struct v4l2_subdev *VAR_1, u32 VAR_2, u32 *VAR_3)
{
 if (FUNC_0(VAR_2) != 4) {
  FUNC_2(VAR_1, "Wrong data size\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_1, FUNC_0(VAR_2), VAR_2, VAR_3);
}
