
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,scalar_t__,int) ;

void FUNC_2(struct ieee80211_hw *VAR_9,
        u8 VAR_10, bool VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_0(VAR_9);

 if (VAR_10 >= VAR_6 && VAR_10 <= VAR_2) {
  if (VAR_11 == 1) {
   if (VAR_10 == VAR_2) {
    FUNC_1(VAR_12, VAR_8, 0x0);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x07060501);
   } else if (VAR_10 == VAR_1) {
    FUNC_1(VAR_12, VAR_8, 0x0);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x07070605);
   } else if (VAR_10 == VAR_0) {
    FUNC_1(VAR_12, VAR_8, 0x0);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x08080706);
   } else if (VAR_10 == VAR_7) {
    FUNC_1(VAR_12, VAR_8, 0x0);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x08080707);
   } else {
    FUNC_1(VAR_12, VAR_8, 0x0);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x09090808);
   }
  } else {
   if (VAR_10 == VAR_2) {
    FUNC_1(VAR_12, VAR_8,
      0x05010000);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x09080706);
   } else if (VAR_10 == VAR_1) {
    FUNC_1(VAR_12, VAR_8,
      0x06050000);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x09080807);
   } else if (VAR_10 == VAR_0) {
    FUNC_1(VAR_12, VAR_8,
      0x07060000);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x0a090908);
   } else if (VAR_10 == VAR_7) {
    FUNC_1(VAR_12, VAR_8,
      0x07070000);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x0a090808);
   } else {
    FUNC_1(VAR_12, VAR_8,
      0x08080000);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x0b0a0909);
   }
  }
 } else {
  if (VAR_11 == 1) {
   if (VAR_10 == VAR_5) {
    FUNC_1(VAR_12, VAR_8,
      0x00000000);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x05040302);
   } else if (VAR_10 == VAR_4) {
    FUNC_1(VAR_12, VAR_8,
      0x00000000);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x06050302);
   } else if (VAR_10 == VAR_3) {
    FUNC_1(VAR_12, VAR_8,
      0x00000000);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x07060502);
   } else {
    FUNC_1(VAR_12, VAR_8,
      0x00000000);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x06050402);
   }
  } else{
   if (VAR_10 == VAR_5) {
    FUNC_1(VAR_12, VAR_8,
      0x03020000);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x07060504);
   } else if (VAR_10 == VAR_4) {
    FUNC_1(VAR_12, VAR_8,
      0x03020000);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x08070605);
   } else if (VAR_10 == VAR_3) {
    FUNC_1(VAR_12, VAR_8,
      0x05020000);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x09080706);
   } else {
    FUNC_1(VAR_12, VAR_8,
      0x04020000);
    FUNC_1(VAR_12, VAR_8 + 4,
      0x08070605);
   }
  }
 }
}
