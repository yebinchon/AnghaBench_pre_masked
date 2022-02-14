
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rs_tx_column {int dummy; } ;
struct rs_rate {int dummy; } ;
struct iwl_mvm {TYPE_2__* nvm_data; } ;
struct TYPE_3__ {int ht_supported; } ;
struct ieee80211_sta {scalar_t__ smps_mode; TYPE_1__ ht_cap; } ;
struct TYPE_4__ {scalar_t__ sku_cap_mimo_disabled; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,struct ieee80211_sta*) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct iwl_mvm *VAR_1, struct ieee80211_sta *VAR_2,
     struct rs_rate *VAR_3,
     const struct rs_tx_column *VAR_4)
{
 if (!VAR_2->ht_cap.ht_supported)
  return 0;

 if (VAR_2->smps_mode == VAR_0)
  return 0;

 if (FUNC_2(FUNC_1(VAR_1)) < 2)
  return 0;

 if (!FUNC_0(VAR_1, VAR_2))
  return 0;

 if (VAR_1->nvm_data->sku_cap_mimo_disabled)
  return 0;

 return 1;
}
