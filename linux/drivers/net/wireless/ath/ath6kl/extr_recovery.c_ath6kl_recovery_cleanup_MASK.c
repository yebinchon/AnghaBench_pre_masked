
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int recovery_work; int hb_timer; int enable; } ;
struct ath6kl {TYPE_1__ fw_recovery; int flag; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct ath6kl *VAR_1)
{
 if (!VAR_1->fw_recovery.enable)
  return;

 FUNC_2(VAR_0, &VAR_1->flag);

 FUNC_1(&VAR_1->fw_recovery.hb_timer);
 FUNC_0(&VAR_1->fw_recovery.recovery_work);
}
