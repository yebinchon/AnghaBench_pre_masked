
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm {TYPE_2__* fw; } ;
struct ieee80211_scan_ies {scalar_t__ common_ie_len; scalar_t__* len; } ;
struct TYPE_3__ {int n_scan_channels; } ;
struct TYPE_4__ {TYPE_1__ ucode_capa; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct iwl_mvm*) ;

__attribute__((used)) static inline bool FUNC_1(struct iwl_mvm *VAR_3, int VAR_4,
         struct ieee80211_scan_ies *VAR_5,
         int VAR_6)
{
 return ((VAR_4 <= VAR_2) &&
  (VAR_6 <= VAR_3->fw->ucode_capa.n_scan_channels) &
  (VAR_5->common_ie_len +
   VAR_5->len[VAR_0] +
   VAR_5->len[VAR_1] <=
   FUNC_0(VAR_3)));
}
