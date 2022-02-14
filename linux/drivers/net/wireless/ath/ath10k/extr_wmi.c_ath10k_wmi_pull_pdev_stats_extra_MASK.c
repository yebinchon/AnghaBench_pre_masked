
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_pdev_stats_extra {int mib_int_count; int no_beacons; int fcs_bad; int rts_good; int rts_bad; int ack_rx_bad; } ;
struct ath10k_fw_stats_pdev {void* mib_int_count; void* no_beacons; void* fcs_bad; void* rts_good; void* rts_bad; void* ack_rx_bad; } ;


 void* FUNC_0 (int ) ;

void FUNC_1(const struct wmi_pdev_stats_extra *VAR_0,
          struct ath10k_fw_stats_pdev *VAR_1)
{
 VAR_1->ack_rx_bad = FUNC_0(VAR_0->ack_rx_bad);
 VAR_1->rts_bad = FUNC_0(VAR_0->rts_bad);
 VAR_1->rts_good = FUNC_0(VAR_0->rts_good);
 VAR_1->fcs_bad = FUNC_0(VAR_0->fcs_bad);
 VAR_1->no_beacons = FUNC_0(VAR_0->no_beacons);
 VAR_1->mib_int_count = FUNC_0(VAR_0->mib_int_count);
}
