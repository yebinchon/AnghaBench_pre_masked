
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_dec23_private {unsigned char** table_bitpowermask; } ;



__attribute__((used)) static void FUNC_0(struct pwc_dec23_private *VAR_0)
{
 unsigned char *VAR_1;
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5;
 unsigned int VAR_6 = 1;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_4 = VAR_6 - 1;
  VAR_1 = VAR_0->table_bitpowermask[VAR_2];
  for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
   VAR_5 = (VAR_3 & VAR_4);
   if (VAR_3 & VAR_6)
    VAR_5 = -VAR_5;
   *VAR_1++ = VAR_5;
  }
  VAR_6<<=1;
 }
}
