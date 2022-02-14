
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int sint ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, u8 *VAR_1, u8 *VAR_2)
{
  sint VAR_3;

  for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
   VAR_2[VAR_3] = VAR_0[VAR_3] ^ VAR_1[VAR_3];
  }
}
