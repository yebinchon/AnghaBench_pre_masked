
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ err_reason; int enable; } ;
struct ath6kl {scalar_t__ state; TYPE_1__ fw_recovery; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath6kl*) ;
 int FUNC_2 (struct ath6kl*) ;

void FUNC_3(struct ath6kl *VAR_2)
{
 if (!VAR_2->fw_recovery.enable)
  return;

 FUNC_2(VAR_2);

 if (!VAR_2->fw_recovery.err_reason)
  return;


 VAR_2->fw_recovery.err_reason = 0;
 FUNC_0(VAR_2->state != VAR_0);
 VAR_2->state = VAR_1;
 FUNC_1(VAR_2);
 VAR_2->state = VAR_0;
}
