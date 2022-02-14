
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct saa711x_state {int ident; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,unsigned char) ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*,unsigned char,unsigned char) ;
 struct saa711x_state* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,unsigned char) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1, const unsigned char *VAR_2)
{
 struct saa711x_state *VAR_3 = FUNC_2(VAR_1);
 unsigned char VAR_4, VAR_5;

 while (*VAR_2 != 0x00) {
  VAR_4 = *(VAR_2++);
  VAR_5 = *(VAR_2++);



  if (FUNC_0(VAR_3->ident, VAR_4)) {
   if (FUNC_1(VAR_1, VAR_4, VAR_5) < 0)
    return -1;
  } else {
   FUNC_3(1, VAR_0, VAR_1, "tried to access reserved reg 0x%02x\n", VAR_4);
  }
 }
 return 0;
}
