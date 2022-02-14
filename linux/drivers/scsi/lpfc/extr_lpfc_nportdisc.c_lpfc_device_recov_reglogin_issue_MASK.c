
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int fc_flag; TYPE_1__* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; int nlp_prev_state; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_2__ {int nvmet_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct Scsi_Host* FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static uint32_t
FUNC_5(struct lpfc_vport *VAR_7,
     struct lpfc_nodelist *VAR_8,
     void *VAR_9,
     uint32_t VAR_10)
{
 struct Scsi_Host *VAR_11 = FUNC_2(VAR_7);




 if (VAR_7->fc_flag & VAR_0)
  return VAR_8->nlp_state;

 VAR_8->nlp_prev_state = VAR_6;
 FUNC_1(VAR_7, VAR_8, VAR_5);
 FUNC_3(VAR_11->host_lock);




 if (!(VAR_8->nlp_flag & VAR_4) ||
     !VAR_7->phba->nvmet_support)
  VAR_8->nlp_flag |= VAR_1;

 VAR_8->nlp_flag &= ~(VAR_2 | VAR_3);
 FUNC_4(VAR_11->host_lock);
 FUNC_0(VAR_7, VAR_8);
 return VAR_8->nlp_state;
}
