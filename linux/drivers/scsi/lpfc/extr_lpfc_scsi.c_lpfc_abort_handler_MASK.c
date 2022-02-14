
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; scalar_t__ host_scribble; } ;
struct lpfc_vport {int cfg_devloss_tmo; struct lpfc_hba* phba; } ;
struct lpfc_sli_ring {size_t ringno; int ring_lock; } ;
struct TYPE_14__ {int abortIoTag; int abortContextTag; int abortType; } ;
struct TYPE_15__ {TYPE_6__ acxri; } ;
struct TYPE_16__ {int ulpLe; int ulpCommand; int ulpClass; int ulpIoTag; TYPE_7__ un; int ulpContext; } ;
struct lpfc_iocbq {size_t hba_wqidx; int iocb_flag; int sli4_xritag; struct lpfc_vport* vport; int iocb_cmpl; TYPE_8__ iocb; struct lpfc_io_buf* context1; } ;
struct lpfc_io_buf {int buf_lock; int * waitq; struct scsi_cmnd* pCmd; struct lpfc_iocbq cur_iocbq; } ;
struct TYPE_9__ {int * sli3_ring; } ;
struct TYPE_13__ {TYPE_4__* hdwq; } ;
struct lpfc_hba {int hba_flag; scalar_t__ sli_rev; int cfg_poll; int hbalock; TYPE_1__ sli; TYPE_5__ sli4_hba; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_12__ {TYPE_3__* io_wq; } ;
struct TYPE_11__ {struct lpfc_sli_ring* pring; } ;
struct TYPE_10__ {int lun; int id; struct Scsi_Host* host; } ;
typedef TYPE_8__ IOCB_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct lpfc_iocbq* FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,size_t,struct lpfc_iocbq*,int ) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*,...) ;
 int VAR_18 ;
 int FUNC_7 (struct lpfc_hba*,int *,int ) ;
 int FUNC_8 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int ,int,int ) ;
 int VAR_19 ;

__attribute__((used)) static int
FUNC_15(struct scsi_cmnd *VAR_20)
{
 struct Scsi_Host *VAR_21 = VAR_20->device->host;
 struct lpfc_vport *VAR_22 = (struct lpfc_vport *) VAR_21->hostdata;
 struct lpfc_hba *VAR_23 = VAR_22->phba;
 struct lpfc_iocbq *VAR_24;
 struct lpfc_iocbq *VAR_25;
 struct lpfc_io_buf *VAR_26;
 IOCB_t *VAR_27, *VAR_28;
 int VAR_29 = VAR_17, VAR_30 = 0;
 struct lpfc_sli_ring *VAR_31 = ((void*)0);
 int VAR_32;
 unsigned long VAR_33;
 FUNC_1(VAR_19);

 VAR_30 = FUNC_4(VAR_20);
 if (VAR_30 != 0 && VAR_30 != VAR_17)
  return VAR_30;

 VAR_26 = (struct lpfc_io_buf *)VAR_20->host_scribble;
 if (!VAR_26)
  return VAR_29;

 FUNC_11(&VAR_23->hbalock, VAR_33);

 if (VAR_23->hba_flag & VAR_6) {
  FUNC_6(VAR_22, VAR_9, VAR_10,
   "3168 SCSI Layer abort requested I/O has been "
   "flushed by LLD.\n");
  VAR_29 = VAR_4;
  goto out_unlock;
 }


 FUNC_10(&VAR_26->buf_lock);

 if (!VAR_26->pCmd) {
  FUNC_6(VAR_22, VAR_9, VAR_10,
    "2873 SCSI Layer I/O Abort Request IO CMPL Status "
    "x%x ID %d LUN %llu\n",
    VAR_17, VAR_20->device->id, VAR_20->device->lun);
  goto out_unlock_buf;
 }

 VAR_24 = &VAR_26->cur_iocbq;
 if (VAR_23->sli_rev == VAR_15) {
  VAR_31 = VAR_23->sli4_hba.hdwq[VAR_24->hba_wqidx].io_wq->pring;
  if (!VAR_31) {
   VAR_29 = VAR_4;
   goto out_unlock_buf;
  }
  FUNC_10(&VAR_31->ring_lock);
 }

 if (!(VAR_24->iocb_flag & VAR_14)) {
  FUNC_6(VAR_22, VAR_9, VAR_10,
   "3169 SCSI Layer abort requested I/O has been "
   "cancelled by LLD.\n");
  VAR_29 = VAR_4;
  goto out_unlock_ring;
 }






 if (VAR_26->pCmd != VAR_20) {
  FUNC_6(VAR_22, VAR_9, VAR_10,
   "3170 SCSI Layer abort requested I/O has been "
   "completed by LLD.\n");
  goto out_unlock_ring;
 }

 FUNC_0(VAR_24->context1 != VAR_26);


 if (VAR_24->iocb_flag & VAR_11) {
  FUNC_6(VAR_22, VAR_9, VAR_10,
    "3389 SCSI Layer I/O Abort Request is pending\n");
  if (VAR_23->sli_rev == VAR_15)
   FUNC_12(&VAR_31->ring_lock);
  FUNC_12(&VAR_26->buf_lock);
  FUNC_13(&VAR_23->hbalock, VAR_33);
  goto wait_for_cmpl;
 }

 VAR_25 = FUNC_2(VAR_23);
 if (VAR_25 == ((void*)0)) {
  VAR_29 = VAR_4;
  goto out_unlock_ring;
 }


 VAR_24->iocb_flag |= VAR_11;







 VAR_27 = &VAR_24->iocb;
 VAR_28 = &VAR_25->iocb;
 VAR_28->un.acxri.abortType = VAR_0;
 VAR_28->un.acxri.abortContextTag = VAR_27->ulpContext;
 if (VAR_23->sli_rev == VAR_15)
  VAR_28->un.acxri.abortIoTag = VAR_24->sli4_xritag;
 else
  VAR_28->un.acxri.abortIoTag = VAR_27->ulpIoTag;

 VAR_28->ulpLe = 1;
 VAR_28->ulpClass = VAR_27->ulpClass;


 VAR_25->hba_wqidx = VAR_24->hba_wqidx;
 VAR_25->iocb_flag |= VAR_16;
 if (VAR_24->iocb_flag & VAR_13)
  VAR_25->iocb_flag |= VAR_13;

 if (FUNC_5(VAR_23))
  VAR_28->ulpCommand = VAR_1;
 else
  VAR_28->ulpCommand = VAR_2;

 VAR_25->iocb_cmpl = VAR_18;
 VAR_25->vport = VAR_22;
 VAR_26->waitq = &VAR_19;
 if (VAR_23->sli_rev == VAR_15) {

  VAR_32 = FUNC_3(VAR_23, VAR_31->ringno,
      VAR_25, 0);
  FUNC_12(&VAR_31->ring_lock);
 } else {
  VAR_32 = FUNC_3(VAR_23, VAR_12,
      VAR_25, 0);
 }

 FUNC_13(&VAR_23->hbalock, VAR_33);

 if (VAR_32 == VAR_7) {

  VAR_24->iocb_flag &= ~VAR_11;
  VAR_26->waitq = ((void*)0);
  FUNC_12(&VAR_26->buf_lock);
  FUNC_8(VAR_23, VAR_25);
  VAR_29 = VAR_4;
  goto out;
 }

 FUNC_12(&VAR_26->buf_lock);

 if (VAR_23->cfg_poll & VAR_3)
  FUNC_7(VAR_23,
   &VAR_23->sli.sli3_ring[VAR_12], VAR_5);

wait_for_cmpl:

 FUNC_14(VAR_19,
     (VAR_26->pCmd != VAR_20),
      FUNC_9(2*VAR_22->cfg_devloss_tmo*1000));

 FUNC_10(&VAR_26->buf_lock);

 if (VAR_26->pCmd == VAR_20) {
  VAR_29 = VAR_4;
  FUNC_6(VAR_22, VAR_8, VAR_10,
     "0748 abort handler timed out waiting "
     "for aborting I/O (xri:x%x) to complete: "
     "ret %#x, ID %d, LUN %llu\n",
     VAR_24->sli4_xritag, VAR_29,
     VAR_20->device->id, VAR_20->device->lun);
 }

 VAR_26->waitq = ((void*)0);

 FUNC_12(&VAR_26->buf_lock);
 goto out;

out_unlock_ring:
 if (VAR_23->sli_rev == VAR_15)
  FUNC_12(&VAR_31->ring_lock);
out_unlock_buf:
 FUNC_12(&VAR_26->buf_lock);
out_unlock:
 FUNC_13(&VAR_23->hbalock, VAR_33);
out:
 FUNC_6(VAR_22, VAR_9, VAR_10,
    "0749 SCSI Layer I/O Abort Request Status x%x ID %d "
    "LUN %llu\n", VAR_29, VAR_20->device->id,
    VAR_20->device->lun);
 return VAR_29;
}
