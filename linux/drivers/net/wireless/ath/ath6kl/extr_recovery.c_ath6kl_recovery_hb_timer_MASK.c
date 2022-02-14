
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int hb_pending; scalar_t__ hb_misscnt; int hb_poll; int hb_timer; scalar_t__ seq_num; } ;
struct ath6kl {scalar_t__ state; TYPE_1__ fw_recovery; int wmi; int flag; } ;
struct TYPE_4__ {int hb_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ath6kl* VAR_4 ;
 int FUNC_0 (struct ath6kl*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 struct ath6kl* FUNC_3 (int ,struct timer_list*,int ) ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_7)
{
 struct ath6kl *VAR_8 = FUNC_3(VAR_8, VAR_7, VAR_5.hb_timer);
 int VAR_9;

 if (FUNC_6(VAR_3, &VAR_8->flag) ||
     (VAR_8->state == VAR_2))
  return;

 if (VAR_8->fw_recovery.hb_pending)
  VAR_8->fw_recovery.hb_misscnt++;
 else
  VAR_8->fw_recovery.hb_misscnt = 0;

 if (VAR_8->fw_recovery.hb_misscnt > VAR_1) {
  VAR_8->fw_recovery.hb_misscnt = 0;
  VAR_8->fw_recovery.seq_num = 0;
  VAR_8->fw_recovery.hb_pending = 0;
  FUNC_0(VAR_8, VAR_0);
  return;
 }

 VAR_8->fw_recovery.seq_num++;
 VAR_8->fw_recovery.hb_pending = 1;

 VAR_9 = FUNC_2(VAR_8->wmi,
      VAR_8->fw_recovery.seq_num, 0);
 if (VAR_9)
  FUNC_1("Failed to send hb challenge request, err:%d\n",
       VAR_9);

 FUNC_4(&VAR_8->fw_recovery.hb_timer, VAR_6 +
    FUNC_5(VAR_8->fw_recovery.hb_poll));
}
