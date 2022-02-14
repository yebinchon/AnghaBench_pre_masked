
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int otp_len; scalar_t__ otp_data; } ;
struct ath10k_fw_components {TYPE_5__ fw_file; int board_len; int board_data; } ;
struct TYPE_9__ {int otp_len; scalar_t__ otp_data; } ;
struct TYPE_10__ {TYPE_3__ fw_file; int board_len; int board_data; } ;
struct TYPE_8__ {struct ath10k_fw_components utf_mode_fw; } ;
struct TYPE_7__ {int bus; } ;
struct ath10k {TYPE_4__ normal_mode_fw; TYPE_2__ testmode; TYPE_1__ hif; } ;
typedef int fw_name ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,char*,TYPE_5__*) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 int FUNC_4 (struct ath10k*,char*) ;
 int FUNC_5 (struct ath10k*,TYPE_5__*) ;
 int FUNC_6 (char*,int,char*,int ,int,...) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_2)
{
 struct ath10k_fw_components *VAR_3;
 int VAR_4;
 char VAR_5[100];
 int VAR_6 = 2;

 switch (VAR_2->hif.bus) {
 case 129:
 case 128:
  FUNC_6(VAR_5, sizeof(VAR_5), "%s-%s-%d.bin",
     VAR_1, FUNC_0(VAR_2->hif.bus),
     VAR_6);
  break;
 default:
  FUNC_6(VAR_5, sizeof(VAR_5), "%s-%d.bin",
     VAR_1, VAR_6);
  break;
 }

 VAR_4 = FUNC_1(VAR_2, VAR_5,
            &VAR_2->testmode.utf_mode_fw.fw_file);
 if (VAR_4 == 0) {
  FUNC_2(VAR_2, VAR_0, "testmode using fw utf api 2");
  goto out;
 }

 VAR_4 = FUNC_5(VAR_2, &VAR_2->testmode.utf_mode_fw.fw_file);
 if (VAR_4) {
  FUNC_3(VAR_2, "failed to fetch utf firmware binary: %d", VAR_4);
  return VAR_4;
 }

 FUNC_2(VAR_2, VAR_0, "testmode using utf api 1");

out:
 VAR_3 = &VAR_2->testmode.utf_mode_fw;




 VAR_3->board_data = VAR_2->normal_mode_fw.board_data;
 VAR_3->board_len = VAR_2->normal_mode_fw.board_len;

 if (!VAR_3->fw_file.otp_data) {
  FUNC_4(VAR_2, "utf.bin didn't contain otp binary, taking it from the normal mode firmware");
  VAR_3->fw_file.otp_data = VAR_2->normal_mode_fw.fw_file.otp_data;
  VAR_3->fw_file.otp_len = VAR_2->normal_mode_fw.fw_file.otp_len;
 }

 return 0;
}
