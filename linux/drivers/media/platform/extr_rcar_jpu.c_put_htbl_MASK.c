
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, const u8 *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 4)
  for (VAR_4 = 0; VAR_4 < 4 && (VAR_3 + VAR_4) < VAR_2; ++VAR_4)
   VAR_0[VAR_3 + VAR_4] = VAR_1[VAR_3 + 3 - VAR_4];
}
