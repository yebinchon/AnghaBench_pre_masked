
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 struct rtl_hal* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_hw *VAR_1,
        long VAR_2[][8], u8 VAR_3, u8 VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 struct rtl_hal *VAR_10 = FUNC_1(FUNC_2(VAR_1));

 u8 VAR_11[2] = { 0xFF, 0xFF };
 bool VAR_12 = 1, VAR_13 = FUNC_0(VAR_10->version);

 if (VAR_13)
  VAR_9 = 8;
 else
  VAR_9 = 4;

 VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
  VAR_7 = (VAR_2[VAR_3][VAR_5] > VAR_2[VAR_4][VAR_5]) ?
      (VAR_2[VAR_3][VAR_5] - VAR_2[VAR_4][VAR_5]) :
      (VAR_2[VAR_4][VAR_5] - VAR_2[VAR_3][VAR_5]);

  if (VAR_7 > VAR_0) {
   if ((VAR_5 == 2 || VAR_5 == 6) && !VAR_8) {
    if (VAR_2[VAR_3][VAR_5] + VAR_2[VAR_3][VAR_5 + 1] == 0)
     VAR_11[(VAR_5 / 4)] = VAR_4;
    else if (VAR_2[VAR_4][VAR_5] + VAR_2[VAR_4][VAR_5 + 1] == 0)
     VAR_11[(VAR_5 / 4)] = VAR_3;
    else
     VAR_8 = VAR_8 |
         (1 << VAR_5);
   } else
    VAR_8 =
        VAR_8 | (1 << VAR_5);
  }
 }

 if (VAR_8 == 0) {
  for (VAR_5 = 0; VAR_5 < (VAR_9 / 4); VAR_5++) {
   if (VAR_11[VAR_5] != 0xFF) {
    for (VAR_6 = VAR_5 * 4; VAR_6 < (VAR_5 + 1) * 4 - 2; VAR_6++)
     VAR_2[3][VAR_6] =
         VAR_2[VAR_11[VAR_5]][VAR_6];
    VAR_12 = 0;
   }
  }
  return VAR_12;
 } else if (!(VAR_8 & 0x0F)) {
  for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
   VAR_2[3][VAR_5] = VAR_2[VAR_3][VAR_5];
  return 0;
 } else if (!(VAR_8 & 0xF0) && VAR_13) {
  for (VAR_5 = 4; VAR_5 < 8; VAR_5++)
   VAR_2[3][VAR_5] = VAR_2[VAR_3][VAR_5];
  return 0;
 } else {
  return 0;
 }

}
