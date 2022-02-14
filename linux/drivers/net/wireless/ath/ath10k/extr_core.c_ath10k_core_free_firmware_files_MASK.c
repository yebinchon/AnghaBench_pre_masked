
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ firmware_len; int * firmware_data; int * firmware; scalar_t__ otp_len; int * otp_data; } ;
struct TYPE_3__ {TYPE_2__ fw_file; } ;
struct ath10k {int * pre_cal_file; int * cal_file; TYPE_1__ normal_mode_fw; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ath10k*,TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ath10k *VAR_0)
{
 if (!FUNC_0(VAR_0->normal_mode_fw.fw_file.firmware))
  FUNC_2(VAR_0->normal_mode_fw.fw_file.firmware);

 if (!FUNC_0(VAR_0->cal_file))
  FUNC_2(VAR_0->cal_file);

 if (!FUNC_0(VAR_0->pre_cal_file))
  FUNC_2(VAR_0->pre_cal_file);

 FUNC_1(VAR_0, &VAR_0->normal_mode_fw.fw_file);

 VAR_0->normal_mode_fw.fw_file.otp_data = ((void*)0);
 VAR_0->normal_mode_fw.fw_file.otp_len = 0;

 VAR_0->normal_mode_fw.fw_file.firmware = ((void*)0);
 VAR_0->normal_mode_fw.fw_file.firmware_data = ((void*)0);
 VAR_0->normal_mode_fw.fw_file.firmware_len = 0;

 VAR_0->cal_file = ((void*)0);
 VAR_0->pre_cal_file = ((void*)0);
}
