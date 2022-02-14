
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, int VAR_2)
{
 if (VAR_2)
  FUNC_1(VAR_1, VAR_0, 0x2);
 else
  FUNC_1(VAR_1, VAR_0, 0x4);
 FUNC_0(100);
 return 0;
}
