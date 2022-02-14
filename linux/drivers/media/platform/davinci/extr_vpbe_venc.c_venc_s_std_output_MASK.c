
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,struct v4l2_subdev*,char*) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4, v4l2_std_id VAR_5)
{
 FUNC_0(VAR_3, 1, VAR_4, "venc_s_std_output\n");

 if (VAR_5 & VAR_1)
  return FUNC_1(VAR_4);
 else if (VAR_5 & VAR_2)
  return FUNC_2(VAR_4);

 return -VAR_0;
}
