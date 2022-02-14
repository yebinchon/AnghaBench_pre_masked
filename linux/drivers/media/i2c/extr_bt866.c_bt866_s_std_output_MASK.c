
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,struct v4l2_subdev*,char*,unsigned long long) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3, v4l2_std_id VAR_4)
{
 FUNC_0(1, VAR_2, VAR_3, "set norm %llx\n", (unsigned long long)VAR_4);


 if (!(VAR_4 & VAR_1))
  return -VAR_0;
 return 0;
}
