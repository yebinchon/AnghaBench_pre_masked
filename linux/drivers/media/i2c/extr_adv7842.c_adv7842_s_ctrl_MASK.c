
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct adv7842_state {int rgb_quantization_range; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,int,int) ;
 int FUNC_2 (struct v4l2_subdev*,int,int,int) ;
 int VAR_1 ;
 int FUNC_3 (struct v4l2_subdev*,int,int) ;
 int FUNC_4 (struct v4l2_subdev*,int,int,int) ;
 int FUNC_5 (struct v4l2_subdev*) ;
 struct v4l2_subdev* FUNC_6 (struct v4l2_ctrl*) ;
 struct adv7842_state* FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (int,int ,struct v4l2_subdev*,char*,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct v4l2_ctrl *VAR_2)
{
 struct v4l2_subdev *VAR_3 = FUNC_6(VAR_2);
 struct adv7842_state *VAR_4 = FUNC_7(VAR_3);





 switch (VAR_2->id) {

 case 132:
  FUNC_1(VAR_3, 0x3c, VAR_2->val);
  FUNC_3(VAR_3, 0x14, VAR_2->val);

  return 0;
 case 131:
  FUNC_1(VAR_3, 0x3a, VAR_2->val);
  FUNC_3(VAR_3, 0x13, VAR_2->val);

  return 0;
 case 128:
  FUNC_1(VAR_3, 0x3b, VAR_2->val);
  FUNC_3(VAR_3, 0x15, VAR_2->val);

  return 0;
 case 129:
  FUNC_1(VAR_3, 0x3d, VAR_2->val);
  FUNC_3(VAR_3, 0x16, VAR_2->val);

  return 0;

 case 135:
  FUNC_0(VAR_3, 0xc8, VAR_2->val);
  return 0;
 case 133:
  FUNC_2(VAR_3, 0xbf, ~0x04, (VAR_2->val << 2));
  FUNC_4(VAR_3, 0xdd, ~0x04, (VAR_2->val << 2));
  return 0;
 case 134: {
  u8 VAR_5 = (VAR_2->val & 0xff0000) >> 16;
  u8 VAR_6 = (VAR_2->val & 0x00ff00) >> 8;
  u8 VAR_7 = (VAR_2->val & 0x0000ff);

  int VAR_8 = 66 * VAR_5 + 129 * VAR_6 + 25 * VAR_7;
  int VAR_9 = -38 * VAR_5 - 74 * VAR_6 + 112 * VAR_7;
  int VAR_10 = 112 * VAR_5 - 94 * VAR_6 - 18 * VAR_7;


  VAR_8 = (VAR_8 + 128) >> 8;
  VAR_9 = (VAR_9 + 128) >> 8;
  VAR_10 = (VAR_10 + 128) >> 8;

  VAR_8 += 16;
  VAR_9 += 128;
  VAR_10 += 128;

  FUNC_8(1, VAR_1, VAR_3, "R %x, G %x, B %x\n", VAR_5, VAR_6, VAR_7);
  FUNC_8(1, VAR_1, VAR_3, "Y %x, U %x, V %x\n", VAR_8, VAR_9, VAR_10);


  FUNC_1(VAR_3, 0xc1, VAR_5);
  FUNC_1(VAR_3, 0xc0, VAR_6);
  FUNC_1(VAR_3, 0xc2, VAR_7);

  FUNC_3(VAR_3, 0xde, VAR_8);
  FUNC_3(VAR_3, 0xdf, (VAR_10 & 0xf0) | ((VAR_9 >> 4) & 0x0f));
  return 0;
 }
 case 130:
  VAR_4->rgb_quantization_range = VAR_2->val;
  FUNC_5(VAR_3);
  return 0;
 }
 return -VAR_0;
}
