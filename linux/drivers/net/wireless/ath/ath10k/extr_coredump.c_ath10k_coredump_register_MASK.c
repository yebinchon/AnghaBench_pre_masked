
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_fw_crash_data {int ramdump_buf; int ramdump_buf_len; } ;
struct TYPE_2__ {struct ath10k_fw_crash_data* fw_crash_data; } ;
struct ath10k {TYPE_1__ coredump; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct ath10k *VAR_3)
{
 struct ath10k_fw_crash_data *VAR_4 = VAR_3->coredump.fw_crash_data;

 if (FUNC_1(VAR_0, &VAR_2)) {
  VAR_4->ramdump_buf_len = FUNC_0(VAR_3);

  VAR_4->ramdump_buf = FUNC_2(VAR_4->ramdump_buf_len);
  if (!VAR_4->ramdump_buf)
   return -VAR_1;
 }

 return 0;
}
