
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; scalar_t__ work_port_events; } ;
struct lpfc_hba {int max_vports; scalar_t__ cfg_xri_rebalancing; int hbalock; scalar_t__ work_ha; TYPE_1__* pport; } ;
struct Scsi_Host {int * host_lock; } ;
struct TYPE_2__ {int fc_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lpfc_vport** FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,int ,int ,char*) ;
 struct Scsi_Host* FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (struct lpfc_vport*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void
FUNC_12(struct lpfc_hba *VAR_3)
{
 struct Scsi_Host *VAR_4;
 struct lpfc_vport **VAR_5;
 int VAR_6;

 if (VAR_3->pport->fc_flag & VAR_0)
  return;


 FUNC_8(VAR_3);




 FUNC_4(VAR_3);
 FUNC_3(VAR_3->pport);

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 != ((void*)0))
  for (VAR_6 = 0; VAR_6 <= VAR_3->max_vports && VAR_5[VAR_6] != ((void*)0); VAR_6++)
   FUNC_9(VAR_5[VAR_6]);
 FUNC_2(VAR_3, VAR_5);
 FUNC_5(VAR_3, VAR_1, VAR_2,
   "0460 Bring Adapter offline\n");


 FUNC_7(VAR_3);
 FUNC_10(&VAR_3->hbalock);
 VAR_3->work_ha = 0;
 FUNC_11(&VAR_3->hbalock);
 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 != ((void*)0))
  for (VAR_6 = 0; VAR_6 <= VAR_3->max_vports && VAR_5[VAR_6] != ((void*)0); VAR_6++) {
   VAR_4 = FUNC_6(VAR_5[VAR_6]);
   FUNC_10(VAR_4->host_lock);
   VAR_5[VAR_6]->work_port_events = 0;
   VAR_5[VAR_6]->fc_flag |= VAR_0;
   FUNC_11(VAR_4->host_lock);
  }
 FUNC_2(VAR_3, VAR_5);

 if (VAR_3->cfg_xri_rebalancing)
  FUNC_1(VAR_3);
}
