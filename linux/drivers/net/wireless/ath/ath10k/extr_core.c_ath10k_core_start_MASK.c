
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


typedef int u32 ;
struct TYPE_23__ {int fw_features; } ;
struct ath10k_fw_components {TYPE_6__ fw_file; } ;
struct TYPE_20__ {int in_ord_rx; } ;
struct TYPE_26__ {TYPE_3__ rx_ring; } ;
struct TYPE_25__ {scalar_t__ hw_filter_reset_required; } ;
struct TYPE_24__ {int svc_map; } ;
struct TYPE_19__ {int target_send_suspend_complete; } ;
struct TYPE_17__ {TYPE_2__ htc_ops; } ;
struct TYPE_18__ {scalar_t__ bus; } ;
struct ath10k {int max_num_vdevs; int free_vdev_map; TYPE_9__ htt; int arvifs; TYPE_8__ hw_params; int mac_addr; TYPE_7__ wmi; struct ath10k_fw_components const* running_fw; TYPE_5__* hw; TYPE_15__ htc; TYPE_1__ hif; int dev_flags; int conf_mutex; } ;
typedef enum ath10k_firmware_mode { ____Placeholder_ath10k_firmware_mode } ath10k_firmware_mode ;
struct TYPE_22__ {TYPE_4__* wiphy; } ;
struct TYPE_21__ {int fw_version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
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
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,int ,int) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*,int ,char*,int ) ;
 int FUNC_7 (struct ath10k*) ;
 int FUNC_8 (struct ath10k*) ;
 int FUNC_9 (struct ath10k*) ;
 int FUNC_10 (struct ath10k*,char*,...) ;
 int FUNC_11 (struct ath10k*,int ) ;
 int FUNC_12 (struct ath10k*) ;
 int FUNC_13 (struct ath10k*) ;
 int FUNC_14 (struct ath10k*) ;
 int FUNC_15 (struct ath10k*) ;
 int FUNC_16 (TYPE_15__*) ;
 int FUNC_17 (TYPE_15__*) ;
 int FUNC_18 (TYPE_9__*) ;
 int FUNC_19 (struct ath10k*) ;
 int FUNC_20 (TYPE_9__*) ;
 int FUNC_21 (TYPE_9__*) ;
 int FUNC_22 (struct ath10k*) ;
 int FUNC_23 (TYPE_9__*) ;
 int FUNC_24 (TYPE_9__*) ;
 int FUNC_25 (TYPE_9__*) ;
 scalar_t__ FUNC_26 (struct ath10k*) ;
 int FUNC_27 (struct ath10k*,int) ;
 int FUNC_28 (struct ath10k*) ;
 int FUNC_29 (struct ath10k*,int ) ;
 scalar_t__ FUNC_30 (struct ath10k*) ;
 int VAR_25 ;
 int FUNC_31 (struct ath10k*,char*,...) ;
 int FUNC_32 (struct ath10k*) ;
 int FUNC_33 (struct ath10k*) ;
 int FUNC_34 (struct ath10k*) ;
 int FUNC_35 (struct ath10k*) ;
 int FUNC_36 (struct ath10k*,int ) ;
 int FUNC_37 (struct ath10k*) ;
 int FUNC_38 (struct ath10k*) ;
 int FUNC_39 (int ,int *) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_40 (int *) ;
 scalar_t__ FUNC_41 (int ,int ) ;

int FUNC_42(struct ath10k *VAR_28, enum ath10k_firmware_mode VAR_29,
        const struct ath10k_fw_components *VAR_30)
{
 int VAR_31;
 u32 VAR_32;

 FUNC_40(&VAR_28->conf_mutex);

 FUNC_39(VAR_3, &VAR_28->dev_flags);

 VAR_28->running_fw = VAR_30;

 if (!FUNC_41(VAR_5,
        VAR_28->running_fw->fw_file.fw_features)) {
  FUNC_2(VAR_28);

  if (FUNC_26(VAR_28)) {
   VAR_31 = -VAR_7;
   goto err;
  }

  VAR_31 = FUNC_8(VAR_28);
  if (VAR_31)
   goto err;
  if (FUNC_41(VAR_6,
        VAR_28->running_fw->fw_file.fw_features)) {
   VAR_31 = FUNC_3(VAR_28, VAR_27, 1);
   if (VAR_31) {
    FUNC_10(VAR_28, "could not write to skip_clock_init: %d\n",
        VAR_31);
    goto err;
   }
  }

  VAR_31 = FUNC_9(VAR_28);
  if (VAR_31)
   goto err;

  VAR_31 = FUNC_28(VAR_28);
  if (VAR_31)
   goto err;

  if (VAR_28->hif.bus == VAR_0)
   FUNC_27(VAR_28, VAR_29);
 }

 VAR_28->htc.htc_ops.target_send_suspend_complete =
  VAR_25;

 VAR_31 = FUNC_15(VAR_28);
 if (VAR_31) {
  FUNC_10(VAR_28, "could not init HTC (%d)\n", VAR_31);
  goto err;
 }

 if (!FUNC_41(VAR_5,
        VAR_28->running_fw->fw_file.fw_features)) {
  VAR_31 = FUNC_1(VAR_28);
  if (VAR_31)
   goto err;
 }

 VAR_31 = FUNC_32(VAR_28);
 if (VAR_31) {
  FUNC_10(VAR_28, "WMI attach failed: %d\n", VAR_31);
  goto err;
 }

 VAR_31 = FUNC_19(VAR_28);
 if (VAR_31) {
  FUNC_10(VAR_28, "failed to init htt: %d\n", VAR_31);
  goto err_wmi_detach;
 }

 VAR_31 = FUNC_25(&VAR_28->htt);
 if (VAR_31) {
  FUNC_10(VAR_28, "failed to alloc htt tx: %d\n", VAR_31);
  goto err_wmi_detach;
 }




 VAR_28->htt.rx_ring.in_ord_rx = !!(FUNC_41(VAR_21,
      VAR_28->wmi.svc_map));

 VAR_31 = FUNC_20(&VAR_28->htt);
 if (VAR_31) {
  FUNC_10(VAR_28, "failed to alloc htt rx: %d\n", VAR_31);
  goto err_htt_tx_detach;
 }

 VAR_31 = FUNC_12(VAR_28);
 if (VAR_31) {
  FUNC_10(VAR_28, "could not start HIF: %d\n", VAR_31);
  goto err_htt_rx_detach;
 }

 VAR_31 = FUNC_17(&VAR_28->htc);
 if (VAR_31) {
  FUNC_10(VAR_28, "failed to connect to HTC: %d\n", VAR_31);
  goto err_hif_stop;
 }

 VAR_31 = FUNC_14(VAR_28);
 if (VAR_31) {
  FUNC_10(VAR_28, "failed to swap mailbox: %d\n", VAR_31);
  goto err_hif_stop;
 }

 if (VAR_29 == VAR_2) {
  VAR_31 = FUNC_18(&VAR_28->htt);
  if (VAR_31) {
   FUNC_10(VAR_28, "failed to connect htt (%d)\n", VAR_31);
   goto err_hif_stop;
  }
 }

 VAR_31 = FUNC_34(VAR_28);
 if (VAR_31) {
  FUNC_10(VAR_28, "could not connect wmi: %d\n", VAR_31);
  goto err_hif_stop;
 }

 VAR_31 = FUNC_16(&VAR_28->htc);
 if (VAR_31) {
  FUNC_10(VAR_28, "failed to start htc: %d\n", VAR_31);
  goto err_hif_stop;
 }

 if (VAR_29 == VAR_2) {
  VAR_31 = FUNC_37(VAR_28);
  if (VAR_31) {
   FUNC_31(VAR_28, "wmi service ready event not received");
   goto err_hif_stop;
  }
 }

 FUNC_6(VAR_28, VAR_1, "firmware %s booted\n",
     VAR_28->hw->wiphy->fw_version);

 if (FUNC_41(VAR_19, VAR_28->wmi.svc_map) &&
     VAR_29 == VAR_2) {
  VAR_32 = 0;
  if (FUNC_30(VAR_28))
   VAR_32 = VAR_11;


  VAR_32 |= VAR_16;

  if (FUNC_41(VAR_17, VAR_28->wmi.svc_map))
   VAR_32 |= VAR_9;






  if (FUNC_41(VAR_18, VAR_28->wmi.svc_map) &&
      FUNC_41(VAR_4,
        VAR_28->running_fw->fw_file.fw_features))
   VAR_32 |= VAR_10;

  if (FUNC_41(VAR_22,
        VAR_28->wmi.svc_map))
   VAR_32 |= VAR_13;

  if (FUNC_41(VAR_23,
        VAR_28->wmi.svc_map))
   VAR_32 |= VAR_14;

  if (FUNC_41(VAR_24,
        VAR_28->wmi.svc_map))
   VAR_32 |= VAR_15;

  if (FUNC_41(VAR_20, VAR_28->wmi.svc_map))
   VAR_32 |= VAR_12;

  VAR_31 = FUNC_29(VAR_28, VAR_32);
  if (VAR_31) {
   FUNC_10(VAR_28,
       "failed to send ext resource cfg command : %d\n",
       VAR_31);
   goto err_hif_stop;
  }
 }

 VAR_31 = FUNC_33(VAR_28);
 if (VAR_31) {
  FUNC_10(VAR_28, "could not send WMI init command (%d)\n",
      VAR_31);
  goto err_hif_stop;
 }

 VAR_31 = FUNC_38(VAR_28);
 if (VAR_31) {
  FUNC_10(VAR_28, "wmi unified ready event not received\n");
  goto err_hif_stop;
 }

 VAR_31 = FUNC_4(VAR_28);
 if (VAR_31) {
  FUNC_10(VAR_28, "compat services failed: %d\n", VAR_31);
  goto err_hif_stop;
 }

 VAR_31 = FUNC_36(VAR_28, VAR_28->mac_addr);
 if (VAR_31 && VAR_31 != -VAR_8) {
  FUNC_10(VAR_28,
      "failed to set base mac address: %d\n", VAR_31);
  goto err_hif_stop;
 }
 if (VAR_28->hw_params.hw_filter_reset_required &&
     VAR_29 == VAR_2) {
  VAR_31 = FUNC_5(VAR_28);
  if (VAR_31) {
   FUNC_10(VAR_28,
       "failed to reset rx filter: %d\n", VAR_31);
   goto err_hif_stop;
  }
 }

 VAR_31 = FUNC_22(VAR_28);
 if (VAR_31) {
  FUNC_10(VAR_28, "failed to refill htt rx ring: %d\n", VAR_31);
  goto err_hif_stop;
 }

 if (VAR_28->max_num_vdevs >= 64)
  VAR_28->free_vdev_map = 0xFFFFFFFFFFFFFFFFLL;
 else
  VAR_28->free_vdev_map = (1LL << VAR_28->max_num_vdevs) - 1;

 FUNC_0(&VAR_28->arvifs);


 if (VAR_29 == VAR_2) {
  VAR_31 = FUNC_23(&VAR_28->htt);
  if (VAR_31) {
   FUNC_10(VAR_28, "failed to setup htt: %d\n", VAR_31);
   goto err_hif_stop;
  }
 }

 VAR_31 = FUNC_7(VAR_28);
 if (VAR_31)
  goto err_hif_stop;

 VAR_31 = FUNC_11(VAR_28, VAR_26);
 if (VAR_31 && VAR_31 != -VAR_8) {
  FUNC_31(VAR_28, "set traget log mode faileds: %d\n", VAR_31);
  goto err_hif_stop;
 }

 return 0;

err_hif_stop:
 FUNC_13(VAR_28);
err_htt_rx_detach:
 FUNC_21(&VAR_28->htt);
err_htt_tx_detach:
 FUNC_24(&VAR_28->htt);
err_wmi_detach:
 FUNC_35(VAR_28);
err:
 return VAR_31;
}
