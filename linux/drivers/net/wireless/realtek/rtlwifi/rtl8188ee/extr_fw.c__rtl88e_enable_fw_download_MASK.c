
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,scalar_t__) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2, bool VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5;

 if (VAR_3) {
  VAR_5 = FUNC_1(VAR_4, VAR_1 + 1);
  FUNC_2(VAR_4, VAR_1 + 1, VAR_5 | 0x04);

  VAR_5 = FUNC_1(VAR_4, VAR_0);
  FUNC_2(VAR_4, VAR_0, VAR_5 | 0x01);

  VAR_5 = FUNC_1(VAR_4, VAR_0 + 2);
  FUNC_2(VAR_4, VAR_0 + 2, VAR_5 & 0xf7);
 } else {
  VAR_5 = FUNC_1(VAR_4, VAR_0);
  FUNC_2(VAR_4, VAR_0, VAR_5 & 0xfe);

  FUNC_2(VAR_4, VAR_0 + 1, 0x00);
 }
}
