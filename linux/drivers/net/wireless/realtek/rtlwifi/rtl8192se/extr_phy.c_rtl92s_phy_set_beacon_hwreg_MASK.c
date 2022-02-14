
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__,int) ;

void FUNC_3(struct ieee80211_hw *VAR_2, u16 VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5 = 0;

 if (FUNC_0(VAR_4) >= 0x33) {

  FUNC_2(VAR_4, VAR_1, 0xF1000000 |
    (VAR_3 << 8));
 } else {
  VAR_5 = VAR_3 * 32 - 64;
  FUNC_2(VAR_4, VAR_0 + 4, VAR_5);
  FUNC_2(VAR_4, VAR_0, 0xB026007C);
 }
}
