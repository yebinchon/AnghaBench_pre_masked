
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_rx_packet {int dummy; } ;
struct iwl_notif_wait_data {int dummy; } ;
struct iwl_mvm_sniffer_apply {int bssid; TYPE_1__* mvm; int aid; } ;
struct TYPE_2__ {int cur_bssid; int cur_aid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct iwl_notif_wait_data *VAR_0,
      struct iwl_rx_packet *VAR_1, void *VAR_2)
{
 struct iwl_mvm_sniffer_apply *VAR_3 = VAR_2;

 VAR_3->mvm->cur_aid = FUNC_0(VAR_3->aid);
 FUNC_1(VAR_3->mvm->cur_bssid, VAR_3->bssid,
        sizeof(VAR_3->mvm->cur_bssid));

 return 1;
}
