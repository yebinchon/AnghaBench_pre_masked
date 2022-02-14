
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ar9170 {int dummy; } ;
typedef enum carl9170_bw { ____Placeholder_carl9170_bw } carl9170_bw ;


 int FUNC_0 () ;



 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct ar9170*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct ar9170 *VAR_1, bool VAR_2,
          u32 VAR_3, enum carl9170_bw VAR_4)
{
 int VAR_5;
 u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 u8 VAR_12;
 u8 VAR_13 = 1, VAR_14 = 0;
 u8 VAR_15 = 0;

 switch (VAR_4) {
 case 129:
  VAR_3 += 10;
  break;
 case 128:
  VAR_3 -= 10;
  break;
 case 130:
  break;
 default:
  FUNC_0();
  return -VAR_0;
 }

 if (VAR_2) {
  if (VAR_3 % 10) {
   VAR_12 = (VAR_3 - 4800) / 5;
  } else {
   VAR_12 = ((VAR_3 - 4800) / 10) * 2;
   VAR_13 = 0;
   VAR_14 = 1;
  }
  VAR_12 = FUNC_1(VAR_12);
 } else {
  if (VAR_3 == 2484) {
   VAR_12 = 10 + (VAR_3 - 2274) / 5;
   VAR_15 = 1;
  } else
   VAR_12 = 16 + (VAR_3 - 2272) / 5;
  VAR_12 *= 4;
  VAR_12 = FUNC_1(VAR_12);
 }

 VAR_7 = VAR_12;
 VAR_6 = 0x21 |
  VAR_13 << 3 |
  VAR_14 << 2 |
  VAR_15 << 1;
 VAR_8 = VAR_6 & 0x1f;
 VAR_9 = VAR_7 & 0x1f;
 VAR_10 = VAR_9 << 5 | VAR_8;

 VAR_8 = (VAR_6 >> 5) & 0x7;
 VAR_9 = (VAR_7 >> 5) & 0x7;
 VAR_11 = VAR_9 << 5 | VAR_8;

 FUNC_3(VAR_1);

 FUNC_2(0x1c58b0, VAR_10);
 FUNC_2(0x1c58e8, VAR_11);

 FUNC_4();
 VAR_5 = FUNC_5();
 if (VAR_5)
  return VAR_5;

 return 0;
}
