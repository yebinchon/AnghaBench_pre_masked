
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_phy {int current_channel; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_efuse {scalar_t__ legacy_ht_txpowerdiff; scalar_t__** txpwrlevel_ht40_2s; scalar_t__** txpwrlevel_ht40_1s; scalar_t__** txpwrlevel_cck; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,long,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,int ,long) ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 struct rtl_efuse* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

bool FUNC_5(struct ieee80211_hw *VAR_4, long VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_4(VAR_4);
 struct rtl_phy *VAR_7 = &VAR_6->phy;
 struct rtl_efuse *VAR_8 = FUNC_3(FUNC_4(VAR_4));
 u8 VAR_9;
 u8 VAR_10;
 u8 VAR_11 = FUNC_1(VAR_4,
            VAR_2,
            VAR_5);
 u8 VAR_12 = FUNC_1(VAR_4,
             VAR_3,
             VAR_5);
 if (VAR_12 - VAR_8->legacy_ht_txpowerdiff > 0)
  VAR_12 -= VAR_8->legacy_ht_txpowerdiff;
 else
  VAR_12 = 0;
 FUNC_0(VAR_6, VAR_0, VAR_1,
   "%lx dBm, ccktxpwridx = %d, ofdmtxpwridx = %d\n",
    VAR_5, VAR_11, VAR_12);
 for (VAR_9 = 0; VAR_9 < 14; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
   VAR_8->txpwrlevel_cck[VAR_10][VAR_9] = VAR_11;
   VAR_8->txpwrlevel_ht40_1s[VAR_10][VAR_9] =
       VAR_12;
   VAR_8->txpwrlevel_ht40_2s[VAR_10][VAR_9] =
       VAR_12;
  }
 }
 FUNC_2(VAR_4, VAR_7->current_channel);
 return 1;
}
