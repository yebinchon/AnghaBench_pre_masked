
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {scalar_t__ port_state; int fc_flag; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_type; } ;
struct lpfc_hba {struct lpfc_vport* pport; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_4 (struct lpfc_vport*,int ) ;
 int FUNC_5 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_6 (struct lpfc_vport*,int ) ;
 struct Scsi_Host* FUNC_7 (struct lpfc_vport*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static struct lpfc_nodelist *
FUNC_10(struct lpfc_vport *VAR_7)
{
 struct lpfc_nodelist *VAR_8;
 struct Scsi_Host *VAR_9;
 struct lpfc_hba *VAR_10;

 if (!VAR_7)
  return ((void*)0);
 VAR_10 = VAR_7->phba;
 if (!VAR_10)
  return ((void*)0);
 VAR_8 = FUNC_4(VAR_7, VAR_1);
 if (!VAR_8) {

  VAR_8 = FUNC_6(VAR_7, VAR_1);
  if (!VAR_8)
   return 0;

  VAR_8->nlp_type |= VAR_5;

  FUNC_3(VAR_7, VAR_8);
 } else if (!FUNC_0(VAR_8)) {

  VAR_8 = FUNC_2(VAR_7, VAR_8, VAR_6);
  if (!VAR_8)
   return 0;
 }
 if ((VAR_10->pport->port_state < VAR_3) &&
  (VAR_10->pport->port_state != VAR_4))
  return ((void*)0);

 if ((VAR_7 != VAR_10->pport) && (VAR_7->port_state < VAR_2)
  && (VAR_7->port_state != VAR_4))
  return ((void*)0);
 VAR_9 = FUNC_7(VAR_7);
 if (!VAR_9)
  return ((void*)0);
 FUNC_5(VAR_7);
 FUNC_1(VAR_7);
 FUNC_8(VAR_9->host_lock);
 VAR_7->fc_flag |= VAR_0;
 FUNC_9(VAR_9->host_lock);

 return VAR_8;
}
