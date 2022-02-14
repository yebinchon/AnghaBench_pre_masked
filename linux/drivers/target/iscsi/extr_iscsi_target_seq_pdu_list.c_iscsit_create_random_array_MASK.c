
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int*,int) ;

__attribute__((used)) static void FUNC_1(u32 *VAR_0, u32 VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 if (VAR_1 == 1) {
  VAR_0[0] = 0;
  return;
 }

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
redo:
  FUNC_0(&VAR_3, sizeof(u32));
  VAR_3 = (1 + (int) (9999 + 1) - VAR_3) % VAR_1;
  for (VAR_4 = 0; VAR_4 < VAR_2 + 1; VAR_4++) {
   VAR_3 |= 0x80000000;
   if ((VAR_0[VAR_4] & 0x80000000) && (VAR_0[VAR_4] == VAR_3))
    goto redo;
  }
  VAR_0[VAR_2] = VAR_3;
 }

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  VAR_0[VAR_2] &= ~0x80000000;
}
