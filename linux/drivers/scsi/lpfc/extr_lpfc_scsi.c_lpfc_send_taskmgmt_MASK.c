
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct scsi_cmnd {int device; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_rpi; } ;
struct TYPE_3__ {int * ulpWord; } ;
struct TYPE_4__ {scalar_t__ ulpStatus; TYPE_1__ un; } ;
struct lpfc_iocbq {TYPE_2__ iocb; int iocb_flag; int sli4_xritag; int iocb_cmpl; } ;
struct lpfc_io_buf {int timeout; struct lpfc_iocbq cur_iocbq; struct lpfc_nodelist* ndlp; struct scsi_cmnd* pCmd; struct lpfc_rport_data* rdata; } ;
struct lpfc_hba {int cfg_task_mgmt_tmo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_io_buf*) ;
 struct lpfc_io_buf* FUNC_2 (struct lpfc_hba*,struct lpfc_nodelist*,int *) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,int ,unsigned int,int ,scalar_t__,int ,int ,...) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 struct lpfc_rport_data* FUNC_5 (int ) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_io_buf*,int ,int ) ;
 struct lpfc_iocbq* FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*,int ,struct lpfc_iocbq*,struct lpfc_iocbq*,int ) ;
 int FUNC_9 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_10 (int ) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_11(struct lpfc_vport *VAR_12, struct scsi_cmnd *VAR_13,
     unsigned int VAR_14, uint64_t VAR_15,
     uint8_t VAR_16)
{
 struct lpfc_hba *VAR_17 = VAR_12->phba;
 struct lpfc_io_buf *VAR_18;
 struct lpfc_iocbq *VAR_19;
 struct lpfc_iocbq *VAR_20;
 struct lpfc_rport_data *VAR_21;
 struct lpfc_nodelist *VAR_22;
 int VAR_23;
 int VAR_24;

 VAR_21 = FUNC_5(VAR_13->device);
 if (!VAR_21 || !VAR_21->pnode || !FUNC_0(VAR_21->pnode))
  return VAR_0;
 VAR_22 = VAR_21->pnode;

 VAR_18 = FUNC_2(VAR_17, VAR_22, ((void*)0));
 if (VAR_18 == ((void*)0))
  return VAR_0;
 VAR_18->timeout = VAR_17->cfg_task_mgmt_tmo;
 VAR_18->rdata = VAR_21;
 VAR_18->pCmd = VAR_13;
 VAR_18->ndlp = VAR_22;

 VAR_24 = FUNC_6(VAR_12, VAR_18, VAR_15,
        VAR_16);
 if (!VAR_24) {
  FUNC_4(VAR_17, VAR_18);
  return VAR_0;
 }

 VAR_19 = &VAR_18->cur_iocbq;
 VAR_20 = FUNC_7(VAR_17);
 if (VAR_20 == ((void*)0)) {
  FUNC_4(VAR_17, VAR_18);
  return VAR_0;
 }
 VAR_19->iocb_cmpl = VAR_11;

 FUNC_3(VAR_12, VAR_6, VAR_7,
    "0702 Issue %s to TGT %d LUN %llu "
    "rpi x%x nlp_flag x%x Data: x%x x%x\n",
    FUNC_10(VAR_16), VAR_14, VAR_15,
    VAR_22->nlp_rpi, VAR_22->nlp_flag, VAR_19->sli4_xritag,
    VAR_19->iocb_flag);

 VAR_24 = FUNC_8(VAR_17, VAR_8,
       VAR_19, VAR_20, VAR_18->timeout);
 if ((VAR_24 != VAR_1) ||
     (VAR_20->iocb.ulpStatus != VAR_4)) {
  if (VAR_24 != VAR_1 ||
      VAR_20->iocb.ulpStatus != VAR_3)
   FUNC_3(VAR_12, VAR_5, VAR_7,
      "0727 TMF %s to TGT %d LUN %llu "
      "failed (%d, %d) iocb_flag x%x\n",
      FUNC_10(VAR_16),
      VAR_14, VAR_15,
      VAR_20->iocb.ulpStatus,
      VAR_20->iocb.un.ulpWord[4],
      VAR_19->iocb_flag);

  if (VAR_24 == VAR_1) {
   if (VAR_20->iocb.ulpStatus == VAR_3)


    VAR_23 = FUNC_1(VAR_12, VAR_18);
   else
    VAR_23 = VAR_0;
  } else if (VAR_24 == VAR_2) {
   VAR_23 = VAR_10;
  } else {
   VAR_23 = VAR_0;
  }
 } else
  VAR_23 = VAR_9;

 FUNC_9(VAR_17, VAR_20);

 if (VAR_23 != VAR_10)
  FUNC_4(VAR_17, VAR_18);

 return VAR_23;
}
