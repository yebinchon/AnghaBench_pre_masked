
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_phy {scalar_t__ cur_ofdm24g_txpwridx; scalar_t__ cur_cck_txpwridx; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_efuse {scalar_t__ legacy_ht_txpowerdiff; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (struct ieee80211_hw*,int ,scalar_t__) ;
 struct rtl_efuse* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

void FUNC_3(struct ieee80211_hw *VAR_3, long *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_2(VAR_3);
 struct rtl_phy *VAR_6 = &(VAR_5->phy);
 struct rtl_efuse *VAR_7 = FUNC_1(FUNC_2(VAR_3));
 u8 VAR_8;
 long VAR_9;

 VAR_8 = VAR_6->cur_cck_txpwridx;
 VAR_9 = FUNC_0(VAR_3, VAR_0,
       VAR_8);
 VAR_8 = VAR_6->cur_ofdm24g_txpwridx +
     VAR_7->legacy_ht_txpowerdiff;
 if (FUNC_0(VAR_3, VAR_1,
      VAR_8) > VAR_9)
  VAR_9 =
      FUNC_0(VAR_3, VAR_1,
       VAR_8);
 VAR_8 = VAR_6->cur_ofdm24g_txpwridx;
 if (FUNC_0(VAR_3, VAR_2,
      VAR_8) > VAR_9)
  VAR_9 =
      FUNC_0(VAR_3, VAR_2,
       VAR_8);
 *VAR_4 = VAR_9;
}
