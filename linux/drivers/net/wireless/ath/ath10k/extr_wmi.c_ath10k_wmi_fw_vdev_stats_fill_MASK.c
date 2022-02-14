
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_fw_stats_vdev {int * beacon_rssi_history; int * tx_rate_history; int * num_tx_frames_failures; int * num_tx_frames_retries; int * num_tx_frames; int num_tx_not_acked; int num_rx_discard; int num_rx_err; int num_rts_success; int num_rts_fail; int num_rx_frames; int data_snr; int beacon_snr; int vdev_id; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static void
FUNC_2(const struct ath10k_fw_stats_vdev *VAR_1,
         char *VAR_2, u32 *VAR_3)
{
 u32 VAR_4 = *VAR_3;
 u32 VAR_5 = VAR_0;
 int VAR_6;

 VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %u\n",
   "vdev id", VAR_1->vdev_id);
 VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %u\n",
   "beacon snr", VAR_1->beacon_snr);
 VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %u\n",
   "data snr", VAR_1->data_snr);
 VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %u\n",
   "num rx frames", VAR_1->num_rx_frames);
 VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %u\n",
   "num rts fail", VAR_1->num_rts_fail);
 VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %u\n",
   "num rts success", VAR_1->num_rts_success);
 VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %u\n",
   "num rx err", VAR_1->num_rx_err);
 VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %u\n",
   "num rx discard", VAR_1->num_rx_discard);
 VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %u\n",
   "num tx not acked", VAR_1->num_tx_not_acked);

 for (VAR_6 = 0 ; VAR_6 < FUNC_0(VAR_1->num_tx_frames); VAR_6++)
  VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4,
    "%25s [%02d] %u\n",
    "num tx frames", VAR_6,
    VAR_1->num_tx_frames[VAR_6]);

 for (VAR_6 = 0 ; VAR_6 < FUNC_0(VAR_1->num_tx_frames_retries); VAR_6++)
  VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4,
    "%25s [%02d] %u\n",
    "num tx frames retries", VAR_6,
    VAR_1->num_tx_frames_retries[VAR_6]);

 for (VAR_6 = 0 ; VAR_6 < FUNC_0(VAR_1->num_tx_frames_failures); VAR_6++)
  VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4,
    "%25s [%02d] %u\n",
    "num tx frames failures", VAR_6,
    VAR_1->num_tx_frames_failures[VAR_6]);

 for (VAR_6 = 0 ; VAR_6 < FUNC_0(VAR_1->tx_rate_history); VAR_6++)
  VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4,
    "%25s [%02d] 0x%08x\n",
    "tx rate history", VAR_6,
    VAR_1->tx_rate_history[VAR_6]);

 for (VAR_6 = 0 ; VAR_6 < FUNC_0(VAR_1->beacon_rssi_history); VAR_6++)
  VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4,
    "%25s [%02d] %u\n",
    "beacon rssi history", VAR_6,
    VAR_1->beacon_rssi_history[VAR_6]);

 VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_5 - VAR_4, "\n");
 *VAR_3 = VAR_4;
}
