
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



u8 FUNC_0(u8 VAR_0)
{
 u8 VAR_1;
 u8 VAR_2[59] = {
  1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
  36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56,
  58, 60, 62, 64, 100, 102, 104, 106, 108,
  110, 112, 114, 116, 118, 120, 122, 124,
  126, 128, 130, 132, 134, 136, 138, 140,
  149, 151, 153, 155, 157, 159, 161, 163,
  165
 };

 if (VAR_2[VAR_0] <= 3)
  VAR_1 = 0;
 else if (VAR_2[VAR_0] <= 9)
  VAR_1 = 1;
 else if (VAR_2[VAR_0] <= 14)
  VAR_1 = 2;
 else if (VAR_2[VAR_0] <= 44)
  VAR_1 = 3;
 else if (VAR_2[VAR_0] <= 54)
  VAR_1 = 4;
 else if (VAR_2[VAR_0] <= 64)
  VAR_1 = 5;
 else if (VAR_2[VAR_0] <= 112)
  VAR_1 = 6;
 else if (VAR_2[VAR_0] <= 126)
  VAR_1 = 7;
 else if (VAR_2[VAR_0] <= 140)
  VAR_1 = 8;
 else if (VAR_2[VAR_0] <= 153)
  VAR_1 = 9;
 else if (VAR_2[VAR_0] <= 159)
  VAR_1 = 10;
 else
  VAR_1 = 11;
 return VAR_1;
}
