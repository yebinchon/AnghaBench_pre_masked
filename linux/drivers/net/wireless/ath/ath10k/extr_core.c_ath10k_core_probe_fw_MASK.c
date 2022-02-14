
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int target_info ;
struct bmi_target_info {int version; } ;
struct TYPE_9__ {int fw_features; int fw_version; } ;
struct TYPE_10__ {TYPE_4__ fw_file; } ;
struct TYPE_6__ {int bus; } ;
struct ath10k {int conf_mutex; TYPE_5__ normal_mode_fw; int mac_addr; int dev; TYPE_3__* hw; TYPE_1__ hif; int target_version; } ;
struct TYPE_8__ {TYPE_2__* wiphy; } ;
struct TYPE_7__ {int fw_version; int hw_version; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct ath10k*,struct bmi_target_info*) ;
 int FUNC_2 (struct ath10k*,struct bmi_target_info*) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*,int ) ;
 int FUNC_6 (struct ath10k*) ;
 int FUNC_7 (struct ath10k*) ;
 int FUNC_8 (struct ath10k*) ;
 int FUNC_9 (struct ath10k*) ;
 int FUNC_10 (struct ath10k*) ;
 int FUNC_11 (struct ath10k*,int ,TYPE_5__*) ;
 int FUNC_12 (struct ath10k*) ;
 int FUNC_13 (struct ath10k*,int ,char*,...) ;
 int FUNC_14 (struct ath10k*) ;
 int FUNC_15 (struct ath10k*) ;
 int FUNC_16 (struct ath10k*) ;
 int FUNC_17 (struct ath10k*,char*,int) ;
 int FUNC_18 (struct ath10k*,struct bmi_target_info*) ;
 int FUNC_19 (struct ath10k*) ;
 int FUNC_20 (struct ath10k*,int ) ;
 int FUNC_21 (struct ath10k*) ;
 int FUNC_22 (struct ath10k*,TYPE_4__*) ;
 int FUNC_23 (int ,int ,int) ;
 int FUNC_24 (int ,int ,int) ;
 int FUNC_25 (struct bmi_target_info*,int ,int) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int ,int ) ;

__attribute__((used)) static int FUNC_29(struct ath10k *VAR_5)
{
 struct bmi_target_info VAR_6;
 int VAR_7 = 0;

 VAR_7 = FUNC_20(VAR_5, VAR_2);
 if (VAR_7) {
  FUNC_17(VAR_5, "could not power on hif bus (%d)\n", VAR_7);
  return VAR_7;
 }

 switch (VAR_5->hif.bus) {
 case 130:
  FUNC_25(&VAR_6, 0, sizeof(VAR_6));
  VAR_7 = FUNC_2(VAR_5, &VAR_6);
  if (VAR_7) {
   FUNC_17(VAR_5, "could not get target info (%d)\n", VAR_7);
   goto err_power_down;
  }
  VAR_5->target_version = VAR_6.version;
  VAR_5->hw->wiphy->hw_version = VAR_6.version;
  break;
 case 131:
 case 132:
 case 128:
  FUNC_25(&VAR_6, 0, sizeof(VAR_6));
  VAR_7 = FUNC_1(VAR_5, &VAR_6);
  if (VAR_7) {
   FUNC_17(VAR_5, "could not get target info (%d)\n", VAR_7);
   goto err_power_down;
  }
  VAR_5->target_version = VAR_6.version;
  VAR_5->hw->wiphy->hw_version = VAR_6.version;
  break;
 case 129:
  FUNC_25(&VAR_6, 0, sizeof(VAR_6));
  VAR_7 = FUNC_18(VAR_5, &VAR_6);
  if (VAR_7) {
   FUNC_17(VAR_5, "could not get target info (%d)\n", VAR_7);
   goto err_power_down;
  }
  VAR_5->target_version = VAR_6.version;
  VAR_5->hw->wiphy->hw_version = VAR_6.version;
  break;
 default:
  FUNC_17(VAR_5, "incorrect hif bus type: %d\n", VAR_5->hif.bus);
 }

 VAR_7 = FUNC_21(VAR_5);
 if (VAR_7) {
  FUNC_17(VAR_5, "could not get hw params (%d)\n", VAR_7);
  goto err_power_down;
 }

 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7) {
  FUNC_17(VAR_5, "could not fetch firmware files (%d)\n", VAR_7);
  goto err_power_down;
 }

 FUNC_0(sizeof(VAR_5->hw->wiphy->fw_version) !=
       sizeof(VAR_5->normal_mode_fw.fw_file.fw_version));
 FUNC_24(VAR_5->hw->wiphy->fw_version, VAR_5->normal_mode_fw.fw_file.fw_version,
        sizeof(VAR_5->hw->wiphy->fw_version));

 FUNC_16(VAR_5);

 if (!FUNC_28(VAR_3,
        VAR_5->normal_mode_fw.fw_file.fw_features)) {
  VAR_7 = FUNC_10(VAR_5);
  if (VAR_7) {



   FUNC_13(VAR_5, VAR_1,
       "could not load pre cal data: %d\n", VAR_7);
  }

  VAR_7 = FUNC_8(VAR_5);
  if (VAR_7 && VAR_7 != -VAR_4) {
   FUNC_17(VAR_5, "failed to get board id from otp: %d\n",
       VAR_7);
   goto err_free_firmware_files;
  }

  VAR_7 = FUNC_4(VAR_5);
  if (VAR_7)
   FUNC_13(VAR_5, VAR_1, "SMBIOS bdf variant name not set.\n");

  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7)
   FUNC_13(VAR_5, VAR_1, "DT bdf variant name not set.\n");

  VAR_7 = FUNC_5(VAR_5, VAR_0);
  if (VAR_7) {
   FUNC_17(VAR_5, "failed to fetch board file: %d\n", VAR_7);
   goto err_free_firmware_files;
  }

  FUNC_14(VAR_5);
 }

 FUNC_23(VAR_5->dev, VAR_5->mac_addr, sizeof(VAR_5->mac_addr));

 VAR_7 = FUNC_9(VAR_5);
 if (VAR_7) {
  FUNC_17(VAR_5, "fatal problem with firmware features: %d\n",
      VAR_7);
  goto err_free_firmware_files;
 }

 if (!FUNC_28(VAR_3,
        VAR_5->normal_mode_fw.fw_file.fw_features)) {
  VAR_7 = FUNC_22(VAR_5,
      &VAR_5->normal_mode_fw.fw_file);
  if (VAR_7) {
   FUNC_17(VAR_5, "failed to initialize code swap segment: %d\n",
       VAR_7);
   goto err_free_firmware_files;
  }
 }

 FUNC_26(&VAR_5->conf_mutex);

 VAR_7 = FUNC_11(VAR_5, VAR_2,
    &VAR_5->normal_mode_fw);
 if (VAR_7) {
  FUNC_17(VAR_5, "could not init core (%d)\n", VAR_7);
  goto err_unlock;
 }

 FUNC_15(VAR_5);
 FUNC_12(VAR_5);

 FUNC_27(&VAR_5->conf_mutex);

 FUNC_19(VAR_5);
 return 0;

err_unlock:
 FUNC_27(&VAR_5->conf_mutex);

err_free_firmware_files:
 FUNC_7(VAR_5);

err_power_down:
 FUNC_19(VAR_5);

 return VAR_7;
}
