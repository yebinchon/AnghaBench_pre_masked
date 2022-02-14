
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_vif {int bss_index; int encrypt_type; int self_sta_index; } ;
struct wcn36xx_sta {int supported_rates; int aid; } ;
struct wcn36xx_hal_config_sta_params {int type; int short_preamble_supported; int supported_rates; int aid; int max_sp_len; int wmm_enabled; int mac; int bssid; scalar_t__ p2p; int bssid_index; scalar_t__ max_ampdu_duration; int mimo_ps; scalar_t__ uapsd; scalar_t__ action; scalar_t__ rmf; scalar_t__ rifs_mode; int encrypt_type; int listen_interval; int sta_index; } ;
struct wcn36xx {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; int * addr; } ;
struct ieee80211_sta {int max_sp; int wme; int * addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wcn36xx*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wcn36xx_hal_config_sta_params*) ;
 int FUNC_4 (struct ieee80211_sta*,struct wcn36xx_hal_config_sta_params*) ;
 struct wcn36xx_sta* FUNC_5 (struct ieee80211_sta*) ;
 struct wcn36xx_vif* FUNC_6 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_7(struct wcn36xx *VAR_7,
  struct ieee80211_vif *VAR_8,
  struct ieee80211_sta *VAR_9,
  struct wcn36xx_hal_config_sta_params *VAR_10)
{
 struct wcn36xx_vif *VAR_11 = FUNC_6(VAR_8);
 struct wcn36xx_sta *VAR_12 = ((void*)0);
 if (VAR_8->type == VAR_1 ||
     VAR_8->type == VAR_2 ||
     VAR_8->type == VAR_3) {
  VAR_10->type = 1;
  VAR_10->sta_index = VAR_6;
 } else {
  VAR_10->type = 0;
  VAR_10->sta_index = VAR_11->self_sta_index;
 }

 VAR_10->listen_interval = FUNC_0(VAR_7);






 if (VAR_4 == VAR_8->type)
  FUNC_1(&VAR_10->mac, VAR_8->addr, VAR_0);
 else
  FUNC_1(&VAR_10->bssid, VAR_8->addr, VAR_0);

 VAR_10->encrypt_type = VAR_11->encrypt_type;
 VAR_10->short_preamble_supported = 1;

 VAR_10->rifs_mode = 0;
 VAR_10->rmf = 0;
 VAR_10->action = 0;
 VAR_10->uapsd = 0;
 VAR_10->mimo_ps = VAR_5;
 VAR_10->max_ampdu_duration = 0;
 VAR_10->bssid_index = VAR_11->bss_index;
 VAR_10->p2p = 0;

 if (VAR_9) {
  VAR_12 = FUNC_5(VAR_9);
  if (VAR_4 == VAR_8->type)
   FUNC_1(&VAR_10->bssid, VAR_9->addr, VAR_0);
  else
   FUNC_1(&VAR_10->mac, VAR_9->addr, VAR_0);
  VAR_10->wmm_enabled = VAR_9->wme;
  VAR_10->max_sp_len = VAR_9->max_sp;
  VAR_10->aid = VAR_12->aid;
  FUNC_4(VAR_9, VAR_10);
  FUNC_1(&VAR_10->supported_rates, &VAR_12->supported_rates,
   sizeof(VAR_12->supported_rates));
 } else {
  FUNC_2(&VAR_10->supported_rates);
  FUNC_3(VAR_10);
 }
}
