
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_scan_req_lmac {int data; } ;
struct iwl_scan_channel_cfg_lmac {int flags; scalar_t__ iter_interval; void* iter_count; void* channel_num; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_channel {int hw_value; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct iwl_mvm *VAR_1,
          struct ieee80211_channel **VAR_2,
          int VAR_3, u32 VAR_4,
          struct iwl_scan_req_lmac *VAR_5)
{
 struct iwl_scan_channel_cfg_lmac *VAR_6 = (void *)&VAR_5->data;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6[VAR_7].channel_num =
   FUNC_0(VAR_2[VAR_7]->hw_value);
  VAR_6[VAR_7].iter_count = FUNC_0(1);
  VAR_6[VAR_7].iter_interval = 0;
  VAR_6[VAR_7].flags =
   FUNC_1(VAR_0 |
        VAR_4);
 }
}
