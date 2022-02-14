
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int bmi_eboard_id; } ;
struct TYPE_6__ {int otp_len; int otp_data; } ;
struct TYPE_7__ {TYPE_2__ fw_file; } ;
struct TYPE_5__ {int patch_load_addr; } ;
struct ath10k {TYPE_4__ id; TYPE_3__ normal_mode_fw; TYPE_1__ hw_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath10k*,int,int ,int*) ;
 int FUNC_1 (struct ath10k*,int,int ,int) ;
 int FUNC_2 (struct ath10k*,int ,char*,...) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 int FUNC_4 (struct ath10k*,char*) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_5)
{
 u32 VAR_6, VAR_7;
 u8 VAR_8;
 int VAR_9;

 VAR_7 = VAR_5->hw_params.patch_load_addr;

 if (!VAR_5->normal_mode_fw.fw_file.otp_data ||
     !VAR_5->normal_mode_fw.fw_file.otp_len) {
  FUNC_4(VAR_5,
       "failed to retrieve extended board id due to otp binary missing\n");
  return -VAR_3;
 }

 FUNC_2(VAR_5, VAR_1,
     "boot upload otp to 0x%x len %zd for ext board id\n",
     VAR_7, VAR_5->normal_mode_fw.fw_file.otp_len);

 VAR_9 = FUNC_1(VAR_5, VAR_7,
           VAR_5->normal_mode_fw.fw_file.otp_data,
           VAR_5->normal_mode_fw.fw_file.otp_len);
 if (VAR_9) {
  FUNC_3(VAR_5, "could not write otp for ext board id check: %d\n",
      VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_0(VAR_5, VAR_7, VAR_2, &VAR_6);
 if (VAR_9) {
  FUNC_3(VAR_5, "could not execute otp for ext board id check: %d\n",
      VAR_9);
  return VAR_9;
 }

 if (!VAR_6) {
  FUNC_2(VAR_5, VAR_1,
      "ext board id does not exist in otp, ignore it\n");
  return -VAR_4;
 }

 VAR_8 = VAR_6 & VAR_0;

 FUNC_2(VAR_5, VAR_1,
     "boot get otp ext board id result 0x%08x ext_board_id %d\n",
     VAR_6, VAR_8);

 VAR_5->id.bmi_eboard_id = VAR_8;

 return 0;
}
