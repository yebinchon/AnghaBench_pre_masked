
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_tof_range_req_cmd_v5 {int req_timeout; int macaddr_random; int range_req_bssid; int * macaddr_mask; int macaddr_template; int num_of_ap; int request_id; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {int bssid; scalar_t__ assoc; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct cfg80211_pmsr_request {int timeout; int * mac_addr_mask; int mac_addr; int n_peers; int cookie; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_1, struct ieee80211_vif *VAR_2,
          struct iwl_tof_range_req_cmd_v5 *VAR_3,
          struct cfg80211_pmsr_request *VAR_4)
{
 int VAR_5;

 VAR_3->request_id = VAR_4->cookie;
 VAR_3->num_of_ap = VAR_4->n_peers;


 if (!VAR_4->timeout || VAR_4->timeout > 255 * 100)
  VAR_3->req_timeout = 255;
 else
  VAR_3->req_timeout = FUNC_0(VAR_4->timeout, 100);





 VAR_3->macaddr_random = 1;
 FUNC_2(VAR_3->macaddr_template, VAR_4->mac_addr, VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_3->macaddr_mask[VAR_5] = ~VAR_4->mac_addr_mask[VAR_5];

 if (VAR_2->bss_conf.assoc)
  FUNC_2(VAR_3->range_req_bssid, VAR_2->bss_conf.bssid, VAR_0);
 else
  FUNC_1(VAR_3->range_req_bssid);
}
