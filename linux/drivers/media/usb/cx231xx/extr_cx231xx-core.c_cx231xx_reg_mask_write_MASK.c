
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cx231xx {int dummy; } ;


 int FUNC_0 (struct cx231xx*,int,int ,int,int*,int) ;
 int FUNC_1 (struct cx231xx*,int,int ,int,int,int) ;

int FUNC_2(struct cx231xx *VAR_0, u8 VAR_1, u8 VAR_2,
      u16 VAR_3, u8 VAR_4, u8 VAR_5,
      u32 VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8;
 u32 VAR_9 = 0;
 int VAR_10;

 if (VAR_4 > (VAR_2 - 1) || VAR_5 > (VAR_2 - 1))
  return -1;

 if (VAR_2 == 8) {
  VAR_7 =
      FUNC_0(VAR_0, VAR_1, VAR_3, 2,
       &VAR_8, 1);
 } else {
  VAR_7 =
      FUNC_0(VAR_0, VAR_1, VAR_3, 2,
       &VAR_8, 4);
 }

 if (VAR_7 < 0)
  return VAR_7;

 VAR_9 = 1 << VAR_5;
 for (VAR_10 = VAR_5; VAR_10 > VAR_4 && VAR_10 > 0; VAR_10--)
  VAR_9 = VAR_9 + (1 << (VAR_10 - 1));

 VAR_6 <<= VAR_4;

 if (VAR_2 == 8) {
  VAR_8 &= ~VAR_9;
  VAR_8 |= VAR_6;
  VAR_8 &= 0xff;
  VAR_7 =
      FUNC_1(VAR_0, VAR_1, VAR_3, 2,
        VAR_8, 1);
 } else {
  VAR_8 &= ~VAR_9;
  VAR_8 |= VAR_6;
  VAR_7 =
      FUNC_1(VAR_0, VAR_1, VAR_3, 2,
        VAR_8, 4);
 }

 return VAR_7;
}
