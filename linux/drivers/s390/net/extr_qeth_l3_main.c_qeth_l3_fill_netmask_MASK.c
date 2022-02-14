
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int len ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, unsigned int VAR_1)
{
 int VAR_2, VAR_3;
 for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
  VAR_3 = (VAR_1) - (VAR_2 * 8);
  if (VAR_3 >= 8)
   VAR_0[VAR_2] = 0xff;
  else if (VAR_3 > 0)
   VAR_0[VAR_2] = (u8)(0xFF00 >> VAR_3);
  else
   VAR_0[VAR_2] = 0;
 }
}
