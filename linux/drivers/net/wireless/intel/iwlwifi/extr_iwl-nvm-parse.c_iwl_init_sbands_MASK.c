
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_trans {struct iwl_cfg* cfg; struct device* dev; } ;
struct iwl_nvm_data {scalar_t__ sku_cap_11ax_enable; scalar_t__ sku_cap_11ac_enable; struct ieee80211_supported_band* bands; } ;
struct iwl_cfg {int dummy; } ;
struct ieee80211_supported_band {size_t band; int vht_cap; int ht_cap; int n_bitrates; int * bitrates; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int disable_11ax; int disable_11ac; } ;


 int FUNC_0 (struct device*,char*,int,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (struct device*,struct iwl_cfg const*,struct iwl_nvm_data*,void const*,int ,int) ;
 int FUNC_2 (struct ieee80211_supported_band*,int ,int ) ;
 int FUNC_3 (struct iwl_trans*,struct iwl_nvm_data*,int *,size_t,int ,int ) ;
 scalar_t__ FUNC_4 (struct iwl_nvm_data*,struct ieee80211_supported_band*,int,size_t) ;
 int FUNC_5 (struct iwl_trans*,struct iwl_nvm_data*,int *,int ,int ) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void FUNC_6(struct iwl_trans *VAR_8,
       struct iwl_nvm_data *VAR_9,
       const void *VAR_10, u8 VAR_11,
       u8 VAR_12, u32 VAR_13, bool VAR_14)
{
 struct device *VAR_15 = VAR_8->dev;
 const struct iwl_cfg *VAR_16 = VAR_8->cfg;
 int VAR_17;
 int VAR_18 = 0;
 struct ieee80211_supported_band *VAR_19;

 VAR_17 = FUNC_1(VAR_15, VAR_16, VAR_9, VAR_10,
       VAR_13, VAR_14);
 VAR_19 = &VAR_9->bands[VAR_0];
 VAR_19->band = VAR_0;
 VAR_19->bitrates = &VAR_6[VAR_4];
 VAR_19->n_bitrates = VAR_2;
 VAR_18 += FUNC_4(VAR_9, VAR_19, VAR_17,
       VAR_0);
 FUNC_3(VAR_8, VAR_9, &VAR_19->ht_cap, VAR_0,
        VAR_11, VAR_12);

 if (VAR_9->sku_cap_11ax_enable && !VAR_7.disable_11ax)
  FUNC_2(VAR_19, VAR_11, VAR_12);

 VAR_19 = &VAR_9->bands[VAR_1];
 VAR_19->band = VAR_1;
 VAR_19->bitrates = &VAR_6[VAR_5];
 VAR_19->n_bitrates = VAR_3;
 VAR_18 += FUNC_4(VAR_9, VAR_19, VAR_17,
       VAR_1);
 FUNC_3(VAR_8, VAR_9, &VAR_19->ht_cap, VAR_1,
        VAR_11, VAR_12);
 if (VAR_9->sku_cap_11ac_enable && !VAR_7.disable_11ac)
  FUNC_5(VAR_8, VAR_9, &VAR_19->vht_cap,
          VAR_11, VAR_12);

 if (VAR_9->sku_cap_11ax_enable && !VAR_7.disable_11ax)
  FUNC_2(VAR_19, VAR_11, VAR_12);

 if (VAR_17 != VAR_18)
  FUNC_0(VAR_15, "NVM: used only %d of %d channels\n",
       VAR_18, VAR_17);
}
