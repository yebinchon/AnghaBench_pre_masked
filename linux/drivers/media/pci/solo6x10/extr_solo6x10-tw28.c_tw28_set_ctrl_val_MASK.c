
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct solo_dev {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;





 int FUNC_11 (struct solo_dev*,int) ;
 int FUNC_12 (struct solo_dev*,int ,int ,int ) ;
 int FUNC_13 (struct solo_dev*,int ,int ,int ,int) ;
 int FUNC_14 (struct solo_dev*,int,int ,int ,char) ;

int FUNC_15(struct solo_dev *VAR_3, u32 VAR_4, u8 VAR_5,
        s32 VAR_6)
{
 char VAR_7;
 u8 VAR_8;


 VAR_8 = VAR_5 / 4;
 VAR_5 %= 4;

 if (VAR_6 > 255 || VAR_6 < 0)
  return -VAR_1;

 switch (VAR_4) {
 case 128:

  if (FUNC_11(VAR_3, VAR_8)) {
   u8 VAR_9 = FUNC_12(VAR_3, VAR_2,
       FUNC_7(VAR_8),
       FUNC_5(VAR_8));
   VAR_9 &= 0xf0;
   VAR_9 |= VAR_6;
   FUNC_13(VAR_3, VAR_2,
        FUNC_7(VAR_8),
        FUNC_5(VAR_8), VAR_9);
  } else {
   return -VAR_0;
  }
  break;

 case 130:
  if (FUNC_11(VAR_3, VAR_8))
   VAR_7 = VAR_6 - 128;
  else
   VAR_7 = (char)VAR_6;
  FUNC_14(VAR_3, VAR_8, FUNC_2(VAR_5),
        FUNC_9(VAR_5), VAR_7);

  break;

 case 129:

  if (FUNC_11(VAR_3, VAR_8)) {
   FUNC_13(VAR_3, VAR_2,
        FUNC_7(VAR_8),
        FUNC_3(VAR_5), VAR_6);
  }
  FUNC_14(VAR_3, VAR_8, FUNC_4(VAR_5),
        FUNC_10(VAR_5), VAR_6);

  break;

 case 131:
  FUNC_14(VAR_3, VAR_8, FUNC_1(VAR_5),
        FUNC_8(VAR_5), VAR_6);
  break;

 case 132:
  if (FUNC_11(VAR_3, VAR_8))
   VAR_7 = VAR_6 - 128;
  else
   VAR_7 = (char)VAR_6;
  FUNC_14(VAR_3, VAR_8, FUNC_0(VAR_5),
        FUNC_6(VAR_5), VAR_7);

  break;
 default:
  return -VAR_0;
 }

 return 0;
}
