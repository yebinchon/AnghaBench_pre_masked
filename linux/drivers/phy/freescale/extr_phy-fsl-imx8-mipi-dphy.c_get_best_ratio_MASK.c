
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static void FUNC_0(u32 *VAR_0, u32 *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = *VAR_0;
 u32 VAR_5 = *VAR_1;
 u32 VAR_6;
 u32 VAR_7[] = {0, 1};
 u32 VAR_8[] = {1, 0};
 u32 VAR_9;
 unsigned int VAR_10 = 1;

 while (VAR_5) {
  VAR_10 ^= 1;
  VAR_9 = VAR_4 / VAR_5;
  VAR_7[VAR_10] += (VAR_7[VAR_10 ^ 1] * VAR_9);
  VAR_8[VAR_10] += (VAR_8[VAR_10 ^ 1] * VAR_9);
  if ((VAR_7[VAR_10] > VAR_2) || (VAR_8[VAR_10] > VAR_3)) {
   VAR_10 ^= 1;
   break;
  }
  VAR_6 = VAR_4 - (VAR_5 * VAR_9);
  VAR_4 = VAR_5;
  VAR_5 = VAR_6;
 }
 *VAR_0 = VAR_7[VAR_10];
 *VAR_1 = VAR_8[VAR_10];
}
