
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_fw_crash_data {int ramdump_buf; } ;
struct TYPE_2__ {struct ath10k_fw_crash_data* fw_crash_data; } ;
struct ath10k {TYPE_1__ coredump; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct ath10k *VAR_0)
{
 struct ath10k_fw_crash_data *VAR_1 = VAR_0->coredump.fw_crash_data;

 FUNC_0(VAR_1->ramdump_buf);
}
