
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath10k {int filter_flags; int dev_flags; TYPE_2__* running_fw; scalar_t__ monitor; scalar_t__ monitor_arvif; } ;
struct TYPE_3__ {int * fw_features; } ;
struct TYPE_4__ {TYPE_1__ fw_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct ath10k *VAR_3)
{
 int VAR_4;




 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == 0)
  return 0;




 if (VAR_3->monitor_arvif)
  return 0;

 return VAR_3->monitor ||
        (!FUNC_1(VAR_1,
     VAR_3->running_fw->fw_file.fw_features) &&
  (VAR_3->filter_flags & VAR_2)) ||
        FUNC_1(VAR_0, &VAR_3->dev_flags);
}
