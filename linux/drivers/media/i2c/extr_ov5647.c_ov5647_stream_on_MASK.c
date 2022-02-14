
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_3, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2, 0x00);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_0(VAR_4, VAR_1, 0x00);
}
