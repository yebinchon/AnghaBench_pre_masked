
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,scalar_t__,int*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_2, u16 *VAR_3,
    u8 VAR_4, u8 VAR_5, u8 *VAR_6,
    u8 *VAR_7)
{
 bool VAR_8 = 1;
 u8 VAR_9;
 u8 VAR_10;
 u8 VAR_11;
 u8 VAR_12;

 VAR_9 = (VAR_4 >> 4) & 0x0F;
 VAR_11 = VAR_4 & 0x0F;
 VAR_12 = FUNC_0(VAR_11);

 if (VAR_9 == VAR_5) {
  for (VAR_10 = 0; VAR_10 < VAR_12 * 2; VAR_10++) {
   if (FUNC_1(VAR_2, *VAR_3 + 1 + VAR_10,
      &VAR_4)) {
    VAR_6[VAR_10] = VAR_4;
    if (VAR_4 != 0xff)
     VAR_8 = 0;
   }
  }

  if (!VAR_8) {
   *VAR_7 = VAR_0;
  } else {
   *VAR_3 = *VAR_3 + (VAR_12 * 2) + 1;
   *VAR_7 = VAR_1;
  }

 } else {
  *VAR_3 = *VAR_3 + (VAR_12 * 2) + 1;
  *VAR_7 = VAR_1;
 }
}
