
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct rtl_hal {int version; } ;
struct rtl_priv {struct rtl_hal rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_2(struct ieee80211_hw *VAR_1,
 long VAR_2[][8], u8 VAR_3, u8 VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_1);
 struct rtl_hal *VAR_6 = &(VAR_5->rtlhal);
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 u8 VAR_12[2] = {0xFF, 0xFF};
 bool VAR_13 = 1;
 bool VAR_14 = FUNC_0(VAR_6->version);

 if (VAR_14)
  VAR_11 = 8;
 else
  VAR_11 = 4;
 VAR_10 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
  VAR_9 = (VAR_2[VAR_3][VAR_7] > VAR_2[VAR_4][VAR_7]) ? (VAR_2[VAR_3][VAR_7] -
         VAR_2[VAR_4][VAR_7]) : (VAR_2[VAR_4][VAR_7] - VAR_2[VAR_3][VAR_7]);
  if (VAR_9 > VAR_0) {
   if ((VAR_7 == 2 || VAR_7 == 6) && !VAR_10) {
    if (VAR_2[VAR_3][VAR_7] + VAR_2[VAR_3][VAR_7 + 1] == 0)
     VAR_12[(VAR_7 / 4)] = VAR_4;
    else if (VAR_2[VAR_4][VAR_7] + VAR_2[VAR_4][VAR_7 + 1] == 0)
     VAR_12[(VAR_7 / 4)] = VAR_3;
    else
     VAR_10 = VAR_10 | (1 << VAR_7);
   } else {
    VAR_10 = VAR_10 | (1 << VAR_7);
   }
  }
 }
 if (VAR_10 == 0) {
  for (VAR_7 = 0; VAR_7 < (VAR_11 / 4); VAR_7++) {
   if (VAR_12[VAR_7] != 0xFF) {
    for (VAR_8 = VAR_7 * 4; VAR_8 < (VAR_7 + 1) * 4 - 2; VAR_8++)
     VAR_2[3][VAR_8] =
       VAR_2[VAR_12[VAR_7]][VAR_8];
    VAR_13 = 0;
   }
  }
  return VAR_13;
 }
 if (!(VAR_10 & 0x0F)) {
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
   VAR_2[3][VAR_7] = VAR_2[VAR_3][VAR_7];
 } else if (!(VAR_10 & 0x03)) {
  for (VAR_7 = 0; VAR_7 < 2; VAR_7++)
   VAR_2[3][VAR_7] = VAR_2[VAR_3][VAR_7];
 }
 if (!(VAR_10 & 0xF0) && VAR_14) {
  for (VAR_7 = 4; VAR_7 < 8; VAR_7++)
   VAR_2[3][VAR_7] = VAR_2[VAR_3][VAR_7];
 } else if (!(VAR_10 & 0x30)) {
  for (VAR_7 = 4; VAR_7 < 6; VAR_7++)
   VAR_2[3][VAR_7] = VAR_2[VAR_3][VAR_7];
 }
 return 0;
}
