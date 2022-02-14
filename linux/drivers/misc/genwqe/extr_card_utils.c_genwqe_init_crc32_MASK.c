
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int* VAR_1 ;

void FUNC_0(void)
{
 int VAR_2, VAR_3;
 u32 VAR_4;

 for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
  VAR_4 = VAR_2 << 24;
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   if (VAR_4 & 0x80000000)
    VAR_4 = (VAR_4 << 1) ^ VAR_0;
   else
    VAR_4 = (VAR_4 << 1);
  }
  VAR_1[VAR_2] = VAR_4;
 }
}
