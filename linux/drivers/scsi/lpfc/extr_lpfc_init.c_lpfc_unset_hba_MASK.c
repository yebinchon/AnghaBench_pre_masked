
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {scalar_t__ work_port_events; int load_flag; } ;
struct lpfc_hba {struct lpfc_vport* pport; int vpi_ids; int vpi_bmask; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct Scsi_Host* FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_1)
{
 struct lpfc_vport *VAR_2 = VAR_1->pport;
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_2);

 FUNC_6(VAR_3->host_lock);
 VAR_2->load_flag |= VAR_0;
 FUNC_7(VAR_3->host_lock);

 FUNC_0(VAR_1->vpi_bmask);
 FUNC_0(VAR_1->vpi_ids);

 FUNC_5(VAR_1);

 VAR_1->pport->work_port_events = 0;

 FUNC_4(VAR_1);

 FUNC_2(VAR_1);

 FUNC_3(VAR_1);

 return;
}
