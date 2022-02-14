
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_8__ {int ext_bid_supported; int bmi_ids_valid; scalar_t__ bmi_chip_id; scalar_t__ bmi_board_id; } ;
struct TYPE_6__ {int otp_len; int otp_data; } ;
struct TYPE_7__ {TYPE_2__ fw_file; } ;
struct TYPE_5__ {int patch_load_addr; } ;
struct ath10k {scalar_t__ cal_mode; TYPE_4__ id; TYPE_3__ normal_mode_fw; TYPE_1__ hw_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (struct ath10k*,int,int,int*) ;
 int FUNC_2 (struct ath10k*,int,int ,int ) ;
 int FUNC_3 (struct ath10k*,int ,char*,...) ;
 int FUNC_4 (struct ath10k*,char*,int) ;
 int FUNC_5 (struct ath10k*,char*) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_11)
{
 u32 VAR_12, VAR_13;
 u8 VAR_14, VAR_15;
 bool VAR_16;
 int VAR_17, VAR_18;

 VAR_13 = VAR_11->hw_params.patch_load_addr;

 if (!VAR_11->normal_mode_fw.fw_file.otp_data ||
     !VAR_11->normal_mode_fw.fw_file.otp_len) {
  FUNC_5(VAR_11,
       "failed to retrieve board id because of invalid otp\n");
  return -VAR_9;
 }

 FUNC_3(VAR_11, VAR_4,
     "boot upload otp to 0x%x len %zd for board id\n",
     VAR_13, VAR_11->normal_mode_fw.fw_file.otp_len);

 VAR_17 = FUNC_2(VAR_11, VAR_13,
           VAR_11->normal_mode_fw.fw_file.otp_data,
           VAR_11->normal_mode_fw.fw_file.otp_len);
 if (VAR_17) {
  FUNC_4(VAR_11, "could not write otp for board id check: %d\n",
      VAR_17);
  return VAR_17;
 }

 if (VAR_11->cal_mode == VAR_5 ||
     VAR_11->cal_mode == VAR_6)
  VAR_18 = VAR_8;
 else
  VAR_18 = VAR_7;

 VAR_17 = FUNC_1(VAR_11, VAR_13, VAR_18, &VAR_12);
 if (VAR_17) {
  FUNC_4(VAR_11, "could not execute otp for board id check: %d\n",
      VAR_17);
  return VAR_17;
 }

 VAR_14 = FUNC_0(VAR_12, VAR_0);
 VAR_15 = FUNC_0(VAR_12, VAR_2);
 VAR_16 = (VAR_12 & VAR_3);

 FUNC_3(VAR_11, VAR_4,
     "boot get otp board id result 0x%08x board_id %d chip_id %d ext_bid_support %d\n",
     VAR_12, VAR_14, VAR_15, VAR_16);

 VAR_11->id.ext_bid_supported = VAR_16;

 if ((VAR_12 & VAR_1) != 0 ||
     (VAR_14 == 0)) {
  FUNC_3(VAR_11, VAR_4,
      "board id does not exist in otp, ignore it\n");
  return -VAR_10;
 }

 VAR_11->id.bmi_ids_valid = 1;
 VAR_11->id.bmi_board_id = VAR_14;
 VAR_11->id.bmi_chip_id = VAR_15;

 return 0;
}
