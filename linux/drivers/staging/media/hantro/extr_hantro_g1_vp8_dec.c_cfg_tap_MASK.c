
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_ctrl_vp8_frame_header {int version; } ;
struct hantro_reg {int mask; int shift; int base; } ;
struct hantro_dev {int dummy; } ;
struct hantro_ctx {struct hantro_dev* dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct hantro_dev*,struct hantro_reg*,int) ;
 int** VAR_0 ;
 struct hantro_reg** VAR_1 ;

__attribute__((used)) static void FUNC_2(struct hantro_ctx *VAR_2,
      const struct v4l2_ctrl_vp8_frame_header *VAR_3)
{
 struct hantro_dev *VAR_4 = VAR_2->dev;
 struct hantro_reg VAR_5;
 u32 VAR_6 = 0;
 int VAR_7, VAR_8;

 VAR_5.base = FUNC_0(3);
 VAR_5.mask = 0xf;

 if ((VAR_3->version & 0x03) != 0)
  return;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_6 = (VAR_0[VAR_7][0] << 2) |
         VAR_0[VAR_7][5];

  for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
   FUNC_1(VAR_4, &VAR_1[VAR_7][VAR_8],
      VAR_0[VAR_7][VAR_8 + 1]);

  switch (VAR_7) {
  case 2:
   VAR_5.shift = 8;
   break;
  case 4:
   VAR_5.shift = 4;
   break;
  case 6:
   VAR_5.shift = 0;
   break;
  default:
   continue;
  }

  FUNC_1(VAR_4, &VAR_5, VAR_6);
 }
}
