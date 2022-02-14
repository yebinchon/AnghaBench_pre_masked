
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_phy {void****** txpwr_limit_5g; void****** txpwr_limit_2_4g; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 void* VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_1(VAR_10);
 struct rtl_phy *VAR_12 = &VAR_11->phy;
 u8 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 FUNC_0(VAR_11, VAR_2, VAR_3,
   "=====> _rtl8821ae_phy_init_txpower_limit()!\n");

 for (VAR_13 = 0; VAR_13 < VAR_8; ++VAR_13) {
  for (VAR_14 = 0; VAR_14 < VAR_4; ++VAR_14)
   for (VAR_15 = 0; VAR_15 < VAR_7; ++VAR_15)
    for (VAR_17 = 0; VAR_17 < VAR_0; ++VAR_17)
     for (VAR_16 = 0; VAR_16 < VAR_9; ++VAR_16)
      VAR_12->txpwr_limit_2_4g
        [VAR_13][VAR_14][VAR_15][VAR_17][VAR_16]
       = VAR_6;
 }
 for (VAR_13 = 0; VAR_13 < VAR_8; ++VAR_13) {
  for (VAR_14 = 0; VAR_14 < VAR_5; ++VAR_14)
   for (VAR_15 = 0; VAR_15 < VAR_7; ++VAR_15)
    for (VAR_17 = 0; VAR_17 < VAR_1; ++VAR_17)
     for (VAR_16 = 0; VAR_16 < VAR_9; ++VAR_16)
      VAR_12->txpwr_limit_5g
        [VAR_13][VAR_14][VAR_15][VAR_17][VAR_16]
       = VAR_6;
 }

 FUNC_0(VAR_11, VAR_2, VAR_3,
   "<===== _rtl8821ae_phy_init_txpower_limit()!\n");
}
