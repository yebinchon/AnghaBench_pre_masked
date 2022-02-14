
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rs_tx_column {int dummy; } ;
struct rs_rate {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {int ht_supported; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; } ;



__attribute__((used)) static bool FUNC_0(struct iwl_mvm *VAR_0, struct ieee80211_sta *VAR_1,
     struct rs_rate *VAR_2,
     const struct rs_tx_column *VAR_3)
{
 if (!VAR_1->ht_cap.ht_supported)
  return 0;

 return 1;
}
