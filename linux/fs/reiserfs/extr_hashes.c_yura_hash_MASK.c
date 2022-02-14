
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



u32 FUNC_0(const signed char *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 u32 VAR_4, VAR_5;
 int VAR_6;

 for (VAR_3 = 1, VAR_6 = 1; VAR_6 < VAR_1; VAR_6++)
  VAR_3 = VAR_3 * 10;

 if (VAR_1 == 1)
  VAR_4 = VAR_0[0] - 48;
 else
  VAR_4 = (VAR_0[0] - 48) * VAR_3;

 for (VAR_6 = 1; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = VAR_0[VAR_6] - 48;
  for (VAR_3 = 1, VAR_2 = VAR_6; VAR_2 < VAR_1 - 1; VAR_2++)
   VAR_3 = VAR_3 * 10;
  VAR_4 = VAR_4 + VAR_5 * VAR_3;
 }

 for (; VAR_6 < 40; VAR_6++) {
  VAR_5 = '0' - 48;
  for (VAR_3 = 1, VAR_2 = VAR_6; VAR_2 < VAR_1 - 1; VAR_2++)
   VAR_3 = VAR_3 * 10;
  VAR_4 = VAR_4 + VAR_5 * VAR_3;
 }

 for (; VAR_6 < 256; VAR_6++) {
  VAR_5 = VAR_6;
  for (VAR_3 = 1, VAR_2 = VAR_6; VAR_2 < VAR_1 - 1; VAR_2++)
   VAR_3 = VAR_3 * 10;
  VAR_4 = VAR_4 + VAR_5 * VAR_3;
 }

 VAR_4 = VAR_4 << 7;
 return VAR_4;
}
