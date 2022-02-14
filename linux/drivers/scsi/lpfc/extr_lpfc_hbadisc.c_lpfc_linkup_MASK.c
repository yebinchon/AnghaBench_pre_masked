
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {int dummy; } ;
struct lpfc_hba {int max_vports; int defer_flogi_acc_flag; int hba_flag; TYPE_1__* pport; int fabric_block_timer; int bit_flags; int link_state; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_2__ {scalar_t__ rcv_flogi_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 struct lpfc_vport** FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_4 (struct lpfc_vport*) ;
 struct Scsi_Host* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct lpfc_hba *VAR_3)
{
 struct lpfc_vport **VAR_4;
 int VAR_5;
 struct Scsi_Host *VAR_6 = FUNC_5(VAR_3->pport);

 VAR_3->link_state = VAR_2;


 FUNC_0(VAR_0, &VAR_3->bit_flags);
 FUNC_1(&VAR_3->fabric_block_timer);

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 != ((void*)0))
  for (VAR_5 = 0; VAR_5 <= VAR_3->max_vports && VAR_4[VAR_5] != ((void*)0); VAR_5++)
   FUNC_4(VAR_4[VAR_5]);
 FUNC_3(VAR_3, VAR_4);





 FUNC_6(VAR_6->host_lock);
 VAR_3->pport->rcv_flogi_cnt = 0;
 FUNC_7(VAR_6->host_lock);


 VAR_3->hba_flag &= ~(VAR_1);
 VAR_3->defer_flogi_acc_flag = 0;

 return 0;
}
