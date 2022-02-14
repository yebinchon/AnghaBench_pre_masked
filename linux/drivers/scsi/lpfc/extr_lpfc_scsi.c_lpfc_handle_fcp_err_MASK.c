
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_cmnd {int underflow; scalar_t__ sc_data_direction; int result; int * cmnd; scalar_t__ sense_buffer; TYPE_3__* device; } ;
struct lpfc_vport {int cfg_log_verbose; struct lpfc_hba* phba; } ;
struct TYPE_6__ {int fcpi_parm; } ;
struct TYPE_7__ {TYPE_1__ fcpi; } ;
struct TYPE_10__ {int ulpContext; TYPE_2__ un; } ;
struct lpfc_iocbq {TYPE_5__ iocb; } ;
struct TYPE_9__ {int sli4_xritag; } ;
struct lpfc_io_buf {TYPE_4__ cur_iocbq; struct fcp_rsp* fcp_rsp; struct fcp_cmnd* fcp_cmnd; struct scsi_cmnd* pCmd; } ;
struct lpfc_hba {scalar_t__ sli_rev; } ;
struct fcp_rsp {int rspStatus2; int rspStatus3; int rspRspLen; int rspSnsLen; int rspResId; int rspInfo3; int rspInfo0; } ;
struct fcp_cmnd {int fcpDl; scalar_t__ fcpCntl2; } ;
struct TYPE_8__ {int lun; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;


 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct lpfc_vport*,int ,int,char*,...) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_vport*,struct lpfc_io_buf*,struct lpfc_iocbq*) ;
 int FUNC_3 (scalar_t__,int *,int) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*,int) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_vport *VAR_16, struct lpfc_io_buf *VAR_17,
      struct lpfc_iocbq *VAR_18)
{
 struct lpfc_hba *VAR_19 = VAR_16->phba;
 struct scsi_cmnd *VAR_20 = VAR_17->pCmd;
 struct fcp_cmnd *VAR_21 = VAR_17->fcp_cmnd;
 struct fcp_rsp *VAR_22 = VAR_17->fcp_rsp;
 uint32_t VAR_23 = VAR_18->iocb.un.fcpi.fcpi_parm;
 uint32_t VAR_24 = VAR_22->rspStatus2;
 uint32_t VAR_25 = VAR_22->rspStatus3;
 uint32_t *VAR_26;
 uint32_t VAR_27 = VAR_1;
 uint32_t VAR_28 = 0;
 uint32_t VAR_29;
 uint32_t VAR_30 = VAR_6 | VAR_7;







 if (VAR_21->fcpCntl2) {
  VAR_25 = 0;
  goto out;
 }

 if (VAR_24 & VAR_12) {
  VAR_28 = FUNC_0(VAR_22->rspRspLen);
  if (VAR_28 != 0 && VAR_28 != 4 && VAR_28 != 8) {
   FUNC_1(VAR_16, VAR_3, VAR_6,
     "2719 Invalid response length: "
     "tgt x%x lun x%llx cmnd x%x rsplen x%x\n",
     VAR_20->device->id,
     VAR_20->device->lun, VAR_20->cmnd[0],
     VAR_28);
   VAR_27 = VAR_0;
   goto out;
  }
  if (VAR_22->rspInfo3 != VAR_13) {
   FUNC_1(VAR_16, VAR_3, VAR_6,
     "2757 Protocol failure detected during "
     "processing of FCP I/O op: "
     "tgt x%x lun x%llx cmnd x%x rspInfo3 x%x\n",
     VAR_20->device->id,
     VAR_20->device->lun, VAR_20->cmnd[0],
     VAR_22->rspInfo3);
   VAR_27 = VAR_0;
   goto out;
  }
 }

 if ((VAR_24 & VAR_15) && VAR_22->rspSnsLen) {
  uint32_t VAR_31 = FUNC_0(VAR_22->rspSnsLen);
  if (VAR_31 > VAR_14)
   VAR_31 = VAR_14;

  if (VAR_24 & VAR_12)
    VAR_28 = FUNC_0(VAR_22->rspRspLen);
  FUNC_3(VAR_20->sense_buffer, &VAR_22->rspInfo0 + VAR_28, VAR_31);
 }
 VAR_26 = (uint32_t *)VAR_20->sense_buffer;


 if (!VAR_25 && (VAR_24 & VAR_11)) {

  if (VAR_16->cfg_log_verbose & VAR_6)
   VAR_30 = VAR_7;

  if (VAR_16->cfg_log_verbose & VAR_8)
   VAR_30 = VAR_8;
 }

 FUNC_1(VAR_16, VAR_5, VAR_30,
    "9024 FCP command x%x failed: x%x SNS x%x x%x "
    "Data: x%x x%x x%x x%x x%x\n",
    VAR_20->cmnd[0], VAR_25,
    FUNC_0(*VAR_26), FUNC_0(*(VAR_26 + 3)), VAR_24,
    FUNC_0(VAR_22->rspResId),
    FUNC_0(VAR_22->rspSnsLen),
    FUNC_0(VAR_22->rspRspLen),
    VAR_22->rspInfo3);

 FUNC_6(VAR_20, 0);
 VAR_29 = FUNC_0(VAR_21->fcpDl);
 if (VAR_24 & VAR_11) {
  FUNC_6(VAR_20, FUNC_0(VAR_22->rspResId));

  FUNC_1(VAR_16, VAR_4, VAR_8,
     "9025 FCP Underrun, expected %d, "
     "residual %d Data: x%x x%x x%x\n",
     VAR_29,
     FUNC_5(VAR_20), VAR_23, VAR_20->cmnd[0],
     VAR_20->underflow);






  if (VAR_23 && (FUNC_5(VAR_20) != VAR_23)) {
   FUNC_1(VAR_16, VAR_5,
      VAR_6 | VAR_7,
      "9026 FCP Read Check Error "
      "and Underrun Data: x%x x%x x%x x%x\n",
      VAR_29,
      FUNC_5(VAR_20), VAR_23,
      VAR_20->cmnd[0]);
   FUNC_6(VAR_20, FUNC_4(VAR_20));
   VAR_27 = VAR_0;
  }






  if (!(VAR_24 & VAR_15) &&
      (VAR_25 == 128) &&
      (FUNC_4(VAR_20) - FUNC_5(VAR_20)
       < VAR_20->underflow)) {
   FUNC_1(VAR_16, VAR_4, VAR_6,
      "9027 FCP command x%x residual "
      "underrun converted to error "
      "Data: x%x x%x x%x\n",
      VAR_20->cmnd[0], FUNC_4(VAR_20),
      FUNC_5(VAR_20), VAR_20->underflow);
   VAR_27 = VAR_0;
  }
 } else if (VAR_24 & VAR_10) {
  FUNC_1(VAR_16, VAR_5, VAR_6,
     "9028 FCP command x%x residual overrun error. "
     "Data: x%x x%x\n", VAR_20->cmnd[0],
     FUNC_4(VAR_20), FUNC_5(VAR_20));
  VAR_27 = VAR_0;





 } else if (VAR_23) {
  FUNC_1(VAR_16, VAR_5, VAR_6 | VAR_7,
     "9029 FCP %s Check Error xri x%x  Data: "
     "x%x x%x x%x x%x x%x\n",
     ((VAR_20->sc_data_direction == VAR_2) ?
     "Read" : "Write"),
     ((VAR_19->sli_rev == VAR_9) ?
     VAR_17->cur_iocbq.sli4_xritag :
     VAR_18->iocb.ulpContext),
     VAR_29, FUNC_0(VAR_22->rspResId),
     VAR_23, VAR_20->cmnd[0], VAR_25);





  if (VAR_23 > VAR_29)
   goto out;

  switch (VAR_25) {
  case 128:
  case 129:





   VAR_27 = VAR_0;
   break;
  }
  FUNC_6(VAR_20, FUNC_4(VAR_20));
 }

 out:
 VAR_20->result = VAR_27 << 16 | VAR_25;
 FUNC_2(VAR_16->phba, VAR_16, VAR_17, VAR_18);
}
