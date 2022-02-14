
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int channel_all ;



__attribute__((used)) static u8 FUNC_0(u8 VAR_0)
{
 u8 VAR_1[59] = {
  1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
  36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58,
  60, 62, 64, 100, 102, 104, 106, 108, 110, 112,
  114, 116, 118, 120, 122, 124, 126, 128, 130,
  132, 134, 136, 138, 140, 149, 151, 153, 155,
  157, 159, 161, 163, 165
 };
 u8 VAR_2 = VAR_0;

 if (VAR_0 > 14) {
  for (VAR_2 = 14; VAR_2 < sizeof(VAR_1); VAR_2++) {
   if (VAR_1[VAR_2] == VAR_0)
    return VAR_2 - 13;
  }
 }

 return 0;
}
