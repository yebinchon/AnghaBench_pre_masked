
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int recovery_work; int err_reason; int enable; } ;
struct ath6kl {scalar_t__ state; TYPE_1__ fw_recovery; int ath6kl_wq; int flag; } ;
typedef enum ath6kl_fw_err { ____Placeholder_ath6kl_fw_err } ath6kl_fw_err ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct ath6kl *VAR_3, enum ath6kl_fw_err VAR_4)
{
 if (!VAR_3->fw_recovery.enable)
  return;

 FUNC_0(VAR_0, "Fw error detected, reason:%d\n",
     VAR_4);

 FUNC_2(VAR_4, &VAR_3->fw_recovery.err_reason);

 if (!FUNC_3(VAR_2, &VAR_3->flag) &&
     VAR_3->state != VAR_1)
  FUNC_1(VAR_3->ath6kl_wq, &VAR_3->fw_recovery.recovery_work);
}
