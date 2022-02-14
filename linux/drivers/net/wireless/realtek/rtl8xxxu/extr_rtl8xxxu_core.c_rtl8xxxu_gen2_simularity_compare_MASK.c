
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8xxxu_priv {int tx_paths; } ;


 int VAR_0 ;

bool FUNC_0(struct rtl8xxxu_priv *VAR_1,
          int VAR_2[][8], int VAR_3, int VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 int VAR_10[2] = {-1, -1};
 int VAR_11, VAR_12;
 bool VAR_13 = 1;

 if (VAR_1->tx_paths > 1)
  VAR_9 = 8;
 else
  VAR_9 = 4;

 VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
  if (VAR_5 & 1) {
   if ((VAR_2[VAR_3][VAR_5] & 0x00000200))
    VAR_11 = VAR_2[VAR_3][VAR_5] | 0xfffffc00;
   else
    VAR_11 = VAR_2[VAR_3][VAR_5];

   if ((VAR_2[VAR_4][VAR_5]& 0x00000200))
    VAR_12 = VAR_2[VAR_4][VAR_5] | 0xfffffc00;
   else
    VAR_12 = VAR_2[VAR_4][VAR_5];
  } else {
   VAR_11 = VAR_2[VAR_3][VAR_5];
   VAR_12 = VAR_2[VAR_4][VAR_5];
  }

  VAR_7 = (VAR_11 > VAR_12) ? (VAR_11 - VAR_12) : (VAR_12 - VAR_11);

  if (VAR_7 > VAR_0) {
   if ((VAR_5 == 2 || VAR_5 == 6) && !VAR_8) {
    if (VAR_2[VAR_3][VAR_5] + VAR_2[VAR_3][VAR_5 + 1] == 0)
     VAR_10[(VAR_5 / 4)] = VAR_4;
    else if (VAR_2[VAR_4][VAR_5] + VAR_2[VAR_4][VAR_5 + 1] == 0)
     VAR_10[(VAR_5 / 4)] = VAR_3;
    else
     VAR_8 = VAR_8 | (1 << VAR_5);
   } else {
    VAR_8 = VAR_8 | (1 << VAR_5);
   }
  }
 }

 if (VAR_8 == 0) {
  for (VAR_5 = 0; VAR_5 < (VAR_9 / 4); VAR_5++) {
   if (VAR_10[VAR_5] >= 0) {
    for (VAR_6 = VAR_5 * 4; VAR_6 < (VAR_5 + 1) * 4 - 2; VAR_6++)
     VAR_2[3][VAR_6] = VAR_2[VAR_10[VAR_5]][VAR_6];
    VAR_13 = 0;
   }
  }
  return VAR_13;
 } else {
  if (!(VAR_8 & 0x03)) {

   for (VAR_5 = 0; VAR_5 < 2; VAR_5++)
    VAR_2[3][VAR_5] = VAR_2[VAR_3][VAR_5];
  }

  if (!(VAR_8 & 0x0c)) {

   for (VAR_5 = 2; VAR_5 < 4; VAR_5++)
    VAR_2[3][VAR_5] = VAR_2[VAR_3][VAR_5];
  }

  if (!(VAR_8 & 0x30) && VAR_1->tx_paths > 1) {

   for (VAR_5 = 4; VAR_5 < 6; VAR_5++)
    VAR_2[3][VAR_5] = VAR_2[VAR_3][VAR_5];
  }

  if (!(VAR_8 & 0x30) && VAR_1->tx_paths > 1) {

   for (VAR_5 = 6; VAR_5 < 8; VAR_5++)
    VAR_2[3][VAR_5] = VAR_2[VAR_3][VAR_5];
  }
 }

 return 0;
}
