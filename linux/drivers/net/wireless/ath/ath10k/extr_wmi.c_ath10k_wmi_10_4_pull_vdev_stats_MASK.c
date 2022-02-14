
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_vdev_stats_extd {int rx_iftmr_dup_cnt; int rx_iftmr_cnt; int rx_ftmr_dup_cnt; int rx_ftmr_cnt; int tx_ftm_fail; int tx_ftm_suc_retry; int tx_ftm_suc; int mpdu_fail_retry; int mpdu_suc_multitry; int mpdu_suc_retry; int mpdu_sw_requeued; int ppdu_nonaggr_cnt; int mpdu_queued; int ppdu_noack; int ppdu_aggr_cnt; int vdev_id; } ;
struct ath10k_fw_stats_vdev_extd {void* rx_iftmr_dup_cnt; void* rx_iftmr_cnt; void* rx_ftmr_dup_cnt; void* rx_ftmr_cnt; void* tx_ftm_fail; void* tx_ftm_suc_retry; void* tx_ftm_suc; void* mpdu_fail_retry; void* mpdu_suc_multitry; void* mpdu_suc_retry; void* mpdu_sw_requeued; void* ppdu_nonaggr_cnt; void* mpdu_queued; void* ppdu_noack; void* ppdu_aggr_cnt; void* vdev_id; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(const struct wmi_vdev_stats_extd *VAR_0,
    struct ath10k_fw_stats_vdev_extd *VAR_1)
{
 VAR_1->vdev_id = FUNC_0(VAR_0->vdev_id);
 VAR_1->ppdu_aggr_cnt = FUNC_0(VAR_0->ppdu_aggr_cnt);
 VAR_1->ppdu_noack = FUNC_0(VAR_0->ppdu_noack);
 VAR_1->mpdu_queued = FUNC_0(VAR_0->mpdu_queued);
 VAR_1->ppdu_nonaggr_cnt = FUNC_0(VAR_0->ppdu_nonaggr_cnt);
 VAR_1->mpdu_sw_requeued = FUNC_0(VAR_0->mpdu_sw_requeued);
 VAR_1->mpdu_suc_retry = FUNC_0(VAR_0->mpdu_suc_retry);
 VAR_1->mpdu_suc_multitry = FUNC_0(VAR_0->mpdu_suc_multitry);
 VAR_1->mpdu_fail_retry = FUNC_0(VAR_0->mpdu_fail_retry);
 VAR_1->tx_ftm_suc = FUNC_0(VAR_0->tx_ftm_suc);
 VAR_1->tx_ftm_suc_retry = FUNC_0(VAR_0->tx_ftm_suc_retry);
 VAR_1->tx_ftm_fail = FUNC_0(VAR_0->tx_ftm_fail);
 VAR_1->rx_ftmr_cnt = FUNC_0(VAR_0->rx_ftmr_cnt);
 VAR_1->rx_ftmr_dup_cnt = FUNC_0(VAR_0->rx_ftmr_dup_cnt);
 VAR_1->rx_iftmr_cnt = FUNC_0(VAR_0->rx_iftmr_cnt);
 VAR_1->rx_iftmr_dup_cnt = FUNC_0(VAR_0->rx_iftmr_dup_cnt);
}
