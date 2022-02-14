
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hb_pending; int hb_poll; int hb_timer; scalar_t__ hb_misscnt; scalar_t__ seq_num; int enable; } ;
struct ath6kl {TYPE_1__ fw_recovery; int flag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct ath6kl *VAR_2)
{
 if (!VAR_2->fw_recovery.enable)
  return;

 FUNC_0(VAR_0, &VAR_2->flag);

 if (!VAR_2->fw_recovery.hb_poll)
  return;

 VAR_2->fw_recovery.hb_pending = 0;
 VAR_2->fw_recovery.seq_num = 0;
 VAR_2->fw_recovery.hb_misscnt = 0;
 FUNC_1(&VAR_2->fw_recovery.hb_timer,
    VAR_1 + FUNC_2(VAR_2->fw_recovery.hb_poll));
}
