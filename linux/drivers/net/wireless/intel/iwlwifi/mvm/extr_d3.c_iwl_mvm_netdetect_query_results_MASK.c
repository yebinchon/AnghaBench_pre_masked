
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_scan_offload_profiles_query_v1 {int dummy; } ;
struct iwl_scan_offload_profiles_query {int n_scans_done; int matches; int matched_profiles; } ;
struct iwl_scan_offload_profile_match_v1 {int dummy; } ;
struct iwl_scan_offload_profile_match {int dummy; } ;
struct iwl_mvm_nd_query_results {int matches; void* matched_profiles; } ;
struct iwl_mvm {void* last_netdetect_scans; TYPE_1__* fw; } ;
struct iwl_host_cmd {TYPE_2__* resp_pkt; int flags; int id; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (struct iwl_host_cmd*) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_host_cmd*) ;
 int FUNC_4 (TYPE_2__*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,size_t) ;

__attribute__((used)) static int
FUNC_7(struct iwl_mvm *VAR_5,
    struct iwl_mvm_nd_query_results *VAR_6)
{
 struct iwl_scan_offload_profiles_query *VAR_7;
 struct iwl_host_cmd VAR_8 = {
  .id = VAR_4,
  .flags = VAR_0,
 };
 int VAR_9, VAR_10;
 size_t VAR_11, VAR_12;

 VAR_9 = FUNC_3(VAR_5, &VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_5, "failed to query matched profiles (%d)\n", VAR_9);
  return VAR_9;
 }

 if (FUNC_1(&VAR_5->fw->ucode_capa,
         VAR_3)) {
  VAR_11 = sizeof(struct iwl_scan_offload_profiles_query);
  VAR_12 = sizeof(struct iwl_scan_offload_profile_match) *
   VAR_2;
 } else {
  VAR_11 = sizeof(struct iwl_scan_offload_profiles_query_v1);
  VAR_12 = sizeof(struct iwl_scan_offload_profile_match_v1) *
   VAR_2;
 }

 VAR_10 = FUNC_4(VAR_8.resp_pkt);
 if (VAR_10 < VAR_11) {
  FUNC_0(VAR_5, "Invalid scan offload profiles query response!\n");
  VAR_9 = -VAR_1;
  goto out_free_resp;
 }

 VAR_7 = (void *)VAR_8.resp_pkt->data;

 VAR_6->matched_profiles = FUNC_5(VAR_7->matched_profiles);
 FUNC_6(VAR_6->matches, VAR_7->matches, VAR_12);





out_free_resp:
 FUNC_2(&VAR_8);
 return VAR_9;
}
