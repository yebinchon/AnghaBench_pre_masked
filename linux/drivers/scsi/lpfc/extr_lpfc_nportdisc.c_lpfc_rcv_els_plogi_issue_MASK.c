
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; int nlp_prev_state; int nlp_last_elscmd; int nlp_flag; int nlp_delayfunc; } ;
struct lpfc_iocbq {int dummy; } ;
struct lpfc_hba {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static uint32_t
FUNC_9(struct lpfc_vport *VAR_7, struct lpfc_nodelist *VAR_8,
    void *VAR_9, uint32_t VAR_10)
{
 struct Scsi_Host *VAR_11 = FUNC_4(VAR_7);
 struct lpfc_hba *VAR_12 = VAR_7->phba;
 struct lpfc_iocbq *VAR_13 = (struct lpfc_iocbq *) VAR_9;


 FUNC_0(VAR_12, VAR_8);

 if (VAR_10 == VAR_3) {
  FUNC_1(VAR_7, VAR_0, VAR_13, VAR_8, ((void*)0));
 } else {
  FUNC_2(VAR_7, VAR_8, 0);
 }


 FUNC_5(&VAR_8->nlp_delayfunc, VAR_6 + FUNC_6(1000 * 1));
 FUNC_7(VAR_11->host_lock);
 VAR_8->nlp_flag |= VAR_2;
 FUNC_8(VAR_11->host_lock);
 VAR_8->nlp_last_elscmd = VAR_1;
 VAR_8->nlp_prev_state = VAR_5;
 FUNC_3(VAR_7, VAR_8, VAR_4);

 return VAR_8->nlp_state;
}
