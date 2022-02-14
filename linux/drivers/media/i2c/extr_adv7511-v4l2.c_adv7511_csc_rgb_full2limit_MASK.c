
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int,int ,int ,int,int ,int,int ,int,int ,int ,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct v4l2_subdev *VAR_0, bool VAR_1)
{
 if (VAR_1) {
  u8 VAR_2 = 0;
  FUNC_1(VAR_0, VAR_2);
  FUNC_0(VAR_0,
      4096-564, 0, 0, 256,
      0, 4096-564, 0, 256,
      0, 0, 4096-564, 256);

  FUNC_2(VAR_0, 0x18, 0x7f, 0x80);

  FUNC_2(VAR_0, 0x57, 0xf3, 0x04);
 } else {

  FUNC_2(VAR_0, 0x18, 0x7f, 0x0);

  FUNC_2(VAR_0, 0x57, 0xf3, 0x08);
 }
}
