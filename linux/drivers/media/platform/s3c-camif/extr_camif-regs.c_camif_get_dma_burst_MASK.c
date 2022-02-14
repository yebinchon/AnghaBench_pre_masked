
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(u32 VAR_0, u32 VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 unsigned int VAR_4 = VAR_0 * VAR_1 / 4;
 unsigned int VAR_5, VAR_6;

 if (FUNC_0(VAR_0 < 8 || (VAR_0 * VAR_1) & 7))
  return;

 for (VAR_5 = 16; VAR_5 >= 2; VAR_5 /= 2) {
  if (VAR_4 < VAR_5)
   continue;

  VAR_6 = VAR_4 & (VAR_5 - 1);
  if (VAR_6 == 0) {
   *VAR_2 = VAR_5;
   *VAR_3 = VAR_5;
   break;
  }
  if (VAR_6 == VAR_5 / 2 || VAR_6 == VAR_5 / 4) {
   *VAR_2 = VAR_5;
   *VAR_3 = VAR_6;
   break;
  }
 }
}
