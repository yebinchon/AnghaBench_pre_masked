
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





 int FUNC_10 (struct solo_dev*,int) ;
 int FUNC_11 (struct solo_dev*,int ,int ,int ) ;
 void* FUNC_12 (struct solo_dev*,int,int ,int ) ;

int FUNC_13(struct solo_dev *VAR_2, u32 VAR_3, u8 VAR_4,
        s32 *VAR_5)
{
 u8 VAR_6, VAR_7;


 VAR_7 = VAR_4 / 4;
 VAR_4 %= 4;

 switch (VAR_3) {
 case 128:

  if (FUNC_10(VAR_2, VAR_7)) {
   VAR_6 = FUNC_11(VAR_2, VAR_1,
       FUNC_6(VAR_7),
       FUNC_4(VAR_7));
   *VAR_5 = VAR_6 & 0x0f;
  } else
   *VAR_5 = 0;
  break;
 case 130:
  VAR_6 = FUNC_12(VAR_2, VAR_7, FUNC_2(VAR_4),
       FUNC_8(VAR_4));
  if (FUNC_10(VAR_2, VAR_7))
   *VAR_5 = (s32)((char)VAR_6) + 128;
  else
   *VAR_5 = VAR_6;
  break;
 case 129:
  *VAR_5 = FUNC_12(VAR_2, VAR_7,
       FUNC_3(VAR_4),
       FUNC_9(VAR_4));
  break;
 case 131:
  *VAR_5 = FUNC_12(VAR_2, VAR_7,
       FUNC_1(VAR_4),
       FUNC_7(VAR_4));
  break;
 case 132:
  VAR_6 = FUNC_12(VAR_2, VAR_7,
       FUNC_0(VAR_4),
       FUNC_5(VAR_4));
  if (FUNC_10(VAR_2, VAR_7))
   *VAR_5 = (s32)((char)VAR_6) + 128;
  else
   *VAR_5 = VAR_6;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
