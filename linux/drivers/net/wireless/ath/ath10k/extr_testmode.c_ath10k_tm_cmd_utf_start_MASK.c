
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_6__ {char* fw_version; int * firmware; scalar_t__ codeswap_len; scalar_t__ codeswap_data; int wmi_op_version; } ;
struct TYPE_7__ {TYPE_2__ fw_file; } ;
struct TYPE_5__ {int utf_monitor; TYPE_4__ utf_mode_fw; } ;
struct ath10k {scalar_t__ state; int conf_mutex; TYPE_1__ testmode; int data_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,TYPE_4__*) ;
 int FUNC_2 (struct ath10k*,int ,char*,...) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*,int ) ;
 int FUNC_6 (struct ath10k*,char*,char const*) ;
 int FUNC_7 (struct ath10k*,TYPE_2__*) ;
 int FUNC_8 (struct ath10k*,TYPE_2__*) ;
 int FUNC_9 (struct ath10k*) ;
 int FUNC_10 (struct ath10k*,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (char*) ;

__attribute__((used)) static int FUNC_17(struct ath10k *VAR_7, struct nlattr *VAR_8[])
{
 const char *VAR_9;
 int VAR_10;

 FUNC_2(VAR_7, VAR_0, "testmode cmd utf start\n");

 FUNC_11(&VAR_7->conf_mutex);

 if (VAR_7->state == VAR_3) {
  VAR_10 = -VAR_4;
  goto err;
 }


 if (VAR_7->state != VAR_2) {
  VAR_10 = -VAR_5;
  goto err;
 }

 if (FUNC_0(VAR_7->testmode.utf_mode_fw.fw_file.firmware != ((void*)0))) {

  VAR_10 = -VAR_6;
  goto err;
 }

 VAR_10 = FUNC_9(VAR_7);
 if (VAR_10) {
  FUNC_3(VAR_7, "failed to fetch UTF firmware: %d", VAR_10);
  goto err;
 }

 if (VAR_7->testmode.utf_mode_fw.fw_file.codeswap_data &&
     VAR_7->testmode.utf_mode_fw.fw_file.codeswap_len) {
  VAR_10 = FUNC_7(VAR_7,
      &VAR_7->testmode.utf_mode_fw.fw_file);
  if (VAR_10) {
   FUNC_10(VAR_7,
        "failed to init utf code swap segment: %d\n",
        VAR_10);
   goto err_release_utf_mode_fw;
  }
 }

 FUNC_14(&VAR_7->data_lock);
 VAR_7->testmode.utf_monitor = 1;
 FUNC_15(&VAR_7->data_lock);

 FUNC_2(VAR_7, VAR_0, "testmode wmi version %d\n",
     VAR_7->testmode.utf_mode_fw.fw_file.wmi_op_version);

 VAR_10 = FUNC_5(VAR_7, VAR_1);
 if (VAR_10) {
  FUNC_3(VAR_7, "failed to power up hif (testmode): %d\n", VAR_10);
  VAR_7->state = VAR_2;
  goto err_release_utf_mode_fw;
 }

 VAR_10 = FUNC_1(VAR_7, VAR_1,
    &VAR_7->testmode.utf_mode_fw);
 if (VAR_10) {
  FUNC_3(VAR_7, "failed to start core (testmode): %d\n", VAR_10);
  VAR_7->state = VAR_2;
  goto err_power_down;
 }

 VAR_7->state = VAR_3;

 if (FUNC_16(VAR_7->testmode.utf_mode_fw.fw_file.fw_version) > 0)
  VAR_9 = VAR_7->testmode.utf_mode_fw.fw_file.fw_version;
 else
  VAR_9 = "API 1";

 FUNC_6(VAR_7, "UTF firmware %s started\n", VAR_9);

 FUNC_12(&VAR_7->conf_mutex);

 return 0;

err_power_down:
 FUNC_4(VAR_7);

err_release_utf_mode_fw:
 if (VAR_7->testmode.utf_mode_fw.fw_file.codeswap_data &&
     VAR_7->testmode.utf_mode_fw.fw_file.codeswap_len)
  FUNC_8(VAR_7,
          &VAR_7->testmode.utf_mode_fw.fw_file);

 FUNC_13(VAR_7->testmode.utf_mode_fw.fw_file.firmware);
 VAR_7->testmode.utf_mode_fw.fw_file.firmware = ((void*)0);

err:
 FUNC_12(&VAR_7->conf_mutex);

 return VAR_10;
}
