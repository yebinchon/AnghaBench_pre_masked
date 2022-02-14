
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_wowlan_config_cmd {int flags; int wakeup_filter; int non_qos_seq; int is_11n_connection; } ;
struct iwl_mvm_vif {int dummy; } ;
struct iwl_mvm_sta {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {int ht_supported; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; } ;
struct cfg80211_wowlan {scalar_t__ any; scalar_t__ tcp; scalar_t__ rfkill_release; scalar_t__ n_patterns; scalar_t__ four_way_handshake; scalar_t__ eap_identity_req; scalar_t__ gtk_rekey_failure; scalar_t__ magic_pkt; scalar_t__ disconnect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_3 (struct iwl_mvm_sta*,struct iwl_wowlan_config_cmd*) ;
 struct iwl_mvm_sta* FUNC_4 (struct ieee80211_sta*) ;

__attribute__((used)) static int
FUNC_5(struct iwl_mvm *VAR_16,
     struct cfg80211_wowlan *VAR_17,
     struct iwl_wowlan_config_cmd *VAR_18,
     struct ieee80211_vif *VAR_19, struct iwl_mvm_vif *VAR_20,
     struct ieee80211_sta *VAR_21)
{
 int VAR_22;
 struct iwl_mvm_sta *VAR_23 = FUNC_4(VAR_21);



 VAR_18->is_11n_connection =
     VAR_21->ht_cap.ht_supported;
 VAR_18->flags = VAR_1 |
  VAR_2 | VAR_0;


 VAR_22 = FUNC_2(VAR_16, VAR_19);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_18->non_qos_seq = FUNC_0(VAR_22);

 FUNC_3(VAR_23, VAR_18);

 if (VAR_17->disconnect)
  VAR_18->wakeup_filter |=
   FUNC_1(VAR_5 |
        VAR_8);
 if (VAR_17->magic_pkt)
  VAR_18->wakeup_filter |=
   FUNC_1(VAR_9);
 if (VAR_17->gtk_rekey_failure)
  VAR_18->wakeup_filter |=
   FUNC_1(VAR_7);
 if (VAR_17->eap_identity_req)
  VAR_18->wakeup_filter |=
   FUNC_1(VAR_6);
 if (VAR_17->four_way_handshake)
  VAR_18->wakeup_filter |=
   FUNC_1(VAR_3);
 if (VAR_17->n_patterns)
  VAR_18->wakeup_filter |=
   FUNC_1(VAR_10);

 if (VAR_17->rfkill_release)
  VAR_18->wakeup_filter |=
   FUNC_1(VAR_14);

 if (VAR_17->tcp) {




  VAR_18->wakeup_filter |=
   FUNC_1(VAR_11 |
        VAR_12 |
        VAR_13 |
        VAR_8);
 }

 if (VAR_17->any) {
  VAR_18->wakeup_filter |=
   FUNC_1(VAR_5 |
        VAR_8 |
        VAR_15 |
        VAR_4);
 }

 return 0;
}
