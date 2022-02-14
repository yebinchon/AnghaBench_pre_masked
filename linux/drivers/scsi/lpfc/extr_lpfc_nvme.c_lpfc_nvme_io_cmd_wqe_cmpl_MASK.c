
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


typedef size_t uint32_t ;
typedef void* uint16_t ;
struct nvmefc_fcp_req {int rcv_rsplen; int (* done ) (struct nvmefc_fcp_req*) ;struct lpfc_nvme_fcpreq_priv* private; int status; int transferred_length; int payload_length; int sqid; scalar_t__ cmdaddr; scalar_t__ rspaddr; } ;
struct TYPE_17__ {int u64; } ;
struct TYPE_18__ {scalar_t__ status; void* command_id; int sq_id; void* sq_head; TYPE_8__ result; } ;
struct nvme_fc_ersp_iu {int rsn; TYPE_9__ cqe; scalar_t__ rsvd12; int xfrd_len; int iu_len; } ;
struct TYPE_15__ {void* command_id; } ;
struct TYPE_16__ {TYPE_6__ common; } ;
struct nvme_fc_cmd_iu {TYPE_7__ sqe; } ;
struct lpfc_wcqe_complete {int parameter; int total_data_placed; } ;
struct lpfc_vport {TYPE_4__* localport; } ;
struct lpfc_nvme_lport {int cmpl_fcp_err; int cmpl_fcp_xb; } ;
struct lpfc_nvme_fcpreq_priv {int * nvme_buf; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_iocbq {int isr_timestamp; struct lpfc_vport* vport; scalar_t__ context1; } ;
struct TYPE_14__ {size_t hba_wqidx; int sli4_xritag; } ;
struct lpfc_io_buf {int status; int result; int flags; size_t cpu; int buf_lock; struct nvmefc_fcp_req* nvmeCmd; TYPE_5__ cur_iocbq; int ts_data_nvme; int ts_isr_cmpl; scalar_t__ ts_cmd_start; struct lpfc_nodelist* ndlp; } ;
struct TYPE_12__ {TYPE_2__* hdwq; } ;
struct lpfc_hba {int cpucheck_on; TYPE_3__ sli4_hba; int ktime_last_cmd; } ;
struct TYPE_13__ {scalar_t__ private; } ;
struct TYPE_10__ {int io_cmpls; } ;
struct TYPE_11__ {int * cpucheck_cmpl_io; TYPE_1__ nvme_cstat; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_12 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ,struct lpfc_wcqe_complete*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 int FUNC_7 (struct lpfc_hba*,char*,int ,size_t,int) ;
 int FUNC_8 (struct lpfc_vport*,int ,int,char*,...) ;
 int FUNC_9 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct nvmefc_fcp_req*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15(struct lpfc_hba *VAR_18, struct lpfc_iocbq *VAR_19,
     struct lpfc_wcqe_complete *VAR_20)
{
 struct lpfc_io_buf *VAR_21 =
  (struct lpfc_io_buf *)VAR_19->context1;
 struct lpfc_vport *VAR_22 = VAR_19->vport;
 struct nvmefc_fcp_req *VAR_23;
 struct nvme_fc_ersp_iu *VAR_24;
 struct nvme_fc_cmd_iu *VAR_25;
 struct lpfc_nodelist *VAR_26;
 struct lpfc_nvme_fcpreq_priv *VAR_27;
 struct lpfc_nvme_lport *VAR_28;
 uint32_t VAR_29, VAR_30, VAR_31;
 uint16_t VAR_32, VAR_33, VAR_34;
 uint32_t *VAR_35;


 if (!VAR_21) {
  FUNC_8(VAR_22, VAR_3,
     VAR_5 | VAR_6,
     "6071 Null lpfc_ncmd pointer. No "
     "release, skip completion\n");
  return;
 }


 FUNC_11(&VAR_21->buf_lock);

 if (!VAR_21->nvmeCmd) {
  FUNC_12(&VAR_21->buf_lock);
  FUNC_8(VAR_22, VAR_3, VAR_5 | VAR_6,
     "6066 Missing cmpl ptrs: lpfc_ncmd x%px, "
     "nvmeCmd x%px\n",
     VAR_21, VAR_21->nvmeCmd);


  FUNC_9(VAR_18, VAR_21);
  return;
 }
 VAR_23 = VAR_21->nvmeCmd;
 VAR_30 = FUNC_2(VAR_16, VAR_20);

 VAR_31 = VAR_21->cur_iocbq.hba_wqidx;
 VAR_18->sli4_hba.hdwq[VAR_31].nvme_cstat.io_cmpls++;

 if (FUNC_14(VAR_30 && VAR_22->localport)) {
  VAR_28 = (struct lpfc_nvme_lport *)VAR_22->localport->private;
  if (VAR_28) {
   if (FUNC_2(VAR_17, VAR_20))
    FUNC_1(&VAR_28->cmpl_fcp_xb);
   FUNC_1(&VAR_28->cmpl_fcp_err);
  }
 }

 FUNC_7(VAR_18, "NVME FCP CMPL: xri x%x stat x%x parm x%x\n",
    VAR_21->cur_iocbq.sli4_xritag,
    VAR_30, VAR_20->parameter);




 VAR_26 = VAR_21->ndlp;
 if (!VAR_26 || !FUNC_0(VAR_26)) {
  FUNC_8(VAR_22, VAR_3, VAR_6,
     "6062 Ignoring NVME cmpl.  No ndlp\n");
  goto out_err;
 }

 VAR_29 = FUNC_2(VAR_13, VAR_20);
 if (VAR_29 == VAR_0) {

  VAR_24 = (struct nvme_fc_ersp_iu *)VAR_23->rspaddr;





  VAR_25 = (struct nvme_fc_cmd_iu *)VAR_23->cmdaddr;
  VAR_32 = VAR_25->sqe.common.command_id;







  VAR_33 = FUNC_2(VAR_15, VAR_20);


  VAR_24->iu_len = FUNC_3(8);
  VAR_24->rsn = VAR_20->parameter;
  VAR_24->xfrd_len = FUNC_4(VAR_23->payload_length);
  VAR_24->rsvd12 = 0;
  VAR_35 = (uint32_t *)&VAR_24->cqe.result.u64;
  *VAR_35++ = VAR_20->total_data_placed;
  VAR_34 = FUNC_2(VAR_14, VAR_20);
  *VAR_35 = (uint32_t)VAR_34;
  VAR_24->cqe.sq_head = VAR_33;
  VAR_24->cqe.sq_id = VAR_23->sqid;
  VAR_24->cqe.command_id = VAR_32;
  VAR_24->cqe.status = 0;

  VAR_21->status = 128;
  VAR_21->result = 0;
  VAR_23->rcv_rsplen = VAR_10;
  VAR_23->transferred_length = VAR_23->payload_length;
 } else {
  VAR_21->status = (VAR_30 & VAR_9);
  VAR_21->result = (VAR_20->parameter & VAR_2);
  switch (VAR_21->status) {
  case 128:
   VAR_23->transferred_length = VAR_20->total_data_placed;
   VAR_23->rcv_rsplen = 0;
   VAR_23->status = 0;
   break;
  case 130:
   VAR_23->transferred_length = VAR_20->total_data_placed;
   VAR_23->rcv_rsplen = VAR_20->parameter;
   VAR_23->status = 0;

   if (VAR_23->rcv_rsplen == VAR_10)
    break;
   FUNC_8(VAR_22, VAR_3, VAR_6,
      "6081 NVME Completion Protocol Error: "
      "xri %x status x%x result x%x "
      "placed x%x\n",
      VAR_21->cur_iocbq.sli4_xritag,
      VAR_21->status, VAR_21->result,
      VAR_20->total_data_placed);
   break;
  case 129:

   if (VAR_21->result == VAR_1)
    FUNC_8(VAR_22, VAR_4,
      VAR_6,
      "6032 Delay Aborted cmd x%px "
      "nvme cmd x%px, xri x%x, "
      "xb %d\n",
      VAR_21, VAR_23,
      VAR_21->cur_iocbq.sli4_xritag,
      FUNC_2(VAR_17, VAR_20));

  default:
out_err:
   FUNC_8(VAR_22, VAR_4, VAR_6,
      "6072 NVME Completion Error: xri %x "
      "status x%x result x%x [x%x] "
      "placed x%x\n",
      VAR_21->cur_iocbq.sli4_xritag,
      VAR_21->status, VAR_21->result,
      VAR_20->parameter,
      VAR_20->total_data_placed);
   VAR_23->transferred_length = 0;
   VAR_23->rcv_rsplen = 0;
   VAR_23->status = VAR_12;
  }
 }


 if (FUNC_2(VAR_17, VAR_20))
  VAR_21->flags |= VAR_11;
 else
  VAR_21->flags &= ~VAR_11;
 if (!(VAR_21->flags & VAR_11)) {
  VAR_27 = VAR_23->private;
  VAR_27->nvme_buf = ((void*)0);
  VAR_21->nvmeCmd = ((void*)0);
  FUNC_12(&VAR_21->buf_lock);
  VAR_23->done(VAR_23);
 } else
  FUNC_12(&VAR_21->buf_lock);


 FUNC_9(VAR_18, VAR_21);
}
