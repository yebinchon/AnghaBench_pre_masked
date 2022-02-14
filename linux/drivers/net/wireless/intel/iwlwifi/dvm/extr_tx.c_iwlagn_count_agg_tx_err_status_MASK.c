
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int unknown; int delay_tx; int dump_tx; int response; int bad_crc32; int scd_query; int last_sent_bt_kill; int last_sent_try; int last_sent_ttl; int abort; int few_bytes; int bt_prio; int underrun; } ;
struct iwl_priv {TYPE_1__ reply_agg_tx_stats; } ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct iwl_priv *VAR_1, u16 VAR_2)
{
 VAR_2 &= VAR_0;

 switch (VAR_2) {
 case 128:
  VAR_1->reply_agg_tx_stats.underrun++;
  break;
 case 138:
  VAR_1->reply_agg_tx_stats.bt_prio++;
  break;
 case 135:
  VAR_1->reply_agg_tx_stats.few_bytes++;
  break;
 case 139:
  VAR_1->reply_agg_tx_stats.abort++;
  break;
 case 132:
  VAR_1->reply_agg_tx_stats.last_sent_ttl++;
  break;
 case 133:
  VAR_1->reply_agg_tx_stats.last_sent_try++;
  break;
 case 134:
  VAR_1->reply_agg_tx_stats.last_sent_bt_kill++;
  break;
 case 130:
  VAR_1->reply_agg_tx_stats.scd_query++;
  break;
 case 129:
  VAR_1->reply_agg_tx_stats.bad_crc32++;
  break;
 case 131:
  VAR_1->reply_agg_tx_stats.response++;
  break;
 case 136:
  VAR_1->reply_agg_tx_stats.dump_tx++;
  break;
 case 137:
  VAR_1->reply_agg_tx_stats.delay_tx++;
  break;
 default:
  VAR_1->reply_agg_tx_stats.unknown++;
  break;
 }
}
