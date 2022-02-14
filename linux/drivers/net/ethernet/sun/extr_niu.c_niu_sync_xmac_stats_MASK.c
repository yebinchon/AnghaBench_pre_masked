
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct niu_xmac_stats {int rx_crc_errors; int rx_len_errors; int rx_code_violations; int rx_octets; int rx_hist_cnt7; int rx_hist_cnt6; int rx_hist_cnt5; int rx_hist_cnt4; int rx_hist_cnt3; int rx_hist_cnt2; int rx_hist_cnt1; int rx_bcasts; int rx_mcasts; int rx_frags; int rx_align_errors; int rx_link_faults; int tx_bytes; int tx_frames; } ;
struct TYPE_2__ {struct niu_xmac_stats xmac; } ;
struct niu {TYPE_1__ mac_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct niu *VAR_18)
{
 struct niu_xmac_stats *VAR_19 = &VAR_18->mac_stats.xmac;

 VAR_19->tx_frames += FUNC_0(VAR_17);
 VAR_19->tx_bytes += FUNC_0(VAR_16);

 VAR_19->rx_link_faults += FUNC_0(VAR_0);
 VAR_19->rx_align_errors += FUNC_0(VAR_1);
 VAR_19->rx_frags += FUNC_0(VAR_6);
 VAR_19->rx_mcasts += FUNC_0(VAR_14);
 VAR_19->rx_bcasts += FUNC_0(VAR_2);
 VAR_19->rx_hist_cnt1 += FUNC_0(VAR_7);
 VAR_19->rx_hist_cnt2 += FUNC_0(VAR_8);
 VAR_19->rx_hist_cnt3 += FUNC_0(VAR_9);
 VAR_19->rx_hist_cnt4 += FUNC_0(VAR_10);
 VAR_19->rx_hist_cnt5 += FUNC_0(VAR_11);
 VAR_19->rx_hist_cnt6 += FUNC_0(VAR_12);
 VAR_19->rx_hist_cnt7 += FUNC_0(VAR_13);
 VAR_19->rx_octets += FUNC_0(VAR_3);
 VAR_19->rx_code_violations += FUNC_0(VAR_4);
 VAR_19->rx_len_errors += FUNC_0(VAR_15);
 VAR_19->rx_crc_errors += FUNC_0(VAR_5);
}
