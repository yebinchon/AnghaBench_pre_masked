
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct saa7185 {int* reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 struct saa7185* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
        u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct saa7185 *VAR_5 = FUNC_1(VAR_1);




 switch (VAR_2) {
 case 0:

  FUNC_0(VAR_1, 0x3a, 0x0f);

  FUNC_0(VAR_1, 0x61, (VAR_5->reg[0x61] & 0xf7) | 0x08);
  FUNC_0(VAR_1, 0x6e, 0x01);
  break;

 case 1:

  FUNC_0(VAR_1, 0x3a, 0x0f);

  FUNC_0(VAR_1, 0x61, (VAR_5->reg[0x61] & 0xf7) | 0x00);

  FUNC_0(VAR_1, 0x6e, 0x00);
  break;

 case 2:

  FUNC_0(VAR_1, 0x3a, 0x8f);

  FUNC_0(VAR_1, 0x61, (VAR_5->reg[0x61] & 0xf7) | 0x08);

  FUNC_0(VAR_1, 0x6e, 0x01);
  break;

 default:
  return -VAR_0;
 }
 return 0;
}
