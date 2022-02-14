
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int listentry; struct lpfc_hba* phba; } ;
struct lpfc_hba {int port_list_lock; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_vport*) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct lpfc_vport *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_4(VAR_0);
 struct lpfc_hba *VAR_2 = VAR_0->phba;

 FUNC_3(VAR_0);
 FUNC_0(VAR_1);
 FUNC_5(VAR_1);

 FUNC_6(&VAR_2->port_list_lock);
 FUNC_1(&VAR_0->listentry);
 FUNC_7(&VAR_2->port_list_lock);

 FUNC_2(VAR_0);
 return;
}
