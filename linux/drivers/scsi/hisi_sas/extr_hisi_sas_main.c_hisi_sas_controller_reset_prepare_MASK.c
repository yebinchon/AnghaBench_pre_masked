
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_hba {int flags; int timer; TYPE_1__* hw; int phy_state; int sem; struct Scsi_Host* shost; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int (* wait_cmds_complete_timeout ) (struct hisi_hba*,int,int) ;int (* get_phys_state ) (struct hisi_hba*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct hisi_hba*) ;
 int FUNC_5 (struct hisi_hba*,int,int) ;
 scalar_t__ FUNC_6 (int *) ;

void FUNC_7(struct hisi_hba *VAR_1)
{
 struct Scsi_Host *VAR_2 = VAR_1->shost;

 FUNC_1(&VAR_1->sem);
 VAR_1->phy_state = VAR_1->hw->get_phys_state(VAR_1);

 FUNC_2(VAR_2);
 VAR_1->hw->wait_cmds_complete_timeout(VAR_1, 100, 5000);

 if (FUNC_6(&VAR_1->timer))
  FUNC_0(&VAR_1->timer);

 FUNC_3(VAR_0, &VAR_1->flags);
}
