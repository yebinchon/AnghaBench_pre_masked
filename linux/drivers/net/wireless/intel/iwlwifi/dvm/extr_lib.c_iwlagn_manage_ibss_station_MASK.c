
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_vif_priv {int ibss_bssid_sta_id; int ctx; } ;
struct iwl_priv {int dummy; } ;
struct TYPE_2__ {int bssid; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; scalar_t__ drv_priv; } ;


 int FUNC_0 (struct iwl_priv*,int ,int ) ;
 int FUNC_1 (struct iwl_priv*,int ,int ,int *) ;

int FUNC_2(struct iwl_priv *VAR_0,
          struct ieee80211_vif *VAR_1, bool VAR_2)
{
 struct iwl_vif_priv *VAR_3 = (void *)VAR_1->drv_priv;

 if (VAR_2)
  return FUNC_1(VAR_0, VAR_3->ctx,
      VAR_1->bss_conf.bssid,
      &VAR_3->ibss_bssid_sta_id);
 return FUNC_0(VAR_0, VAR_3->ibss_bssid_sta_id,
      VAR_1->bss_conf.bssid);
}
