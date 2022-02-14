
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* fw_crash_data; } ;
struct ath10k {TYPE_1__ coredump; } ;
struct TYPE_4__ {scalar_t__ ramdump_buf_len; struct TYPE_4__* ramdump_buf; } ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(struct ath10k *VAR_0)
{
 if (VAR_0->coredump.fw_crash_data->ramdump_buf) {
  FUNC_0(VAR_0->coredump.fw_crash_data->ramdump_buf);
  VAR_0->coredump.fw_crash_data->ramdump_buf = ((void*)0);
  VAR_0->coredump.fw_crash_data->ramdump_buf_len = 0;
 }

 FUNC_0(VAR_0->coredump.fw_crash_data);
 VAR_0->coredump.fw_crash_data = ((void*)0);
}
