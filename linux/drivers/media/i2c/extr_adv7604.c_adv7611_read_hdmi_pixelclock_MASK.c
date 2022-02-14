
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct v4l2_subdev *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_1 = FUNC_0(VAR_0, 0x51);
 VAR_2 = FUNC_0(VAR_0, 0x52);
 if (VAR_1 < 0 || VAR_2 < 0)
  return 0;
 return ((VAR_1 << 1) | (VAR_2 >> 7)) * 1000000 + (VAR_2 & 0x7f) * 1000000 / 128;
}
