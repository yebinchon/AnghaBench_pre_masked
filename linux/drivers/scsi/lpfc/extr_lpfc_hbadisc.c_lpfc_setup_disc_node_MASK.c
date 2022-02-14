
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int fc_flag; TYPE_1__* phba; } ;
struct lpfc_nodelist {int nlp_flag; scalar_t__ nlp_state; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_2__ {scalar_t__ nvmet_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int ) ;
 struct lpfc_nodelist* FUNC_4 (struct lpfc_vport*,int ) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*) ;
 scalar_t__ FUNC_7 (struct lpfc_vport*,int ) ;
 struct Scsi_Host* FUNC_8 (struct lpfc_vport*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

struct lpfc_nodelist *
FUNC_11(struct lpfc_vport *VAR_9, uint32_t VAR_10)
{
 struct Scsi_Host *VAR_11 = FUNC_8(VAR_9);
 struct lpfc_nodelist *VAR_12;

 VAR_12 = FUNC_3(VAR_9, VAR_10);
 if (!VAR_12) {
  if (VAR_9->phba->nvmet_support)
   return ((void*)0);
  if ((VAR_9->fc_flag & VAR_1) != 0 &&
      FUNC_7(VAR_9, VAR_10) == 0)
   return ((void*)0);
  VAR_12 = FUNC_4(VAR_9, VAR_10);
  if (!VAR_12)
   return ((void*)0);
  FUNC_5(VAR_9, VAR_12, VAR_7);
  FUNC_9(VAR_11->host_lock);
  VAR_12->nlp_flag |= VAR_4;
  FUNC_10(VAR_11->host_lock);
  return VAR_12;
 } else if (!FUNC_0(VAR_12)) {
  if (VAR_9->phba->nvmet_support)
   return ((void*)0);
  VAR_12 = FUNC_2(VAR_9, VAR_12, VAR_7);
  if (!VAR_12) {
   FUNC_6(VAR_9, VAR_2, VAR_3,
      "0014 Could not enable ndlp\n");
   return ((void*)0);
  }
  FUNC_9(VAR_11->host_lock);
  VAR_12->nlp_flag |= VAR_4;
  FUNC_10(VAR_11->host_lock);
  return VAR_12;
 }





 if ((VAR_9->fc_flag & VAR_1) &&
     !(VAR_9->fc_flag & VAR_0)) {
  if (FUNC_7(VAR_9, VAR_10)) {




   FUNC_1(VAR_9, VAR_12);






   if (VAR_9->phba->nvmet_support)
    return VAR_12;




   if (VAR_12->nlp_flag & VAR_5)
    return ((void*)0);

   FUNC_9(VAR_11->host_lock);
   VAR_12->nlp_flag |= VAR_4;
   FUNC_10(VAR_11->host_lock);
  } else
   VAR_12 = ((void*)0);
 } else {




  if (VAR_12->nlp_state == VAR_6 ||
      VAR_12->nlp_state == VAR_8 ||
      (!VAR_9->phba->nvmet_support &&
       VAR_12->nlp_flag & VAR_5))
   return ((void*)0);

  if (VAR_9->phba->nvmet_support)
   return VAR_12;




  FUNC_5(VAR_9, VAR_12, VAR_7);

  FUNC_9(VAR_11->host_lock);
  VAR_12->nlp_flag |= VAR_4;
  FUNC_10(VAR_11->host_lock);
 }
 return VAR_12;
}
