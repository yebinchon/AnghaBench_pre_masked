
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,unsigned char,unsigned char*) ;
 int FUNC_1 (struct v4l2_subdev*,unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, unsigned char VAR_1,
  unsigned char VAR_2, unsigned char VAR_3)
{
 unsigned char VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_0, VAR_1, (VAR_4 & ~VAR_2) | (VAR_3 & VAR_2));
}
