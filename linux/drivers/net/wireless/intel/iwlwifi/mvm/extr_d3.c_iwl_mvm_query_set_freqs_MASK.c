
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_scan_offload_profile_match_v1 {int* matching_channels; } ;
struct iwl_scan_offload_profile_match {int* matching_channels; } ;
struct iwl_mvm_nd_query_results {scalar_t__ matches; } ;
struct iwl_mvm {TYPE_2__** nd_channels; TYPE_1__* fw; } ;
struct cfg80211_wowlan_nd_match {int n_channels; int * channels; } ;
struct TYPE_4__ {int center_freq; } ;
struct TYPE_3__ {int ucode_capa; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct iwl_mvm *VAR_3,
        struct iwl_mvm_nd_query_results *VAR_4,
        struct cfg80211_wowlan_nd_match *VAR_5,
        int VAR_6)
{
 int VAR_7;

 if (FUNC_1(&VAR_3->fw->ucode_capa,
         VAR_0)) {
  struct iwl_scan_offload_profile_match *VAR_8 =
   (struct iwl_scan_offload_profile_match *)VAR_4->matches;

  for (VAR_7 = 0; VAR_7 < VAR_1 * 8; VAR_7++)
   if (VAR_8[VAR_6].matching_channels[VAR_7 / 8] & (FUNC_0(VAR_7 % 8)))
    VAR_5->channels[VAR_5->n_channels++] =
     VAR_3->nd_channels[VAR_7]->center_freq;
 } else {
  struct iwl_scan_offload_profile_match_v1 *VAR_9 =
   (struct iwl_scan_offload_profile_match_v1 *)VAR_4->matches;

  for (VAR_7 = 0; VAR_7 < VAR_2 * 8; VAR_7++)
   if (VAR_9[VAR_6].matching_channels[VAR_7 / 8] & (FUNC_0(VAR_7 % 8)))
    VAR_5->channels[VAR_5->n_channels++] =
     VAR_3->nd_channels[VAR_7]->center_freq;
 }
}
