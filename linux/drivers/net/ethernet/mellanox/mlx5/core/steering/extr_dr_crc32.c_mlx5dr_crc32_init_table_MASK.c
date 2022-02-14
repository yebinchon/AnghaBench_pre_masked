
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int**,int,int) ;
 int** VAR_1 ;

void FUNC_1(void)
{
 u32 VAR_2, VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
  VAR_2 = VAR_3;
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
   if (VAR_2 & 0x00000001L)
    VAR_2 = (VAR_2 >> 1) ^ VAR_0;
   else
    VAR_2 = VAR_2 >> 1;
  }
  VAR_1[0][VAR_3] = VAR_2;
 }


 for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
  FUNC_0(VAR_1, 1, VAR_3);
  FUNC_0(VAR_1, 2, VAR_3);
  FUNC_0(VAR_1, 3, VAR_3);
  FUNC_0(VAR_1, 4, VAR_3);
  FUNC_0(VAR_1, 5, VAR_3);
  FUNC_0(VAR_1, 6, VAR_3);
  FUNC_0(VAR_1, 7, VAR_3);
 }
}
