
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int unknown; int sta_color_mismatch; int fail_hw_drop; int insuff_cf_poll; int fifo_flush; int tid_disable; int frag_drop; int sta_invalid; int bt_retry; int host_abort; int dest_ps; int life_expire; int rfkill_flush; int drain_flow; int fifo_underrun; int long_limit; int short_limit; int int_crossed_retry; int pp_calc_ttak; int pp_quiet_period; int pp_bt_prio; int pp_few_bytes; int pp_delay; } ;
struct iwl_priv {TYPE_1__ reply_tx_stats; } ;
 int VAR_0 ;






__attribute__((used)) static void FUNC_0(struct iwl_priv *VAR_1, u16 VAR_2)
{
 VAR_2 &= VAR_0;

 switch (VAR_2) {
 case 130:
  VAR_1->reply_tx_stats.pp_delay++;
  break;
 case 129:
  VAR_1->reply_tx_stats.pp_few_bytes++;
  break;
 case 132:
  VAR_1->reply_tx_stats.pp_bt_prio++;
  break;
 case 128:
  VAR_1->reply_tx_stats.pp_quiet_period++;
  break;
 case 131:
  VAR_1->reply_tx_stats.pp_calc_ttak++;
  break;
 case 141:
  VAR_1->reply_tx_stats.int_crossed_retry++;
  break;
 case 135:
  VAR_1->reply_tx_stats.short_limit++;
  break;
 case 139:
  VAR_1->reply_tx_stats.long_limit++;
  break;
 case 145:
  VAR_1->reply_tx_stats.fifo_underrun++;
  break;
 case 147:
  VAR_1->reply_tx_stats.drain_flow++;
  break;
 case 136:
  VAR_1->reply_tx_stats.rfkill_flush++;
  break;
 case 140:
  VAR_1->reply_tx_stats.life_expire++;
  break;
 case 148:
  VAR_1->reply_tx_stats.dest_ps++;
  break;
 case 143:
  VAR_1->reply_tx_stats.host_abort++;
  break;
 case 149:
  VAR_1->reply_tx_stats.bt_retry++;
  break;
 case 134:
  VAR_1->reply_tx_stats.sta_invalid++;
  break;
 case 144:
  VAR_1->reply_tx_stats.frag_drop++;
  break;
 case 133:
  VAR_1->reply_tx_stats.tid_disable++;
  break;
 case 146:
  VAR_1->reply_tx_stats.fifo_flush++;
  break;
 case 142:
  VAR_1->reply_tx_stats.insuff_cf_poll++;
  break;
 case 137:
  VAR_1->reply_tx_stats.fail_hw_drop++;
  break;
 case 138:
  VAR_1->reply_tx_stats.sta_color_mismatch++;
  break;
 default:
  VAR_1->reply_tx_stats.unknown++;
  break;
 }
}
