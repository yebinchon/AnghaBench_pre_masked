
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, const u8 *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = 0;

 while (VAR_3 < VAR_2 - 2) {
  VAR_0[VAR_3] = VAR_1[VAR_3 + 2];
  VAR_0[VAR_3 + 1] = VAR_1[VAR_3 + 1];
  VAR_0[VAR_3 + 2] = VAR_1[VAR_3];
  VAR_3 += 3;
 }
}
