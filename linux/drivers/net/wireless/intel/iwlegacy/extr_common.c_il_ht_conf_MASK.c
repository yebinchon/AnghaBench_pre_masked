
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int protection; int non_gf_sta_present; int enabled; } ;
struct il_ht_config {int single_chain_sufficient; } ;
struct il_priv {TYPE_1__ ht; struct il_ht_config current_ht_config; } ;
struct ieee80211_bss_conf {int ht_operation_mode; int bssid; } ;
struct ieee80211_vif {int type; struct ieee80211_bss_conf bss_conf; } ;
struct TYPE_4__ {int tx_params; int * rx_mask; } ;
struct ieee80211_sta_ht_cap {TYPE_2__ mcs; } ;
struct ieee80211_sta {struct ieee80211_sta_ht_cap ht_cap; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 struct ieee80211_sta* FUNC_1 (struct ieee80211_vif*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct il_priv *VAR_4, struct ieee80211_vif *VAR_5)
{
 struct il_ht_config *VAR_6 = &VAR_4->current_ht_config;
 struct ieee80211_sta *VAR_7;
 struct ieee80211_bss_conf *VAR_8 = &VAR_5->bss_conf;

 FUNC_0("enter:\n");

 if (!VAR_4->ht.enabled)
  return;

 VAR_4->ht.protection =
     VAR_8->ht_operation_mode & VAR_3;
 VAR_4->ht.non_gf_sta_present =
     !!(VAR_8->
        ht_operation_mode & VAR_2);

 VAR_6->single_chain_sufficient = 0;

 switch (VAR_5->type) {
 case 128:
  FUNC_2();
  VAR_7 = FUNC_1(VAR_5, VAR_8->bssid);
  if (VAR_7) {
   struct ieee80211_sta_ht_cap *VAR_9 = &VAR_7->ht_cap;
   int VAR_10;

   VAR_10 =
       (VAR_9->mcs.
        tx_params & VAR_0)
       >> VAR_1;
   VAR_10 += 1;

   if (VAR_9->mcs.rx_mask[1] == 0 &&
       VAR_9->mcs.rx_mask[2] == 0)
    VAR_6->single_chain_sufficient = 1;
   if (VAR_10 <= 1)
    VAR_6->single_chain_sufficient = 1;
  } else {






   VAR_6->single_chain_sufficient = 1;
  }
  FUNC_3();
  break;
 case 129:
  VAR_6->single_chain_sufficient = 1;
  break;
 default:
  break;
 }

 FUNC_0("leave\n");
}
