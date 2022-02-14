
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {int load_flag; } ;
struct lpfc_sli_ring {scalar_t__ ringno; } ;
struct TYPE_2__ {scalar_t__ ulpCommand; } ;
struct lpfc_iocbq {int iocb_flag; void* iocb_cmpl; void* fabric_iocb_cmpl; TYPE_1__ iocb; struct lpfc_vport* vport; } ;
struct lpfc_hba {int hbalock; } ;
typedef TYPE_1__ IOCB_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 void* VAR_7 ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;

int
FUNC_2(struct lpfc_hba *VAR_8, struct lpfc_sli_ring *VAR_9,
      struct lpfc_iocbq *VAR_10)
{
 struct lpfc_vport *VAR_11 = VAR_10->vport;
 int VAR_12 = VAR_3;
 IOCB_t *VAR_13 = ((void*)0);

 FUNC_0(&VAR_8->hbalock);






 VAR_13 = &VAR_10->iocb;
 if (VAR_13->ulpCommand == VAR_0 ||
     VAR_13->ulpCommand == VAR_1 ||
     (VAR_10->iocb_flag & VAR_4) != 0)
  return 0;

 if (!VAR_9) {
  if (VAR_10->iocb_flag & VAR_6)
   VAR_10->fabric_iocb_cmpl = VAR_7;
  else
   VAR_10->iocb_cmpl = VAR_7;
  goto abort_iotag_exit;
 }





 if ((VAR_11->load_flag & VAR_2) &&
     (VAR_9->ringno == VAR_5)) {
  if (VAR_10->iocb_flag & VAR_6)
   VAR_10->fabric_iocb_cmpl = VAR_7;
  else
   VAR_10->iocb_cmpl = VAR_7;
  goto abort_iotag_exit;
 }


 VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_10);

abort_iotag_exit:





 return VAR_12;
}
