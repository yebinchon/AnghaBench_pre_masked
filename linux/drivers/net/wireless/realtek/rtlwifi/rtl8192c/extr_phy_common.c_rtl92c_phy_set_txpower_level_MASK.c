
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_efuse {int txpwr_fromeprom; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* phy_rf6052_set_ofdm_txpower ) (struct ieee80211_hw*,int *,int ) ;int (* phy_rf6052_set_cck_txpower ) (struct ieee80211_hw*,int *) ;} ;


 int FUNC_0 (struct ieee80211_hw*,int ,int *,int *) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int *,int *) ;
 struct rtl_efuse* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int *) ;
 int FUNC_5 (struct ieee80211_hw*,int *,int ) ;

void FUNC_6(struct ieee80211_hw *VAR_0, u8 VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_3(VAR_0);
 struct rtl_efuse *VAR_3 = FUNC_2(FUNC_3(VAR_0));
 u8 VAR_4[2], VAR_5[2];

 if (!VAR_3->txpwr_fromeprom)
  return;
 FUNC_1(VAR_0, VAR_1,
      &VAR_4[0], &VAR_5[0]);
 FUNC_0(VAR_0, VAR_1, &VAR_4[0],
         &VAR_5[0]);
 VAR_2->cfg->ops->phy_rf6052_set_cck_txpower(VAR_0, &VAR_4[0]);
 VAR_2->cfg->ops->phy_rf6052_set_ofdm_txpower(VAR_0, &VAR_5[0],
             VAR_1);
}
