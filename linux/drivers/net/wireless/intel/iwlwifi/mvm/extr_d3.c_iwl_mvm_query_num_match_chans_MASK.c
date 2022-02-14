
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_scan_offload_profile_match_v1 {int * matching_channels; } ;
struct iwl_scan_offload_profile_match {int * matching_channels; } ;
struct iwl_mvm_nd_query_results {scalar_t__ matches; } ;
struct iwl_mvm {TYPE_1__* fw; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct iwl_mvm *VAR_3,
      struct iwl_mvm_nd_query_results *VAR_4,
      int VAR_5)
{
 int VAR_6 = 0, VAR_7;

 if (FUNC_0(&VAR_3->fw->ucode_capa,
         VAR_0)) {
  struct iwl_scan_offload_profile_match *VAR_8 =
   (struct iwl_scan_offload_profile_match *)VAR_4->matches;

  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
   VAR_6 += FUNC_1(VAR_8[VAR_5].matching_channels[VAR_7]);
 } else {
  struct iwl_scan_offload_profile_match_v1 *VAR_9 =
   (struct iwl_scan_offload_profile_match_v1 *)VAR_4->matches;

  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   VAR_6 += FUNC_1(VAR_9[VAR_5].matching_channels[VAR_7]);
 }

 return VAR_6;
}
