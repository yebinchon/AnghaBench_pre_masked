
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_fw_stats_pdev {int txop_ovf; int phy_underrun; int pdev_resets; int pdev_tx_timeout; int pdev_cont_xretry; int illgl_rate_phy_err; int sw_retry_failure; int self_triggers; int data_rc; int tx_ko; int mpdus_requed; int tx_abort; int underrun; int hw_reaped; int hw_queued; int local_freed; int local_enqued; int wmm_drop; int mpdu_enqued; int msdu_enqued; int comp_delivered; int comp_queued; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char*,...) ;

__attribute__((used)) static void
FUNC_1(const struct ath10k_fw_stats_pdev *VAR_1,
     char *VAR_2, u32 *VAR_3)
{
 u32 VAR_4 = *VAR_3;
 u32 VAR_5 = VAR_0;

 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "\n%30s\n",
    "ath10k PDEV TX stats");
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s\n\n",
     "=================");

 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "HTT cookies queued", VAR_1->comp_queued);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "HTT cookies disp.", VAR_1->comp_delivered);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "MSDU queued", VAR_1->msdu_enqued);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "MPDU queued", VAR_1->mpdu_enqued);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "MSDUs dropped", VAR_1->wmm_drop);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Local enqued", VAR_1->local_enqued);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Local freed", VAR_1->local_freed);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "HW queued", VAR_1->hw_queued);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "PPDUs reaped", VAR_1->hw_reaped);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Num underruns", VAR_1->underrun);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "PPDUs cleaned", VAR_1->tx_abort);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "MPDUs requed", VAR_1->mpdus_requed);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Excessive retries", VAR_1->tx_ko);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "HW rate", VAR_1->data_rc);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Sched self triggers", VAR_1->self_triggers);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Dropped due to SW retries",
    VAR_1->sw_retry_failure);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Illegal rate phy errors",
    VAR_1->illgl_rate_phy_err);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Pdev continuous xretry", VAR_1->pdev_cont_xretry);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "TX timeout", VAR_1->pdev_tx_timeout);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "PDEV resets", VAR_1->pdev_resets);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "PHY underrun", VAR_1->phy_underrun);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "MPDU is more than txop limit", VAR_1->txop_ovf);
 *VAR_3 = VAR_4;
}
