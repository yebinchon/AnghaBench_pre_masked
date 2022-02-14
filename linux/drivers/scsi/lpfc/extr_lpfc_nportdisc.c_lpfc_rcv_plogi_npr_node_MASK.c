
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; int nlp_DID; int nlp_prev_state; } ;
struct lpfc_iocbq {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 scalar_t__ FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_iocbq*) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static uint32_t
FUNC_7(struct lpfc_vport *VAR_7, struct lpfc_nodelist *VAR_8,
   void *VAR_9, uint32_t VAR_10)
{
 struct Scsi_Host *VAR_11 = FUNC_4(VAR_7);
 struct lpfc_iocbq *VAR_12 = (struct lpfc_iocbq *) VAR_9;


 if (VAR_8->nlp_flag & (VAR_2 | VAR_1))
  return VAR_8->nlp_state;
 if (FUNC_3(VAR_7, VAR_8, VAR_12)) {
  FUNC_0(VAR_7, VAR_8);
  FUNC_5(VAR_11->host_lock);
  VAR_8->nlp_flag &= ~(VAR_4 | VAR_3);
  FUNC_6(VAR_11->host_lock);
 } else if (!(VAR_8->nlp_flag & VAR_3)) {

  if (!(VAR_8->nlp_flag & VAR_0)) {
   VAR_8->nlp_prev_state = VAR_5;
   FUNC_2(VAR_7, VAR_8, VAR_6);
   FUNC_1(VAR_7, VAR_8->nlp_DID, 0);
  }
 }
 return VAR_8->nlp_state;
}
