
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * firmware; scalar_t__ codeswap_len; scalar_t__ codeswap_data; } ;
struct TYPE_4__ {TYPE_3__ fw_file; } ;
struct TYPE_5__ {int utf_monitor; TYPE_1__ utf_mode_fw; } ;
struct ath10k {int state; TYPE_2__ testmode; int data_lock; int conf_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ath10k *VAR_1)
{
 FUNC_3(&VAR_1->conf_mutex);

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 FUNC_5(&VAR_1->data_lock);

 VAR_1->testmode.utf_monitor = 0;

 FUNC_6(&VAR_1->data_lock);

 if (VAR_1->testmode.utf_mode_fw.fw_file.codeswap_data &&
     VAR_1->testmode.utf_mode_fw.fw_file.codeswap_len)
  FUNC_2(VAR_1,
          &VAR_1->testmode.utf_mode_fw.fw_file);

 FUNC_4(VAR_1->testmode.utf_mode_fw.fw_file.firmware);
 VAR_1->testmode.utf_mode_fw.fw_file.firmware = ((void*)0);

 VAR_1->state = VAR_0;
}
