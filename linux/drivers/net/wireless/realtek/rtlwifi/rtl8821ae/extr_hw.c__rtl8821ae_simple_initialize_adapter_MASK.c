
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_ps_ctl {int rfpwr_state; } ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int re_init_llt_table; scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_4 (struct rtl_priv*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_3(VAR_2);
 struct rtl_hal *VAR_4 = FUNC_2(VAR_3);
 struct rtl_ps_ctl *VAR_5 = FUNC_4(VAR_3);







 if (VAR_4->re_init_llt_table) {
  u32 VAR_6 = 0x80e70808;
  u8 VAR_7 = 0, VAR_8 = 0xF8;
  if (VAR_4->hw_type == VAR_1) {
   VAR_6 = 0x80e90808;
   VAR_8 = 0xFA;
  }
  if (FUNC_0(VAR_2, VAR_8, VAR_7, VAR_6))
   VAR_4->re_init_llt_table = 0;
 }

 VAR_5->rfpwr_state = VAR_0;
}
