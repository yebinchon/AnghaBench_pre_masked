
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,scalar_t__,int*) ;

__attribute__((used)) static u16 FUNC_2(struct ieee80211_hw *VAR_1)
{
 int VAR_2 = 1;
 u16 VAR_3 = 0;
 u8 VAR_4, VAR_5;
 u8 VAR_6, VAR_7;

 while (VAR_2 && FUNC_1(VAR_1, VAR_3, &VAR_6) &&
        (VAR_3 < VAR_0)) {
  if (VAR_6 != 0xFF) {
   VAR_4 = (VAR_6 >> 4) & 0x0F;
   VAR_5 = VAR_6 & 0x0F;
   VAR_7 = FUNC_0(VAR_5);
   VAR_3 = VAR_3 + (VAR_7 * 2) + 1;
  } else {
   VAR_2 = 0;
  }
 }

 return VAR_3;
}
