
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 scalar_t__ FUNC_1 (int*,int,int) ;

int FUNC_2(u8 *VAR_1, int VAR_2, u16 VAR_3, u8 VAR_4, bool VAR_5)
{
 u8 *VAR_6, VAR_7;

 if ((VAR_1[0] & 0x7f) == 0x72) {
  VAR_7 = VAR_1[7];
  VAR_6 = (char *)FUNC_1(VAR_1, VAR_7 + 8, 2);
  if (!VAR_6) {
   VAR_1[7] = VAR_7 + 8;
   VAR_6 = VAR_1 + 8 + VAR_7;
  }

  if (VAR_2 < VAR_7 + 8)

   return -VAR_0;

  VAR_6[0] = 2;
  VAR_6[1] = 6;
  VAR_6[4] = 0x80;
  if (VAR_5)
   VAR_6[4] |= 0x40;
  if (VAR_4 < 0x8)
   VAR_6[4] |= 0x8 | VAR_4;
  FUNC_0(VAR_3, &VAR_6[5]);
 } else if ((VAR_1[0] & 0x7f) == 0x70) {
  VAR_7 = VAR_1[7];
  if (VAR_7 < 18)
   VAR_1[7] = 18;

  VAR_1[15] = 0x80;
  if (VAR_5)
   VAR_1[15] |= 0x40;
  if (VAR_4 < 0x8)
   VAR_1[15] |= 0x8 | VAR_4;
  FUNC_0(VAR_3, &VAR_1[16]);
 }

 return 0;
}
