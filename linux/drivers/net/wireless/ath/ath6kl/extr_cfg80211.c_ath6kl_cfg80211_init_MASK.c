
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wiphy {int max_remain_on_channel_duration; int interface_modes; int max_scan_ie_len; int available_antennas_tx; int available_antennas_rx; int flags; int max_sched_scan_reqs; int probe_resp_offload; int features; void* max_sched_scan_ssids; int * wowlan; int n_cipher_suites; int cipher_suites; int signal_type; TYPE_4__** bands; void* max_match_sets; void* max_scan_ssids; int reg_notifier; int mgmt_stypes; } ;
struct TYPE_8__ {int cap; int tx_ant; int rx_ant; } ;
struct ath6kl {int wiphy_registered; struct wiphy* wiphy; int fw_capabilities; TYPE_3__ hw; scalar_t__ p2p; int dev; } ;
struct TYPE_6__ {int* rx_mask; } ;
struct TYPE_7__ {int ht_supported; TYPE_1__ mcs; scalar_t__ cap; } ;
struct TYPE_9__ {TYPE_2__ ht_cap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 void* VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;






 TYPE_4__ VAR_26 ;
 TYPE_4__ VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (char*) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_4 (struct wiphy*,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct wiphy*) ;

int FUNC_7(struct ath6kl *VAR_32)
{
 struct wiphy *VAR_33 = VAR_32->wiphy;
 bool VAR_34 = 0, VAR_35 = 0, VAR_36 = 0;
 int VAR_37;

 VAR_33->mgmt_stypes = VAR_29;

 VAR_33->max_remain_on_channel_duration = 5000;


 FUNC_4(VAR_33, VAR_32->dev);

 VAR_33->interface_modes = FUNC_1(VAR_18) |
     FUNC_1(VAR_14) |
     FUNC_1(VAR_15);
 if (VAR_32->p2p) {
  VAR_33->interface_modes |= FUNC_1(VAR_17) |
       FUNC_1(VAR_16);
 }

 if (FUNC_2(VAR_7) &&
     FUNC_5(VAR_2, VAR_32->fw_capabilities)) {
  VAR_33->reg_notifier = VAR_28;
  VAR_32->wiphy->features |= VAR_12;
 }


 VAR_33->max_scan_ssids = VAR_9;


 if (FUNC_5(VAR_4,
       VAR_32->fw_capabilities))
  VAR_33->max_match_sets = VAR_9;

 VAR_33->max_scan_ie_len = 1000;
 switch (VAR_32->hw.cap) {
 case 131:
  VAR_36 = 1;

 case 130:
  VAR_35 = 1;
  break;
 case 129:
  VAR_36 = 1;

 case 128:
  VAR_34 = 1;
  break;
 case 133:
  VAR_36 = 1;

 case 132:
  VAR_34 = 1;
  VAR_35 = 1;
  break;
 default:
  FUNC_3("invalid phy capability!\n");
  return -VAR_8;
 }






 if (!(VAR_36 &&
       FUNC_5(VAR_3,
         VAR_32->fw_capabilities))) {
  VAR_26.ht_cap.cap = 0;
  VAR_26.ht_cap.ht_supported = 0;
  VAR_27.ht_cap.cap = 0;
  VAR_27.ht_cap.ht_supported = 0;

  if (VAR_36)
   FUNC_3("Firmware lacks RSN-CAP-OVERRIDE, so HT (802.11n) is disabled.");
 }

 if (FUNC_5(VAR_0,
       VAR_32->fw_capabilities)) {
  VAR_26.ht_cap.mcs.rx_mask[0] = 0xff;
  VAR_27.ht_cap.mcs.rx_mask[0] = 0xff;
  VAR_26.ht_cap.mcs.rx_mask[1] = 0xff;
  VAR_27.ht_cap.mcs.rx_mask[1] = 0xff;
  VAR_32->hw.tx_ant = 0x3;
  VAR_32->hw.rx_ant = 0x3;
 } else {
  VAR_26.ht_cap.mcs.rx_mask[0] = 0xff;
  VAR_27.ht_cap.mcs.rx_mask[0] = 0xff;
  VAR_32->hw.tx_ant = 1;
  VAR_32->hw.rx_ant = 1;
 }

 VAR_33->available_antennas_tx = VAR_32->hw.tx_ant;
 VAR_33->available_antennas_rx = VAR_32->hw.rx_ant;

 if (VAR_34)
  VAR_33->bands[VAR_10] = &VAR_26;
 if (VAR_35)
  VAR_33->bands[VAR_11] = &VAR_27;

 VAR_33->signal_type = VAR_6;

 VAR_33->cipher_suites = VAR_31;
 VAR_33->n_cipher_suites = FUNC_0(VAR_31);





 VAR_33->max_sched_scan_ssids = VAR_9;

 VAR_32->wiphy->flags |= VAR_25 |
       VAR_24 |
       VAR_23 |
       VAR_22;

 if (FUNC_5(VAR_5, VAR_32->fw_capabilities))
  VAR_32->wiphy->max_sched_scan_reqs = 1;

 if (FUNC_5(VAR_1,
       VAR_32->fw_capabilities))
  VAR_32->wiphy->features |= VAR_13;

 VAR_32->wiphy->probe_resp_offload =
  VAR_20 |
  VAR_21 |
  VAR_19;

 VAR_37 = FUNC_6(VAR_33);
 if (VAR_37 < 0) {
  FUNC_3("couldn't register wiphy device\n");
  return VAR_37;
 }

 VAR_32->wiphy_registered = 1;

 return 0;
}
