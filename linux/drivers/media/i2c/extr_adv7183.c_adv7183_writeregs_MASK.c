
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,unsigned char,unsigned char) ;
 int FUNC_1 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0,
  const unsigned char *VAR_1, unsigned int VAR_2)
{
 unsigned char VAR_3, VAR_4;
 unsigned int VAR_5 = 0;

 if (VAR_2 & 0x1) {
  FUNC_1(VAR_0, "invalid regs array\n");
  return -1;
 }

 while (VAR_5 < VAR_2) {
  VAR_3 = *VAR_1++;
  VAR_4 = *VAR_1++;
  VAR_5 += 2;

  FUNC_0(VAR_0, VAR_3, VAR_4);
 }
 return 0;
}
