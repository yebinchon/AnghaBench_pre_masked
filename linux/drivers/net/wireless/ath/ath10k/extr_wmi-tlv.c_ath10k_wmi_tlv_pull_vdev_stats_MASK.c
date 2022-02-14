
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_tlv_vdev_stats {int * beacon_rssi_history; int * tx_rate_history; int * num_tx_frames_failures; int * num_tx_frames_retries; int * num_tx_frames; int num_tx_not_acked; int num_rx_discard; int num_rx_err; int num_rts_success; int num_rts_fail; int num_rx_frames; int data_snr; int beacon_snr; int vdev_id; } ;
struct ath10k_fw_stats_vdev {void** beacon_rssi_history; void** tx_rate_history; void** num_tx_frames_failures; void** num_tx_frames_retries; void** num_tx_frames; void* num_tx_not_acked; void* num_rx_discard; void* num_rx_err; void* num_rts_success; void* num_rts_fail; void* num_rx_frames; void* data_snr; void* beacon_snr; void* vdev_id; } ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const struct wmi_tlv_vdev_stats *VAR_0,
        struct ath10k_fw_stats_vdev *VAR_1)
{
 int VAR_2;

 VAR_1->vdev_id = FUNC_1(VAR_0->vdev_id);
 VAR_1->beacon_snr = FUNC_1(VAR_0->beacon_snr);
 VAR_1->data_snr = FUNC_1(VAR_0->data_snr);
 VAR_1->num_rx_frames = FUNC_1(VAR_0->num_rx_frames);
 VAR_1->num_rts_fail = FUNC_1(VAR_0->num_rts_fail);
 VAR_1->num_rts_success = FUNC_1(VAR_0->num_rts_success);
 VAR_1->num_rx_err = FUNC_1(VAR_0->num_rx_err);
 VAR_1->num_rx_discard = FUNC_1(VAR_0->num_rx_discard);
 VAR_1->num_tx_not_acked = FUNC_1(VAR_0->num_tx_not_acked);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->num_tx_frames); VAR_2++)
  VAR_1->num_tx_frames[VAR_2] =
   FUNC_1(VAR_0->num_tx_frames[VAR_2]);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->num_tx_frames_retries); VAR_2++)
  VAR_1->num_tx_frames_retries[VAR_2] =
   FUNC_1(VAR_0->num_tx_frames_retries[VAR_2]);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->num_tx_frames_failures); VAR_2++)
  VAR_1->num_tx_frames_failures[VAR_2] =
   FUNC_1(VAR_0->num_tx_frames_failures[VAR_2]);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->tx_rate_history); VAR_2++)
  VAR_1->tx_rate_history[VAR_2] =
   FUNC_1(VAR_0->tx_rate_history[VAR_2]);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->beacon_rssi_history); VAR_2++)
  VAR_1->beacon_rssi_history[VAR_2] =
   FUNC_1(VAR_0->beacon_rssi_history[VAR_2]);
}
