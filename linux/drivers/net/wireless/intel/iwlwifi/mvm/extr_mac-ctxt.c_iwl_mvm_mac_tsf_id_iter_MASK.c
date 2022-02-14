
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iwl_mvm_vif {scalar_t__ tsf_id; } ;
struct iwl_mvm_mac_iface_iterator_data {scalar_t__ preferred_tsf; int available_tsf_ids; struct ieee80211_vif* vif; } ;
struct TYPE_2__ {int beacon_int; } ;
struct ieee80211_vif {int type; TYPE_1__ bss_conf; } ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, u8 *VAR_2,
        struct ieee80211_vif *VAR_3)
{
 struct iwl_mvm_mac_iface_iterator_data *VAR_4 = VAR_1;
 struct iwl_mvm_vif *VAR_5 = FUNC_1(VAR_3);
 u16 VAR_6;


 if (VAR_3 == VAR_4->vif)
  return;
 switch (VAR_4->vif->type) {
 case 128:
  if (VAR_3->type != 129 ||
      VAR_4->preferred_tsf != VAR_0 ||
      !FUNC_3(VAR_5->tsf_id, VAR_4->available_tsf_ids))
   break;

  VAR_6 = FUNC_2(VAR_4->vif->bss_conf.beacon_int,
        VAR_3->bss_conf.beacon_int);

  if (!VAR_6)
   break;

  if ((VAR_4->vif->bss_conf.beacon_int -
       VAR_3->bss_conf.beacon_int) % VAR_6 == 0) {
   VAR_4->preferred_tsf = VAR_5->tsf_id;
   return;
  }
  break;

 case 129:
  if ((VAR_3->type != 129 &&
       VAR_3->type != 128) ||
      VAR_4->preferred_tsf != VAR_0 ||
      !FUNC_3(VAR_5->tsf_id, VAR_4->available_tsf_ids))
   break;

  VAR_6 = FUNC_2(VAR_4->vif->bss_conf.beacon_int,
        VAR_3->bss_conf.beacon_int);

  if (!VAR_6)
   break;

  if ((VAR_4->vif->bss_conf.beacon_int -
       VAR_3->bss_conf.beacon_int) % VAR_6 == 0) {
   VAR_4->preferred_tsf = VAR_5->tsf_id;
   return;
  }
  break;
 default:







  break;
 }







 FUNC_0(VAR_5->tsf_id, VAR_4->available_tsf_ids);

 if (VAR_4->preferred_tsf == VAR_5->tsf_id)
  VAR_4->preferred_tsf = VAR_0;
}
