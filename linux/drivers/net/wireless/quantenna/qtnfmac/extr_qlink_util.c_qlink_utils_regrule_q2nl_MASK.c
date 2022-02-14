
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlink_tlv_reg_rule {int flags; int dfs_cac_ms; int max_eirp; int max_antenna_gain; int max_bandwidth_khz; int end_freq_khz; int start_freq_khz; } ;
struct TYPE_3__ {void* max_eirp; void* max_antenna_gain; } ;
struct TYPE_4__ {void* max_bandwidth_khz; void* end_freq_khz; void* start_freq_khz; } ;
struct ieee80211_reg_rule {int flags; void* dfs_cac_ms; TYPE_1__ power_rule; TYPE_2__ freq_range; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (void*) ;

void FUNC_2(struct ieee80211_reg_rule *VAR_0,
         const struct qlink_tlv_reg_rule *VAR_1)
{
 VAR_0->freq_range.start_freq_khz = FUNC_0(VAR_1->start_freq_khz);
 VAR_0->freq_range.end_freq_khz = FUNC_0(VAR_1->end_freq_khz);
 VAR_0->freq_range.max_bandwidth_khz =
  FUNC_0(VAR_1->max_bandwidth_khz);
 VAR_0->power_rule.max_antenna_gain = FUNC_0(VAR_1->max_antenna_gain);
 VAR_0->power_rule.max_eirp = FUNC_0(VAR_1->max_eirp);
 VAR_0->dfs_cac_ms = FUNC_0(VAR_1->dfs_cac_ms);
 VAR_0->flags = FUNC_1(FUNC_0(VAR_1->flags));
}
