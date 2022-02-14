
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct iwl_rx_packet {int data; } ;
struct TYPE_13__ {int air_time; int byte_count; int avg_energy; } ;
struct TYPE_23__ {int on_time_scan; int on_time_rf; int tx_time; int rx_time; int beacon_filter_average_energy; } ;
struct TYPE_24__ {TYPE_8__ common; } ;
struct TYPE_18__ {int mac_id; } ;
struct TYPE_19__ {TYPE_3__ general; } ;
struct iwl_notif_statistics_v11 {TYPE_10__ load_stats; int flag; TYPE_9__ general; TYPE_4__ rx; } ;
struct iwl_notif_statistics_v10 {int dummy; } ;
struct TYPE_14__ {int air_time; int byte_count; int avg_energy; } ;
struct TYPE_20__ {int mac_id; } ;
struct TYPE_21__ {TYPE_5__ general; } ;
struct iwl_notif_statistics {TYPE_11__ load_stats; int flag; TYPE_9__ general; TYPE_6__ rx; } ;
struct TYPE_17__ {int airtime; } ;
struct TYPE_16__ {int rx_bytes; int rate; } ;
struct iwl_mvm_tcm_mac {TYPE_2__ rx; TYPE_1__ uapsd_nonagg_detect; } ;
struct iwl_mvm_stat_data {TYPE_9__* general; int beacon_filter_average_energy; int mac_id; struct iwl_mvm* mvm; } ;
struct iwl_mvm_sta {scalar_t__ avg_energy; } ;
struct TYPE_15__ {int lock; struct iwl_mvm_tcm_mac* data; } ;
struct TYPE_22__ {void* on_time_scan; void* on_time_rf; void* tx_time; void* rx_time; } ;
struct iwl_mvm {TYPE_12__ tcm; int fw_id_to_mac_id; int hw; TYPE_7__ radio_stats; TYPE_6__ rx_stats; TYPE_4__ rx_stats_v3; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,char*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,struct iwl_mvm_stat_data*) ;
 scalar_t__ FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (struct iwl_mvm*,struct iwl_rx_packet*) ;
 struct iwl_mvm_sta* FUNC_8 (struct iwl_mvm*,int) ;
 int VAR_3 ;
 int FUNC_9 (struct iwl_rx_packet*) ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

void FUNC_16(struct iwl_mvm *VAR_4,
      struct iwl_rx_packet *VAR_5)
{
 struct iwl_mvm_stat_data VAR_6 = {
  .mvm = VAR_4,
 };
 int VAR_7;
 int VAR_8;
 u8 *VAR_9;
 __le32 *VAR_10;
 __le32 *VAR_11;
 __le32 VAR_12;

 if (!FUNC_6(VAR_4)) {
  if (FUNC_5(VAR_4))
   VAR_7 = sizeof(struct iwl_notif_statistics_v11);
  else
   VAR_7 = sizeof(struct iwl_notif_statistics_v10);
 } else {
  VAR_7 = sizeof(struct iwl_notif_statistics);
 }

 if (FUNC_1(FUNC_9(VAR_5) != VAR_7,
        "received invalid statistics size (%d)!\n",
        FUNC_9(VAR_5)))
  return;

 if (!FUNC_6(VAR_4)) {
  struct iwl_notif_statistics_v11 *VAR_13 = (void *)&VAR_5->data;

  VAR_6.mac_id = VAR_13->rx.general.mac_id;
  VAR_6.beacon_filter_average_energy =
   VAR_13->general.common.beacon_filter_average_energy;

  VAR_4->rx_stats_v3 = VAR_13->rx;

  VAR_4->radio_stats.rx_time =
   FUNC_11(VAR_13->general.common.rx_time);
  VAR_4->radio_stats.tx_time =
   FUNC_11(VAR_13->general.common.tx_time);
  VAR_4->radio_stats.on_time_rf =
   FUNC_11(VAR_13->general.common.on_time_rf);
  VAR_4->radio_stats.on_time_scan =
   FUNC_11(VAR_13->general.common.on_time_scan);

  VAR_6.general = &VAR_13->general;

  VAR_12 = VAR_13->flag;
 } else {
  struct iwl_notif_statistics *VAR_14 = (void *)&VAR_5->data;

  VAR_6.mac_id = VAR_14->rx.general.mac_id;
  VAR_6.beacon_filter_average_energy =
   VAR_14->general.common.beacon_filter_average_energy;

  VAR_4->rx_stats = VAR_14->rx;

  VAR_4->radio_stats.rx_time =
   FUNC_11(VAR_14->general.common.rx_time);
  VAR_4->radio_stats.tx_time =
   FUNC_11(VAR_14->general.common.tx_time);
  VAR_4->radio_stats.on_time_rf =
   FUNC_11(VAR_14->general.common.on_time_rf);
  VAR_4->radio_stats.on_time_scan =
   FUNC_11(VAR_14->general.common.on_time_scan);

  VAR_6.general = &VAR_14->general;

  VAR_12 = VAR_14->flag;
 }

 FUNC_7(VAR_4, VAR_5);

 FUNC_4(VAR_4->hw,
         VAR_0,
         VAR_3,
         &VAR_6);

 if (!FUNC_5(VAR_4))
  return;

 if (!FUNC_6(VAR_4)) {
  struct iwl_notif_statistics_v11 *VAR_15 = (void *)&VAR_5->data;

  VAR_9 = (void *)&VAR_15->load_stats.avg_energy;
  VAR_10 = (void *)&VAR_15->load_stats.byte_count;
  VAR_11 = (void *)&VAR_15->load_stats.air_time;
 } else {
  struct iwl_notif_statistics *VAR_16 = (void *)&VAR_5->data;

  VAR_9 = (void *)&VAR_16->load_stats.avg_energy;
  VAR_10 = (void *)&VAR_16->load_stats.byte_count;
  VAR_11 = (void *)&VAR_16->load_stats.air_time;
 }

 FUNC_12();
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4->fw_id_to_mac_id); VAR_8++) {
  struct iwl_mvm_sta *VAR_17;

  if (!VAR_9[VAR_8])
   continue;

  VAR_17 = FUNC_8(VAR_4, VAR_8);
  if (!VAR_17)
   continue;
  VAR_17->avg_energy = VAR_9[VAR_8];
 }
 FUNC_13();






 if (!(FUNC_10(VAR_12) & VAR_1))
  return;

 FUNC_14(&VAR_4->tcm.lock);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  struct iwl_mvm_tcm_mac *VAR_18 = &VAR_4->tcm.data[VAR_8];
  u32 VAR_19 = FUNC_10(VAR_11[VAR_8]);
  u32 VAR_20 = FUNC_10(VAR_10[VAR_8]);

  VAR_18->uapsd_nonagg_detect.rx_bytes += VAR_20;
  if (VAR_19) {

   FUNC_3(&VAR_18->uapsd_nonagg_detect.rate);
   FUNC_2(&VAR_18->uapsd_nonagg_detect.rate,
          VAR_20 * 8 / VAR_19);
  }

  VAR_18->rx.airtime += VAR_19;
 }
 FUNC_15(&VAR_4->tcm.lock);
}
