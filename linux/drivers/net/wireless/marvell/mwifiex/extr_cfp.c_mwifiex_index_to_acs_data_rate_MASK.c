
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mwifiex_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int** VAR_4 ;
 int** VAR_5 ;
 int** VAR_6 ;
 int FUNC_0 (int,int) ;
 int* VAR_7 ;

u32 FUNC_1(struct mwifiex_private *VAR_8,
       u8 VAR_9, u8 VAR_10)
{
 u32 VAR_11 = 0;
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;
 u8 VAR_14 = 0;

 if ((VAR_10 & 0x3) == VAR_2) {
  VAR_12 = FUNC_0(VAR_9 & 0xF, 9);


  VAR_13 = (VAR_10 & 0xC) >> 2;


  VAR_14 = (VAR_10 & 0x10) >> 4;

  if ((VAR_9 >> 4) == 1)
   VAR_11 = VAR_5[2 * (3 - VAR_13) + VAR_14][VAR_12];
  else
   VAR_11 = VAR_4[2 * (3 - VAR_13) + VAR_14][VAR_12];
 } else if ((VAR_10 & 0x3) == VAR_1) {

  VAR_13 = (VAR_10 & 0xC) >> 2;


  VAR_14 = (VAR_10 & 0x10) >> 4;

  if (VAR_9 == VAR_0) {
   if (VAR_14 == 1)
    VAR_11 = 0x0D;
   else
    VAR_11 = 0x0C;
  } else if (VAR_9 < 16) {
   if ((VAR_13 == 1) || (VAR_13 == 0))
    VAR_11 = VAR_6[2 * (1 - VAR_13) + VAR_14][VAR_9];
   else
    VAR_11 = VAR_7[0];
  } else {
   VAR_11 = VAR_7[0];
  }
 } else {

  if (VAR_9 >= VAR_3)
   VAR_9 = 0;
  VAR_11 = VAR_7[VAR_9];
 }

 return VAR_11;
}
