
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_10_4_pdev_stats_tx {int mpdus_expired; int mpdus_hw_filter; int mpdus_ack_failed; int mpdus_truncated; int mpdus_sw_flush; int mu_seq_posted; int seq_restarted; int seq_completed; int seq_failed_queueing; int seq_posted; int hw_paused; int txop_ovf; int phy_underrun; int pdev_resets; int pdev_tx_timeout; int pdev_cont_xretry; int illgl_rate_phy_err; int sw_retry_failure; int self_triggers; int data_rc; int tx_ko; int mpdus_requed; int tx_abort; int underrun; int hw_reaped; int hw_queued; int local_freed; int local_enqued; int wmm_drop; int mpdu_enqued; int msdu_enqued; int comp_delivered; int comp_queued; } ;
struct ath10k_fw_stats_pdev {void* mpdus_expired; void* mpdus_hw_filter; void* mpdus_ack_failed; void* mpdus_truncated; void* mpdus_sw_flush; void* mu_seq_posted; void* seq_restarted; void* seq_completed; void* seq_failed_queueing; void* seq_posted; void* hw_paused; void* txop_ovf; void* phy_underrun; void* pdev_resets; void* pdev_tx_timeout; void* pdev_cont_xretry; void* illgl_rate_phy_err; void* sw_retry_failure; void* self_triggers; void* data_rc; void* tx_ko; void* mpdus_requed; void* tx_abort; void* underrun; void* hw_reaped; void* hw_queued; void* local_freed; void* local_enqued; void* wmm_drop; void* mpdu_enqued; void* msdu_enqued; void* comp_delivered; void* comp_queued; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(const struct wmi_10_4_pdev_stats_tx *VAR_0,
       struct ath10k_fw_stats_pdev *VAR_1)
{
 VAR_1->comp_queued = FUNC_0(VAR_0->comp_queued);
 VAR_1->comp_delivered = FUNC_0(VAR_0->comp_delivered);
 VAR_1->msdu_enqued = FUNC_0(VAR_0->msdu_enqued);
 VAR_1->mpdu_enqued = FUNC_0(VAR_0->mpdu_enqued);
 VAR_1->wmm_drop = FUNC_0(VAR_0->wmm_drop);
 VAR_1->local_enqued = FUNC_0(VAR_0->local_enqued);
 VAR_1->local_freed = FUNC_0(VAR_0->local_freed);
 VAR_1->hw_queued = FUNC_0(VAR_0->hw_queued);
 VAR_1->hw_reaped = FUNC_0(VAR_0->hw_reaped);
 VAR_1->underrun = FUNC_0(VAR_0->underrun);
 VAR_1->tx_abort = FUNC_0(VAR_0->tx_abort);
 VAR_1->mpdus_requed = FUNC_0(VAR_0->mpdus_requed);
 VAR_1->tx_ko = FUNC_0(VAR_0->tx_ko);
 VAR_1->data_rc = FUNC_0(VAR_0->data_rc);
 VAR_1->self_triggers = FUNC_0(VAR_0->self_triggers);
 VAR_1->sw_retry_failure = FUNC_0(VAR_0->sw_retry_failure);
 VAR_1->illgl_rate_phy_err = FUNC_0(VAR_0->illgl_rate_phy_err);
 VAR_1->pdev_cont_xretry = FUNC_0(VAR_0->pdev_cont_xretry);
 VAR_1->pdev_tx_timeout = FUNC_0(VAR_0->pdev_tx_timeout);
 VAR_1->pdev_resets = FUNC_0(VAR_0->pdev_resets);
 VAR_1->phy_underrun = FUNC_0(VAR_0->phy_underrun);
 VAR_1->txop_ovf = FUNC_0(VAR_0->txop_ovf);
 VAR_1->hw_paused = FUNC_0(VAR_0->hw_paused);
 VAR_1->seq_posted = FUNC_0(VAR_0->seq_posted);
 VAR_1->seq_failed_queueing =
  FUNC_0(VAR_0->seq_failed_queueing);
 VAR_1->seq_completed = FUNC_0(VAR_0->seq_completed);
 VAR_1->seq_restarted = FUNC_0(VAR_0->seq_restarted);
 VAR_1->mu_seq_posted = FUNC_0(VAR_0->mu_seq_posted);
 VAR_1->mpdus_sw_flush = FUNC_0(VAR_0->mpdus_sw_flush);
 VAR_1->mpdus_hw_filter = FUNC_0(VAR_0->mpdus_hw_filter);
 VAR_1->mpdus_truncated = FUNC_0(VAR_0->mpdus_truncated);
 VAR_1->mpdus_ack_failed = FUNC_0(VAR_0->mpdus_ack_failed);
 VAR_1->mpdus_hw_filter = FUNC_0(VAR_0->mpdus_hw_filter);
 VAR_1->mpdus_expired = FUNC_0(VAR_0->mpdus_expired);
}
