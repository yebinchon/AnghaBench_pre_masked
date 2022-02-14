
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct scsi_cmnd {int sc_data_direction; scalar_t__ cmd_len; int cmnd; TYPE_2__* device; } ;
struct lpfc_vport {scalar_t__ cfg_first_burst_size; struct lpfc_hba* phba; } ;
struct TYPE_14__ {int control_requests; int input_requests; int output_requests; } ;
struct lpfc_sli4_hdw_queue {TYPE_5__ scsi_cstat; } ;
struct lpfc_nodelist {int nlp_flag; size_t nlp_rpi; int nlp_fcp_info; } ;
struct TYPE_15__ {int icd; } ;
struct TYPE_16__ {TYPE_6__ fcp_ext; } ;
struct TYPE_12__ {scalar_t__ fcpi_XRdy; scalar_t__ fcpi_parm; } ;
struct TYPE_13__ {TYPE_3__ fcpi; } ;
struct TYPE_18__ {size_t ulpContext; int ulpFCP2Rcvy; int ulpClass; int ulpTimeout; TYPE_7__ unsli3; void* ulpPU; TYPE_4__ un; int ulpCommand; } ;
struct lpfc_iocbq {struct lpfc_vport* vport; TYPE_9__ iocb; int iocb_cmpl; struct lpfc_io_buf* context1; } ;
struct lpfc_io_buf {int hdwq_no; int timeout; struct fcp_cmnd* fcp_cmnd; struct scsi_cmnd* pCmd; TYPE_1__* fcp_rsp; struct lpfc_iocbq cur_iocbq; } ;
struct TYPE_17__ {size_t* rpi_ids; struct lpfc_sli4_hdw_queue* hdwq; } ;
struct lpfc_hba {int sli_rev; int sli3_options; TYPE_8__ sli4_hba; } ;
struct fcp_cmnd {scalar_t__ fcpCntl3; int fcpCntl1; int * fcpCdb; int fcp_lun; scalar_t__ fcpCntl2; } ;
struct TYPE_11__ {int lun; } ;
struct TYPE_10__ {scalar_t__ rspSnsLen; } ;
typedef TYPE_9__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,struct fcp_cmnd*) ;
 int VAR_13 ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_6 (struct scsi_cmnd*) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_vport *VAR_14, struct lpfc_io_buf *VAR_15,
      struct lpfc_nodelist *VAR_16)
{
 struct lpfc_hba *VAR_17 = VAR_14->phba;
 struct scsi_cmnd *VAR_18 = VAR_15->pCmd;
 struct fcp_cmnd *VAR_19 = VAR_15->fcp_cmnd;
 IOCB_t *VAR_20 = &VAR_15->cur_iocbq.iocb;
 struct lpfc_iocbq *VAR_21 = &(VAR_15->cur_iocbq);
 struct lpfc_sli4_hdw_queue *VAR_22 = ((void*)0);
 int VAR_23 = VAR_18->sc_data_direction;
 int VAR_24;
 uint8_t *VAR_25;
 bool VAR_26;
 uint32_t VAR_27;

 if (!VAR_16 || !FUNC_0(VAR_16))
  return;

 VAR_15->fcp_rsp->rspSnsLen = 0;

 VAR_15->fcp_cmnd->fcpCntl2 = 0;

 FUNC_1(VAR_15->pCmd->device->lun,
   &VAR_15->fcp_cmnd->fcp_lun);

 VAR_25 = &VAR_19->fcpCdb[0];
 FUNC_3(VAR_25, VAR_18->cmnd, VAR_18->cmd_len);
 if (VAR_18->cmd_len < VAR_4) {
  VAR_25 += VAR_18->cmd_len;
  FUNC_4(VAR_25, 0, (VAR_4 - VAR_18->cmd_len));
 }

 VAR_19->fcpCntl1 = VAR_11;

 VAR_26 = (VAR_17->sli_rev == VAR_6);
 VAR_21->iocb.un.fcpi.fcpi_XRdy = 0;
 VAR_24 = VAR_15->hdwq_no;
 if (VAR_17->sli4_hba.hdwq)
  VAR_22 = &VAR_17->sli4_hba.hdwq[VAR_24];







 if (FUNC_6(VAR_18)) {
  if (VAR_23 == VAR_3) {
   VAR_20->ulpCommand = VAR_2;
   VAR_20->ulpPU = VAR_9;
   if (VAR_14->cfg_first_burst_size &&
       (VAR_16->nlp_flag & VAR_8)) {
    VAR_27 = FUNC_5(VAR_18);
    if (VAR_27 < VAR_14->cfg_first_burst_size)
     VAR_21->iocb.un.fcpi.fcpi_XRdy = VAR_27;
    else
     VAR_21->iocb.un.fcpi.fcpi_XRdy =
      VAR_14->cfg_first_burst_size;
   }
   VAR_19->fcpCntl3 = VAR_12;
   if (VAR_22)
    VAR_22->scsi_cstat.output_requests++;
  } else {
   VAR_20->ulpCommand = VAR_1;
   VAR_20->ulpPU = VAR_9;
   VAR_19->fcpCntl3 = VAR_10;
   if (VAR_22)
    VAR_22->scsi_cstat.input_requests++;
  }
 } else {
  VAR_20->ulpCommand = VAR_0;
  VAR_20->un.fcpi.fcpi_parm = 0;
  VAR_20->ulpPU = 0;
  VAR_19->fcpCntl3 = 0;
  if (VAR_22)
   VAR_22->scsi_cstat.control_requests++;
 }
 if (VAR_17->sli_rev == 3 &&
     !(VAR_17->sli3_options & VAR_5))
  FUNC_2(VAR_20->unsli3.fcp_ext.icd, VAR_19);




 VAR_21->iocb.ulpContext = VAR_16->nlp_rpi;
 if (VAR_26)
  VAR_21->iocb.ulpContext =
    VAR_17->sli4_hba.rpi_ids[VAR_16->nlp_rpi];
 if (VAR_16->nlp_fcp_info & VAR_7)
  VAR_21->iocb.ulpFCP2Rcvy = 1;
 else
  VAR_21->iocb.ulpFCP2Rcvy = 0;

 VAR_21->iocb.ulpClass = (VAR_16->nlp_fcp_info & 0x0f);
 VAR_21->context1 = VAR_15;
 VAR_21->iocb_cmpl = VAR_13;
 VAR_21->iocb.ulpTimeout = VAR_15->timeout;
 VAR_21->vport = VAR_14;
}
