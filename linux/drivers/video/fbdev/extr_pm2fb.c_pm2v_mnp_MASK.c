
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;


 unsigned char VAR_0 ;

__attribute__((used)) static void FUNC_0(u32 VAR_1, unsigned char *VAR_2, unsigned char *VAR_3,
       unsigned char *VAR_4)
{
 unsigned char VAR_5;
 unsigned char VAR_6;
 unsigned char VAR_7;
 u32 VAR_8;
 s32 VAR_9 = 1000;

 *VAR_2 = *VAR_3 = *VAR_4 = 0;
 for (VAR_5 = 1; VAR_5 < 128; VAR_5++) {
  for (VAR_6 = 2 * VAR_5 + 1; VAR_6; VAR_6++) {
   for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
    VAR_8 = (VAR_0 >> (VAR_7 + 1)) * VAR_6 / VAR_5;
    if (VAR_1 > VAR_8 - VAR_9 && VAR_1 < VAR_8 + VAR_9) {
     VAR_9 = (VAR_1 > VAR_8) ? VAR_1 - VAR_8 : VAR_8 - VAR_1;
     *VAR_2 = VAR_5;
     *VAR_3 = VAR_6;
     *VAR_4 = VAR_7;
    }
   }
  }
 }
}
