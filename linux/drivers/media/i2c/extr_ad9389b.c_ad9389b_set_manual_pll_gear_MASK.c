
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct v4l2_subdev *VAR_0, u32 VAR_1)
{
 u8 VAR_2;
 if (VAR_1 > 140000000)
  VAR_2 = 0xc0;
 else if (VAR_1 > 117000000)
  VAR_2 = 0xb0;
 else if (VAR_1 > 87000000)
  VAR_2 = 0xa0;
 else if (VAR_1 > 60000000)
  VAR_2 = 0x90;
 else
  VAR_2 = 0x80;

 FUNC_0(VAR_0, 0x98, 0x0f, VAR_2);
}
