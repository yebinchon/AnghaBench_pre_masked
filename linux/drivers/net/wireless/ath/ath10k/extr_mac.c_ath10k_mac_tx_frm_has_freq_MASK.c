
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int target_version_major; int target_version_minor; } ;
struct ath10k {TYPE_3__* running_fw; TYPE_1__ htt; } ;
struct TYPE_5__ {scalar_t__ htt_op_version; } ;
struct TYPE_6__ {TYPE_2__ fw_file; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct ath10k *VAR_1)
{






 return (VAR_1->htt.target_version_major >= 3 &&
  VAR_1->htt.target_version_minor >= 4 &&
  VAR_1->running_fw->fw_file.htt_op_version == VAR_0);
}
