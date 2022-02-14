
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_pdev_stats_rx {int mpdu_errs; int phy_err_drop; int phy_errs; int oversize_amsdu; int loc_mpdus; int loc_msdus; int htt_mpdus; int htt_msdus; int r3_frags; int r2_frags; int r1_frags; int r0_frags; int status_rcvd; int mid_ppdu_route_change; } ;
struct ath10k_fw_stats_pdev {void* mpdu_errs; void* phy_err_drop; void* phy_errs; void* oversize_amsdu; void* loc_mpdus; void* loc_msdus; void* htt_mpdus; void* htt_msdus; void* r3_frags; void* r2_frags; void* r1_frags; void* r0_frags; void* status_rcvd; void* mid_ppdu_route_change; } ;


 void* FUNC_0 (int ) ;

void FUNC_1(const struct wmi_pdev_stats_rx *VAR_0,
       struct ath10k_fw_stats_pdev *VAR_1)
{
 VAR_1->mid_ppdu_route_change = FUNC_0(VAR_0->mid_ppdu_route_change);
 VAR_1->status_rcvd = FUNC_0(VAR_0->status_rcvd);
 VAR_1->r0_frags = FUNC_0(VAR_0->r0_frags);
 VAR_1->r1_frags = FUNC_0(VAR_0->r1_frags);
 VAR_1->r2_frags = FUNC_0(VAR_0->r2_frags);
 VAR_1->r3_frags = FUNC_0(VAR_0->r3_frags);
 VAR_1->htt_msdus = FUNC_0(VAR_0->htt_msdus);
 VAR_1->htt_mpdus = FUNC_0(VAR_0->htt_mpdus);
 VAR_1->loc_msdus = FUNC_0(VAR_0->loc_msdus);
 VAR_1->loc_mpdus = FUNC_0(VAR_0->loc_mpdus);
 VAR_1->oversize_amsdu = FUNC_0(VAR_0->oversize_amsdu);
 VAR_1->phy_errs = FUNC_0(VAR_0->phy_errs);
 VAR_1->phy_err_drop = FUNC_0(VAR_0->phy_err_drop);
 VAR_1->mpdu_errs = FUNC_0(VAR_0->mpdu_errs);
}
