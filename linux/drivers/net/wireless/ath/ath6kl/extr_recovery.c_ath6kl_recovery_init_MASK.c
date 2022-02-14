
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_fw_recovery {int hb_pending; scalar_t__ hb_poll; int hb_timer; scalar_t__ hb_misscnt; scalar_t__ seq_num; int recovery_work; } ;
struct ath6kl {struct ath6kl_fw_recovery fw_recovery; int flag; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ,int ) ;

void FUNC_5(struct ath6kl *VAR_5)
{
 struct ath6kl_fw_recovery *VAR_6 = &VAR_5->fw_recovery;

 FUNC_1(VAR_0, &VAR_5->flag);
 FUNC_0(&VAR_6->recovery_work, VAR_3);
 VAR_6->seq_num = 0;
 VAR_6->hb_misscnt = 0;
 VAR_5->fw_recovery.hb_pending = 0;
 FUNC_4(&VAR_5->fw_recovery.hb_timer, VAR_2,
      VAR_1);

 if (VAR_5->fw_recovery.hb_poll)
  FUNC_2(&VAR_5->fw_recovery.hb_timer, VAR_4 +
     FUNC_3(VAR_5->fw_recovery.hb_poll));
}
