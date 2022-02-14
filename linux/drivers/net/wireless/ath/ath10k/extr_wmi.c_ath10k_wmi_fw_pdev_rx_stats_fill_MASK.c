
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_fw_stats_pdev {int mpdu_errs; int phy_err_drop; int phy_errs; int oversize_amsdu; int loc_mpdus; int loc_msdus; int htt_mpdus; int htt_msdus; int r3_frags; int r2_frags; int r1_frags; int r0_frags; int status_rcvd; int mid_ppdu_route_change; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char*,...) ;

__attribute__((used)) static void
FUNC_1(const struct ath10k_fw_stats_pdev *VAR_1,
     char *VAR_2, u32 *VAR_3)
{
 u32 VAR_4 = *VAR_3;
 u32 VAR_5 = VAR_0;

 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "\n%30s\n",
    "ath10k PDEV RX stats");
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s\n\n",
     "=================");

 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Mid PPDU route change",
    VAR_1->mid_ppdu_route_change);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Tot. number of statuses", VAR_1->status_rcvd);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Extra frags on rings 0", VAR_1->r0_frags);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Extra frags on rings 1", VAR_1->r1_frags);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Extra frags on rings 2", VAR_1->r2_frags);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Extra frags on rings 3", VAR_1->r3_frags);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "MSDUs delivered to HTT", VAR_1->htt_msdus);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "MPDUs delivered to HTT", VAR_1->htt_mpdus);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "MSDUs delivered to stack", VAR_1->loc_msdus);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "MPDUs delivered to stack", VAR_1->loc_mpdus);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "Oversized AMSUs", VAR_1->oversize_amsdu);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "PHY errors", VAR_1->phy_errs);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "PHY errors drops", VAR_1->phy_err_drop);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
    "MPDU errors (FCS, MIC, ENC)", VAR_1->mpdu_errs);
 *VAR_3 = VAR_4;
}
