
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, const u8 *VAR_1, u32 VAR_2, bool VAR_3)
{
 static const unsigned VAR_4[8] = { 0, 1, 5, 4, 2, 3, 6, 7 };
 unsigned VAR_5 = 0;

 while (VAR_2 >= (VAR_3 ? 4 : 2)) {
  unsigned VAR_6 = VAR_4[VAR_5] * 4;
  u32 VAR_7 = VAR_1[VAR_6 + 1] + (VAR_1[VAR_6 + 2] << 8) +
    (VAR_1[VAR_6 + 3] << 16);

  if (VAR_3) {
   *VAR_0++ = 0;
   *VAR_0++ = VAR_7 & 0xff;
  }
  *VAR_0++ = (VAR_7 >> 8) & 0xff;
  *VAR_0++ = (VAR_7 >> 16) & 0xff;
  VAR_2 -= VAR_3 ? 4 : 2;
  VAR_5++;
 }
}
