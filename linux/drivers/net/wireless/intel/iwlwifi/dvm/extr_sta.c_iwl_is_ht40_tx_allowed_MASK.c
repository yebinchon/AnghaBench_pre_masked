
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_40mhz; int enabled; } ;
struct iwl_rxon_context {TYPE_1__ ht; } ;
struct iwl_priv {scalar_t__ disable_ht40; } ;
struct ieee80211_sta {scalar_t__ bandwidth; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct iwl_priv *VAR_1,
       struct iwl_rxon_context *VAR_2,
       struct ieee80211_sta *VAR_3)
{
 if (!VAR_2->ht.enabled || !VAR_2->ht.is_40mhz)
  return 0;







 if (!VAR_3)
  return 1;

 return VAR_3->bandwidth >= VAR_0;
}
