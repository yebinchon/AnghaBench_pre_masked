
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int uint32_t ;
typedef void* uint16_t ;
struct scsi_dif_tuple {void* guard_tag; void* app_tag; scalar_t__ ref_tag; } ;
struct scsi_cmnd {scalar_t__* cmnd; int result; int (* scsi_done ) (struct scsi_cmnd*) ;int retries; TYPE_10__* device; scalar_t__ sense_buffer; } ;
struct lpfc_vport {int cfg_log_verbose; scalar_t__ cfg_max_scsicmpl_time; int fc_myDID; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; scalar_t__ cmd_qdepth; int last_change_time; int cmd_pending; int nlp_nodename; int nlp_portname; int nlp_DID; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_25__ {int bgstat; } ;
struct TYPE_26__ {TYPE_6__ sli3_bg; } ;
struct TYPE_20__ {int* ulpWord; } ;
struct TYPE_27__ {int ulpStatus; TYPE_7__ unsli3; int ulpContext; TYPE_1__ un; } ;
struct lpfc_iocbq {int iocb_flag; TYPE_8__ iocb; struct lpfc_vport* vport; scalar_t__ context1; } ;
struct TYPE_21__ {int ulpIoTag; } ;
struct TYPE_16__ {int hba_wqidx; int sli4_xritag; int iocb_flag; int sli4_lxritag; TYPE_2__ iocb; } ;
struct lpfc_io_buf {int result; int status; int exch_busy; int prot_data_type; int buf_lock; scalar_t__ waitq; TYPE_11__ cur_iocbq; struct scsi_cmnd* pCmd; scalar_t__ start_time; TYPE_9__* fcp_rsp; int * prot_data_segment; scalar_t__ prot_data; struct lpfc_rport_data* rdata; } ;
struct TYPE_18__ {TYPE_12__* hdwq; } ;
struct lpfc_hba {int cpucheck_on; scalar_t__ sli_rev; int hbalock; int work_list; TYPE_13__ sli4_hba; } ;
struct TYPE_24__ {int evt_listp; int evt; } ;
struct TYPE_22__ {int wwnn; int wwpn; int subcategory; int event_type; } ;
struct TYPE_23__ {TYPE_3__ fabric_evt; } ;
struct lpfc_fast_path_event {TYPE_5__ work_evt; struct lpfc_vport* vport; TYPE_4__ un; } ;
struct Scsi_Host {int * host_lock; } ;
struct TYPE_28__ {int rspStatus2; scalar_t__ rspSnsLen; int rspStatus3; } ;
struct TYPE_19__ {int io_cmpls; } ;
struct TYPE_17__ {int * cpucheck_cmpl_io; TYPE_14__ scsi_cstat; } ;
struct TYPE_15__ {int id; int lun; struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;





 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;



 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_43 ;
 int FUNC_2 (int *,int *) ;
 struct lpfc_fast_path_event* FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_io_buf*,struct lpfc_iocbq*) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_io_buf*,struct lpfc_iocbq*) ;
 int FUNC_6 (struct lpfc_vport*,int ,int,char*,...) ;
 int FUNC_7 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 int FUNC_8 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 int FUNC_9 (struct lpfc_hba*,struct lpfc_nodelist*,int ,int ,int ) ;
 int FUNC_10 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 int FUNC_11 (struct lpfc_hba*) ;
 int FUNC_12 (int *,int *,int) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 () ;
 int FUNC_15 (struct scsi_cmnd*) ;
 int FUNC_16 (struct scsi_cmnd*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_22 (int ,scalar_t__) ;
 int FUNC_23 (scalar_t__) ;

__attribute__((used)) static void
FUNC_24(struct lpfc_hba *VAR_44, struct lpfc_iocbq *VAR_45,
   struct lpfc_iocbq *VAR_46)
{
 struct lpfc_io_buf *VAR_47 =
  (struct lpfc_io_buf *) VAR_45->context1;
 struct lpfc_vport *VAR_48 = VAR_45->vport;
 struct lpfc_rport_data *VAR_49 = VAR_47->rdata;
 struct lpfc_nodelist *VAR_50 = VAR_49->pnode;
 struct scsi_cmnd *VAR_51;
 unsigned long VAR_52;
 struct lpfc_fast_path_event *VAR_53;
 struct Scsi_Host *VAR_54;
 int VAR_55;
 uint32_t VAR_56 = VAR_25;





 FUNC_17(&VAR_47->buf_lock);


 VAR_51 = VAR_47->pCmd;
 if (!VAR_51) {
  FUNC_6(VAR_48, VAR_21, VAR_27,
     "2621 IO completion: Not an active IO\n");
  FUNC_19(&VAR_47->buf_lock);
  return;
 }

 VAR_55 = VAR_47->cur_iocbq.hba_wqidx;
 if (VAR_44->sli4_hba.hdwq)
  VAR_44->sli4_hba.hdwq[VAR_55].scsi_cstat.io_cmpls++;
 VAR_54 = VAR_51->device->host;

 VAR_47->result = (VAR_46->iocb.un.ulpWord[4] & VAR_14);
 VAR_47->status = VAR_46->iocb.ulpStatus;

 VAR_47->exch_busy = VAR_46->iocb_flag & VAR_34;
 if (VAR_47->status) {
  if (VAR_47->status == 133 &&
      (VAR_47->result & VAR_7))
   VAR_47->status = VAR_20;
  else if (VAR_47->status >= VAR_18)
   VAR_47->status = VAR_19;
  if (VAR_47->status == 134 &&
      !VAR_47->fcp_rsp->rspStatus3 &&
      (VAR_47->fcp_rsp->rspStatus2 & VAR_39) &&
      !(VAR_48->cfg_log_verbose & VAR_26))
   VAR_56 = 0;
  else
   VAR_56 = VAR_25 | VAR_26;
  FUNC_6(VAR_48, VAR_23, VAR_56,
    "9030 FCP cmd x%x failed <%d/%lld> "
    "status: x%x result: x%x "
    "sid: x%x did: x%x oxid: x%x "
    "Data: x%x x%x\n",
    VAR_51->cmnd[0],
    VAR_51->device ? VAR_51->device->id : 0xffff,
    VAR_51->device ? VAR_51->device->lun : 0xffff,
    VAR_47->status, VAR_47->result,
    VAR_48->fc_myDID,
    (VAR_50) ? VAR_50->nlp_DID : 0,
    VAR_44->sli_rev == VAR_36 ?
        VAR_47->cur_iocbq.sli4_xritag : 0xffff,
    VAR_46->iocb.ulpContext,
    VAR_47->cur_iocbq.iocb.ulpIoTag);

  switch (VAR_47->status) {
  case 134:

   FUNC_4(VAR_48, VAR_47, VAR_46);
   break;
  case 132:
  case 135:
   VAR_51->result = VAR_4 << 16;
   VAR_53 = FUNC_3(VAR_44);
   if (!VAR_53)
    break;
   VAR_53->un.fabric_evt.event_type =
    VAR_5;
   VAR_53->un.fabric_evt.subcategory =
    (VAR_47->status == 132) ?
    VAR_32 : VAR_31;
   if (VAR_50 && FUNC_0(VAR_50)) {
    FUNC_12(&VAR_53->un.fabric_evt.wwpn,
     &VAR_50->nlp_portname,
     sizeof(struct lpfc_name));
    FUNC_12(&VAR_53->un.fabric_evt.wwnn,
     &VAR_50->nlp_nodename,
     sizeof(struct lpfc_name));
   }
   VAR_53->vport = VAR_48;
   VAR_53->work_evt.evt =
    VAR_33;
   FUNC_18(&VAR_44->hbalock, VAR_52);
   FUNC_2(&VAR_53->work_evt.evt_listp,
    &VAR_44->work_list);
   FUNC_20(&VAR_44->hbalock, VAR_52);
   FUNC_11(VAR_44);
   break;
  case 133:
  case 131:
   if (VAR_47->result == VAR_11 ||
       VAR_47->result ==
     VAR_10 ||
       VAR_47->result == VAR_9 ||
       VAR_47->result ==
     VAR_8) {
    VAR_51->result = VAR_1 << 16;
    break;
   }
   if (VAR_47->result == VAR_12 ||
       VAR_47->result == VAR_13 ||
       VAR_47->result == VAR_6 ||
       VAR_47->result == VAR_16) {
    VAR_51->result = VAR_3 << 16;
    break;
   }
   if ((VAR_47->result == VAR_15 ||
        VAR_47->result == VAR_17) &&
        VAR_46->iocb.unsli3.sli3_bg.bgstat) {
    if (FUNC_15(VAR_51) != VAR_41) {




     FUNC_5(VAR_44, VAR_47,
       VAR_46);
     break;
    } else {
     FUNC_6(VAR_48, VAR_23,
       VAR_24,
       "9031 non-zero BGSTAT "
       "on unprotected cmd\n");
    }
   }
   if ((VAR_47->status == 131)
    && (VAR_44->sli_rev == VAR_36)
    && (VAR_50 && FUNC_0(VAR_50))) {




    FUNC_9(VAR_44, VAR_50,
     VAR_47->cur_iocbq.sli4_lxritag,
     0, 0);
   }

  default:
   VAR_51->result = VAR_0 << 16;
   break;
  }

  if (!VAR_50 || !FUNC_0(VAR_50)
      || (VAR_50->nlp_state != VAR_37))
   VAR_51->result = VAR_4 << 16 |
          VAR_40;
 } else
  VAR_51->result = VAR_2 << 16;

 if (VAR_51->result || VAR_47->fcp_rsp->rspSnsLen) {
  uint32_t *VAR_57 = (uint32_t *)VAR_51->sense_buffer;

  FUNC_6(VAR_48, VAR_22, VAR_25,
     "0710 Iodone <%d/%llu> cmd x%px, error "
     "x%x SNS x%x x%x Data: x%x x%x\n",
     VAR_51->device->id, VAR_51->device->lun, VAR_51,
     VAR_51->result, *VAR_57, *(VAR_57 + 3), VAR_51->retries,
     FUNC_16(VAR_51));
 }

 FUNC_10(VAR_44, VAR_47);
 if (VAR_48->cfg_max_scsicmpl_time &&
    FUNC_22(VAR_43, VAR_47->start_time +
  FUNC_13(VAR_48->cfg_max_scsicmpl_time))) {
  FUNC_18(VAR_54->host_lock, VAR_52);
  if (VAR_50 && FUNC_0(VAR_50)) {
   if (VAR_50->cmd_qdepth >
    FUNC_1(&VAR_50->cmd_pending) &&
    (FUNC_1(&VAR_50->cmd_pending) >
    VAR_35) &&
    ((VAR_51->cmnd[0] == VAR_38) ||
    (VAR_51->cmnd[0] == VAR_42)))
    VAR_50->cmd_qdepth =
     FUNC_1(&VAR_50->cmd_pending);

   VAR_50->last_change_time = VAR_43;
  }
  FUNC_20(VAR_54->host_lock, VAR_52);
 }
 FUNC_8(VAR_44, VAR_47);

 VAR_47->pCmd = ((void*)0);
 FUNC_19(&VAR_47->buf_lock);


 VAR_51->scsi_done(VAR_51);





 FUNC_17(&VAR_47->buf_lock);
 VAR_47->cur_iocbq.iocb_flag &= ~VAR_30;
 if (VAR_47->waitq)
  FUNC_23(VAR_47->waitq);
 FUNC_19(&VAR_47->buf_lock);

 FUNC_7(VAR_44, VAR_47);
}
