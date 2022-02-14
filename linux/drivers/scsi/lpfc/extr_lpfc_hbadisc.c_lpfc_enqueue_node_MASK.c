
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int fc_nodes; } ;
struct lpfc_nodelist {int nlp_listp; } ;
struct Scsi_Host {int host_lock; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct Scsi_Host* FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct lpfc_vport *VAR_0, struct lpfc_nodelist *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_2(VAR_0);

 if (FUNC_1(&VAR_1->nlp_listp)) {
  FUNC_3(VAR_2->host_lock);
  FUNC_0(&VAR_1->nlp_listp, &VAR_0->fc_nodes);
  FUNC_4(VAR_2->host_lock);
 }
}
