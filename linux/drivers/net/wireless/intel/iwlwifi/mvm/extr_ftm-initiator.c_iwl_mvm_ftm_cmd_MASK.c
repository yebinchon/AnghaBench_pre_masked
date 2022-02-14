
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_tof_range_req_cmd {int num_of_ap; void* tsf_mac_id; int range_req_bssid; int * macaddr_mask; int macaddr_template; void* req_timeout_ms; int request_id; void* initiator_flags; } ;
struct iwl_mvm_vif {int id; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_3__ {int bssid; scalar_t__ assoc; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct cfg80211_pmsr_request {int n_peers; int timeout; TYPE_2__* peers; int * mac_addr_mask; int mac_addr; int cookie; } ;
struct TYPE_4__ {scalar_t__ report_ap_tsf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct iwl_mvm *VAR_3, struct ieee80211_vif *VAR_4,
       struct iwl_tof_range_req_cmd *VAR_5,
       struct cfg80211_pmsr_request *VAR_6)
{
 int VAR_7;

 VAR_5->initiator_flags =
  FUNC_0(VAR_1 |
       VAR_2);
 VAR_5->request_id = VAR_6->cookie;
 VAR_5->num_of_ap = VAR_6->n_peers;





 if (VAR_6->timeout)
  VAR_5->req_timeout_ms = FUNC_0(VAR_6->timeout);
 else
  VAR_5->req_timeout_ms = FUNC_0(0xfffff);

 FUNC_3(VAR_5->macaddr_template, VAR_6->mac_addr, VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_5->macaddr_mask[VAR_7] = ~VAR_6->mac_addr_mask[VAR_7];

 if (VAR_4->bss_conf.assoc) {
  FUNC_3(VAR_5->range_req_bssid, VAR_4->bss_conf.bssid, VAR_0);


  for (VAR_7 = 0; VAR_7 < VAR_6->n_peers; VAR_7++) {
   if (VAR_6->peers[VAR_7].report_ap_tsf) {
    struct iwl_mvm_vif *VAR_8 =
     FUNC_2(VAR_4);

    VAR_5->tsf_mac_id = FUNC_0(VAR_8->id);
    return;
   }
  }
 } else {
  FUNC_1(VAR_5->range_req_bssid);
 }


 VAR_5->tsf_mac_id = FUNC_0(0xff);
}
