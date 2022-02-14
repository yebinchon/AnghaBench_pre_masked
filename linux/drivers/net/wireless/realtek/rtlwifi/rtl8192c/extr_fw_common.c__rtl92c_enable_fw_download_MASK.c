
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct rtl_hal* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__) ;
 int FUNC_4 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_5 (struct rtl_priv*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_5, bool VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_5);
 struct rtl_hal *VAR_8 = FUNC_0(FUNC_1(VAR_5));

 if (VAR_8->hw_type == VAR_1) {
  u32 VAR_9 = FUNC_3(VAR_7, VAR_3);

  if (VAR_6)
   VAR_9 |= VAR_2;
  else
   VAR_9 &= ~VAR_2;
  FUNC_5(VAR_7, VAR_3, VAR_9);
 } else if (VAR_8->hw_type == VAR_0) {
  u8 VAR_10;

  if (VAR_6) {
   VAR_10 = FUNC_2(VAR_7, VAR_4 + 1);
   FUNC_4(VAR_7, VAR_4 + 1,
           VAR_10 | 0x04);

   VAR_10 = FUNC_2(VAR_7, VAR_3);
   FUNC_4(VAR_7, VAR_3, VAR_10 | 0x01);

   VAR_10 = FUNC_2(VAR_7, VAR_3 + 2);
   FUNC_4(VAR_7, VAR_3 + 2, VAR_10 & 0xf7);
  } else {
   VAR_10 = FUNC_2(VAR_7, VAR_3);
   FUNC_4(VAR_7, VAR_3, VAR_10 & 0xfe);

   FUNC_4(VAR_7, VAR_3 + 1, 0x00);
  }
 }
}
