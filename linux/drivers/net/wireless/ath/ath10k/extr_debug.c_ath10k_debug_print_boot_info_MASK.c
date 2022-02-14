
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int htt_op_version; int wmi_op_version; } ;
struct TYPE_6__ {TYPE_2__ fw_file; } ;
struct TYPE_4__ {int target_version_minor; int target_version_major; } ;
struct ath10k {int dev_flags; int max_num_stations; int cal_mode; TYPE_3__ normal_mode_fw; TYPE_1__ htt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,char*,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct ath10k *VAR_2)
{
 FUNC_1(VAR_2, "htt-ver %d.%d wmi-op %d htt-op %d cal %s max-sta %d raw %d hwcrypto %d\n",
      VAR_2->htt.target_version_major,
      VAR_2->htt.target_version_minor,
      VAR_2->normal_mode_fw.fw_file.wmi_op_version,
      VAR_2->normal_mode_fw.fw_file.htt_op_version,
      FUNC_0(VAR_2->cal_mode),
      VAR_2->max_num_stations,
      FUNC_2(VAR_1, &VAR_2->dev_flags),
      !FUNC_2(VAR_0, &VAR_2->dev_flags));
}
