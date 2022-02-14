
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {int rtt_avg; int burst_index; int num_ftmr_successes; int rssi_avg; int rssi_spread; int rtt_variance; int rtt_spread; } ;
struct cfg80211_pmsr_result {int status; int addr; int host_time; TYPE_1__ ftm; } ;
typedef int s64 ;


 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct iwl_mvm *VAR_0, u8 VAR_1,
         struct cfg80211_pmsr_result *VAR_2)
{
 s64 VAR_3 = FUNC_1(VAR_2->ftm.rtt_avg * 100, 6666);

 FUNC_0(VAR_0, "entry %d\n", VAR_1);
 FUNC_0(VAR_0, "\tstatus: %d\n", VAR_2->status);
 FUNC_0(VAR_0, "\tBSSID: %pM\n", VAR_2->addr);
 FUNC_0(VAR_0, "\thost time: %llu\n", VAR_2->host_time);
 FUNC_0(VAR_0, "\tburst index: %hhu\n", VAR_2->ftm.burst_index);
 FUNC_0(VAR_0, "\tsuccess num: %u\n", VAR_2->ftm.num_ftmr_successes);
 FUNC_0(VAR_0, "\trssi: %d\n", VAR_2->ftm.rssi_avg);
 FUNC_0(VAR_0, "\trssi spread: %hhu\n", VAR_2->ftm.rssi_spread);
 FUNC_0(VAR_0, "\trtt: %lld\n", VAR_2->ftm.rtt_avg);
 FUNC_0(VAR_0, "\trtt var: %llu\n", VAR_2->ftm.rtt_variance);
 FUNC_0(VAR_0, "\trtt spread: %llu\n", VAR_2->ftm.rtt_spread);
 FUNC_0(VAR_0, "\tdistance: %lld\n", VAR_3);
}
