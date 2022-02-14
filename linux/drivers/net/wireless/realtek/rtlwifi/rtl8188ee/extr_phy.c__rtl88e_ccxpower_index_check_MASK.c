
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct rtl_phy {void* cur_bw40_txpwridx; void* cur_bw20_txpwridx; void* cur_ofdm24g_txpwridx; void* cur_cck_txpwridx; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0,
      u8 VAR_1, u8 *VAR_2,
      u8 *VAR_3, u8 *VAR_4,
      u8 *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_0(VAR_0);
 struct rtl_phy *VAR_7 = &VAR_6->phy;

 VAR_7->cur_cck_txpwridx = VAR_2[0];
 VAR_7->cur_ofdm24g_txpwridx = VAR_3[0];
 VAR_7->cur_bw20_txpwridx = VAR_4[0];
 VAR_7->cur_bw40_txpwridx = VAR_5[0];

}
