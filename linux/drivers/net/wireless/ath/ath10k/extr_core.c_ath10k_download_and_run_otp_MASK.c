
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int patch_load_addr; int otp_exe_param; } ;
struct ath10k {scalar_t__ cal_mode; TYPE_3__* running_fw; TYPE_1__ hw_params; } ;
struct TYPE_5__ {int fw_features; int otp_len; int otp_data; } ;
struct TYPE_6__ {TYPE_2__ fw_file; int board_len; int board_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath10k*,int,int,int*) ;
 int FUNC_1 (struct ath10k*,int,int ,int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,...) ;
 int FUNC_3 (struct ath10k*,int ,int ) ;
 int FUNC_4 (struct ath10k*,char*,int) ;
 int FUNC_5 (struct ath10k*,char*,int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_7)
{
 u32 VAR_8, VAR_9 = VAR_7->hw_params.patch_load_addr;
 u32 VAR_10 = VAR_7->hw_params.otp_exe_param;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_7,
      VAR_7->running_fw->board_data,
      VAR_7->running_fw->board_len);
 if (VAR_11) {
  FUNC_4(VAR_7, "failed to download board data: %d\n", VAR_11);
  return VAR_11;
 }



 if (!VAR_7->running_fw->fw_file.otp_data ||
     !VAR_7->running_fw->fw_file.otp_len) {
  FUNC_5(VAR_7, "Not running otp, calibration will be incorrect (otp-data %pK otp_len %zd)!\n",
       VAR_7->running_fw->fw_file.otp_data,
       VAR_7->running_fw->fw_file.otp_len);
  return 0;
 }

 FUNC_2(VAR_7, VAR_0, "boot upload otp to 0x%x len %zd\n",
     VAR_9, VAR_7->running_fw->fw_file.otp_len);

 VAR_11 = FUNC_1(VAR_7, VAR_9,
           VAR_7->running_fw->fw_file.otp_data,
           VAR_7->running_fw->fw_file.otp_len);
 if (VAR_11) {
  FUNC_4(VAR_7, "could not write otp (%d)\n", VAR_11);
  return VAR_11;
 }


 if (VAR_7->cal_mode == VAR_2 ||
     VAR_7->cal_mode == VAR_3)
  VAR_10 = VAR_4;

 VAR_11 = FUNC_0(VAR_7, VAR_9, VAR_10, &VAR_8);
 if (VAR_11) {
  FUNC_4(VAR_7, "could not execute otp (%d)\n", VAR_11);
  return VAR_11;
 }

 FUNC_2(VAR_7, VAR_0, "boot otp execute result %d\n", VAR_8);

 if (!(VAR_6 || FUNC_6(VAR_1,
       VAR_7->running_fw->fw_file.fw_features)) &&
     VAR_8 != 0) {
  FUNC_4(VAR_7, "otp calibration failed: %d", VAR_8);
  return -VAR_5;
 }

 return 0;
}
