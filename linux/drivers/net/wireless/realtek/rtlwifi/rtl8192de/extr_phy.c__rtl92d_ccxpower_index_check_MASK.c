
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct rtl_phy {void* cur_ofdm24g_txpwridx; void* cur_cck_txpwridx; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0,
 u8 VAR_1, u8 *VAR_2, u8 *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_0(VAR_0);
 struct rtl_phy *VAR_5 = &(VAR_4->phy);

 VAR_5->cur_cck_txpwridx = VAR_2[0];
 VAR_5->cur_ofdm24g_txpwridx = VAR_3[0];
}
