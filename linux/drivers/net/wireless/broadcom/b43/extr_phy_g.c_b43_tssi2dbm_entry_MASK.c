
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s8 ;
typedef int s32 ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static s8 FUNC_4(s8 VAR_1[], u8 VAR_2,
        s16 VAR_3, s16 VAR_4, s16 VAR_5)
{
 s32 VAR_6, VAR_7, VAR_8 = 256, VAR_9, VAR_10;
 s8 VAR_11 = 0;

 VAR_6 = FUNC_1(16 * VAR_3 + VAR_2 * VAR_4, 32);
 VAR_7 = FUNC_3(FUNC_1(32768 + VAR_2 * VAR_5, 256), 1);
 do {
  if (VAR_11 > 15)
   return -VAR_0;
  VAR_9 = FUNC_1(VAR_8 * 4096 -
        FUNC_1(VAR_7 * VAR_8, 16) * VAR_8, 2048);
  VAR_10 = FUNC_0(VAR_9 - VAR_8);
  VAR_8 = VAR_9;
  VAR_11++;
 } while (VAR_10 >= 2);
 VAR_1[VAR_2] = FUNC_2(FUNC_1(VAR_6 * VAR_8, 8192), -127, 128);
 return 0;
}
