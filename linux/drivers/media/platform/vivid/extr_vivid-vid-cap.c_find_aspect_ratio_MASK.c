
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static void FUNC_0(u32 VAR_0, u32 VAR_1,
          u32 *VAR_2, u32 *VAR_3)
{
 if (!(VAR_1 % 3) && ((VAR_1 * 4 / 3) == VAR_0)) {
  *VAR_2 = 4;
  *VAR_3 = 3;
 } else if (!(VAR_1 % 9) && ((VAR_1 * 16 / 9) == VAR_0)) {
  *VAR_2 = 16;
  *VAR_3 = 9;
 } else if (!(VAR_1 % 10) && ((VAR_1 * 16 / 10) == VAR_0)) {
  *VAR_2 = 16;
  *VAR_3 = 10;
 } else if (!(VAR_1 % 4) && ((VAR_1 * 5 / 4) == VAR_0)) {
  *VAR_2 = 5;
  *VAR_3 = 4;
 } else if (!(VAR_1 % 9) && ((VAR_1 * 15 / 9) == VAR_0)) {
  *VAR_2 = 15;
  *VAR_3 = 9;
 } else {
  *VAR_2 = 16;
  *VAR_3 = 9;
 }
}
