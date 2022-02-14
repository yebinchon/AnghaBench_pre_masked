
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(void)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_1[0] = 0;
 for (VAR_2 = 1; VAR_2 < 256; VAR_2++)
  VAR_1[VAR_2] = (VAR_1[VAR_2&(VAR_2-1)] ^ 1);

 for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
  VAR_4 = 0;
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   if (VAR_2 & (1<<VAR_3)) {
    if ((VAR_3 & 1) == 0)
     VAR_4 ^= 0x04;
    if ((VAR_3 & 2) == 0)
     VAR_4 ^= 0x10;
    if ((VAR_3 & 4) == 0)
     VAR_4 ^= 0x40;
   }
  }
  VAR_0[VAR_2] = ~(VAR_4 ^ (VAR_4<<1) ^ (VAR_1[VAR_2] ? 0xa8 : 0));
 }
}
