
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_fw_stats_vdev_extd {int tx_ftm_suc; int tx_ftm_suc_retry; int tx_ftm_fail; int rx_ftmr_cnt; int rx_ftmr_dup_cnt; int rx_iftmr_cnt; int rx_iftmr_dup_cnt; int mpdu_fail_retry; int mpdu_suc_multitry; int mpdu_suc_retry; int mpdu_sw_requeued; int ppdu_nonaggr_cnt; int mpdu_queued; int ppdu_noack; int ppdu_aggr_cnt; int vdev_id; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static void
FUNC_2(const struct ath10k_fw_stats_vdev_extd *VAR_3,
       char *VAR_4, u32 *VAR_5)
{
 u32 VAR_6 = *VAR_5;
 u32 VAR_7 = VAR_0;
 u32 VAR_8;

 VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
    "vdev id", VAR_3->vdev_id);
 VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
    "ppdu aggr count", VAR_3->ppdu_aggr_cnt);
 VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
    "ppdu noack", VAR_3->ppdu_noack);
 VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
    "mpdu queued", VAR_3->mpdu_queued);
 VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
    "ppdu nonaggr count", VAR_3->ppdu_nonaggr_cnt);
 VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
    "mpdu sw requeued", VAR_3->mpdu_sw_requeued);
 VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
    "mpdu success retry", VAR_3->mpdu_suc_retry);
 VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
    "mpdu success multitry", VAR_3->mpdu_suc_multitry);
 VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
    "mpdu fail retry", VAR_3->mpdu_fail_retry);
 VAR_8 = VAR_3->tx_ftm_suc;
 if (VAR_8 & VAR_2)
  VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
     "tx ftm success",
     FUNC_0(VAR_8, VAR_1));
 VAR_8 = VAR_3->tx_ftm_suc_retry;
 if (VAR_8 & VAR_2)
  VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
     "tx ftm success retry",
     FUNC_0(VAR_8, VAR_1));
 VAR_8 = VAR_3->tx_ftm_fail;
 if (VAR_8 & VAR_2)
  VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
     "tx ftm fail",
     FUNC_0(VAR_8, VAR_1));
 VAR_8 = VAR_3->rx_ftmr_cnt;
 if (VAR_8 & VAR_2)
  VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
     "rx ftm request count",
     FUNC_0(VAR_8, VAR_1));
 VAR_8 = VAR_3->rx_ftmr_dup_cnt;
 if (VAR_8 & VAR_2)
  VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
     "rx ftm request dup count",
     FUNC_0(VAR_8, VAR_1));
 VAR_8 = VAR_3->rx_iftmr_cnt;
 if (VAR_8 & VAR_2)
  VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
     "rx initial ftm req count",
     FUNC_0(VAR_8, VAR_1));
 VAR_8 = VAR_3->rx_iftmr_dup_cnt;
 if (VAR_8 & VAR_2)
  VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "%30s %u\n",
     "rx initial ftm req dup cnt",
     FUNC_0(VAR_8, VAR_1));
 VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_7 - VAR_6, "\n");

 *VAR_5 = VAR_6;
}
