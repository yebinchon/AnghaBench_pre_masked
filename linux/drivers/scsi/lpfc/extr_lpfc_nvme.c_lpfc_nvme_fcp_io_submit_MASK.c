
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint64_t ;
struct nvmefc_fcp_req {scalar_t__ io_dir; scalar_t__ sg_cnt; scalar_t__ cmdaddr; struct lpfc_nvme_fcpreq_priv* private; } ;
struct nvme_fc_remote_port {int port_id; scalar_t__ private; } ;
struct nvme_fc_local_port {scalar_t__ private; } ;
struct nvme_common_command {scalar_t__ opcode; } ;
struct TYPE_7__ {struct nvme_common_command common; } ;
struct nvme_fc_cmd_iu {TYPE_2__ sqe; } ;
struct lpfc_vport {int load_flag; int fc_myDID; struct lpfc_hba* phba; } ;
struct lpfc_nvme_rport {struct lpfc_nodelist* ndlp; } ;
struct lpfc_nvme_qhandle {int index; scalar_t__ qidx; } ;
struct lpfc_nvme_lport {int xmt_fcp_wqerr; int xmt_fcp_err; int xmt_fcp_noxri; int xmt_fcp_qdepth; int xmt_fcp_bad_ndlp; struct lpfc_vport* vport; } ;
struct lpfc_nvme_fcpreq_priv {struct lpfc_io_buf* nvme_buf; } ;
struct lpfc_nodelist {int nlp_type; int nlp_DID; int cmd_qdepth; int cmd_pending; int upcall_flags; int nlp_state; } ;
struct TYPE_10__ {int sli4_xritag; int hba_wqidx; } ;
struct lpfc_io_buf {int cpu; struct nvmefc_fcp_req* nvmeCmd; void* ts_cmd_wqput; void* ts_cmd_start; int hdwq_no; TYPE_5__ cur_iocbq; int hdwq; scalar_t__ qidx; struct lpfc_nodelist* ndlp; int ts_last_cmd; } ;
struct TYPE_9__ {TYPE_1__* hdwq; TYPE_3__* cpu_map; } ;
struct lpfc_hba {scalar_t__ cfg_fcp_io_sched; int cpucheck_on; TYPE_4__ sli4_hba; scalar_t__ cfg_xri_rebalancing; int ktime_last_cmd; scalar_t__ ktime_on; } ;
struct lpfc_fc4_ctrl_stat {int control_requests; int input_requests; int output_requests; } ;
struct TYPE_8__ {int hdwq; } ;
struct TYPE_6__ {int * cpucheck_xmt_io; struct lpfc_fc4_ctrl_stat nvme_cstat; } ;


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
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 () ;
 struct lpfc_io_buf* FUNC_4 (struct lpfc_hba*,struct lpfc_nodelist*,int,int) ;
 int FUNC_5 (struct lpfc_hba*,int ) ;
 scalar_t__ FUNC_6 (struct lpfc_hba*,struct lpfc_nodelist*) ;
 int FUNC_7 (struct lpfc_vport*,struct lpfc_io_buf*,struct lpfc_nodelist*,struct lpfc_fc4_ctrl_stat*) ;
 int FUNC_8 (struct lpfc_vport*,struct lpfc_io_buf*) ;
 int FUNC_9 (struct lpfc_hba*,char*,int ,int,int) ;
 int FUNC_10 (struct lpfc_vport*,int ,int,char*,...) ;
 int FUNC_11 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 int FUNC_12 (struct lpfc_hba*,int ,TYPE_5__*) ;
 scalar_t__ VAR_14 ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15(struct nvme_fc_local_port *VAR_15,
   struct nvme_fc_remote_port *VAR_16,
   void *VAR_17,
   struct nvmefc_fcp_req *VAR_18)
{
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21, VAR_22;
 struct lpfc_nvme_lport *VAR_23;
 struct lpfc_fc4_ctrl_stat *VAR_24;
 struct lpfc_vport *VAR_25;
 struct lpfc_hba *VAR_26;
 struct lpfc_nodelist *VAR_27;
 struct lpfc_io_buf *VAR_28;
 struct lpfc_nvme_rport *VAR_29;
 struct lpfc_nvme_qhandle *VAR_30;
 struct lpfc_nvme_fcpreq_priv *VAR_31;
 struct nvme_common_command *VAR_32;







 VAR_23 = (struct lpfc_nvme_lport *)VAR_15->private;
 if (FUNC_14(!VAR_23)) {
  VAR_19 = -VAR_1;
  goto out_fail;
 }

 VAR_25 = VAR_23->vport;

 if (FUNC_14(!VAR_17)) {
  FUNC_10(VAR_25, VAR_5, VAR_7,
     "6117 Fail IO, NULL hw_queue_handle\n");
  FUNC_1(&VAR_23->xmt_fcp_err);
  VAR_19 = -VAR_0;
  goto out_fail;
 }

 VAR_26 = VAR_25->phba;

 if (VAR_25->load_flag & VAR_4) {
  VAR_19 = -VAR_2;
  goto out_fail;
 }

 if (FUNC_14(VAR_25->load_flag & VAR_4)) {
  FUNC_10(VAR_25, VAR_5, VAR_7,
     "6124 Fail IO, Driver unload\n");
  FUNC_1(&VAR_23->xmt_fcp_err);
  VAR_19 = -VAR_2;
  goto out_fail;
 }

 VAR_31 = VAR_18->private;
 if (FUNC_14(!VAR_31)) {
  FUNC_10(VAR_25, VAR_5, VAR_7,
     "6158 Fail IO, NULL request data\n");
  FUNC_1(&VAR_23->xmt_fcp_err);
  VAR_19 = -VAR_1;
  goto out_fail;
 }





 VAR_29 = (struct lpfc_nvme_rport *)VAR_16->private;
 VAR_30 = (struct lpfc_nvme_qhandle *)VAR_17;





 VAR_27 = VAR_29->ndlp;
 if (!VAR_27 || !FUNC_0(VAR_27)) {
  FUNC_10(VAR_25, VAR_5, VAR_6 | VAR_7,
     "6053 Busy IO, ndlp not ready: rport x%px "
      "ndlp x%px, DID x%06x\n",
     VAR_29, VAR_27, VAR_16->port_id);
  FUNC_1(&VAR_23->xmt_fcp_err);
  VAR_19 = -VAR_0;
  goto out_fail;
 }


 if ((VAR_27->nlp_type & VAR_11) &&
     (VAR_27->nlp_state != VAR_12)) {
  FUNC_10(VAR_25, VAR_5, VAR_6 | VAR_7,
     "6036 Fail IO, DID x%06x not ready for "
     "IO. State x%x, Type x%x Flg x%x\n",
     VAR_16->port_id,
     VAR_27->nlp_state, VAR_27->nlp_type,
     VAR_27->upcall_flags);
  FUNC_1(&VAR_23->xmt_fcp_bad_ndlp);
  VAR_19 = -VAR_0;
  goto out_fail;

 }





 if (!VAR_30->qidx && !VAR_18->sg_cnt) {
  VAR_32 = &((struct nvme_fc_cmd_iu *)
   VAR_18->cmdaddr)->sqe.common;
  if (VAR_32->opcode == VAR_14)
   VAR_20 = 1;
 }




 if (FUNC_6(VAR_26, VAR_27)) {
  if ((FUNC_2(&VAR_27->cmd_pending) >= VAR_27->cmd_qdepth) &&
      !VAR_20) {
   FUNC_10(VAR_25, VAR_5, VAR_7,
      "6174 Fail IO, ndlp qdepth exceeded: "
      "idx %d DID %x pend %d qdepth %d\n",
      VAR_30->index, VAR_27->nlp_DID,
      FUNC_2(&VAR_27->cmd_pending),
      VAR_27->cmd_qdepth);
   FUNC_1(&VAR_23->xmt_fcp_qdepth);
   VAR_19 = -VAR_0;
   goto out_fail;
  }
 }


 if (VAR_26->cfg_fcp_io_sched == VAR_10) {
  VAR_21 = VAR_30->index;
 } else {
  VAR_22 = FUNC_13();
  VAR_21 = VAR_26->sli4_hba.cpu_map[VAR_22].hdwq;
 }

 VAR_28 = FUNC_4(VAR_26, VAR_27, VAR_21, VAR_20);
 if (VAR_28 == ((void*)0)) {
  FUNC_1(&VAR_23->xmt_fcp_noxri);
  FUNC_10(VAR_25, VAR_5, VAR_7,
     "6065 Fail IO, driver buffer pool is empty: "
     "idx %d DID %x\n",
     VAR_30->index, VAR_27->nlp_DID);
  VAR_19 = -VAR_0;
  goto out_fail;
 }
 VAR_31->nvme_buf = VAR_28;
 VAR_28->nvmeCmd = VAR_18;
 VAR_28->ndlp = VAR_27;
 VAR_28->qidx = VAR_30->qidx;
 VAR_28->cur_iocbq.hba_wqidx = VAR_21;
 VAR_24 = &VAR_26->sli4_hba.hdwq[VAR_21].nvme_cstat;

 FUNC_7(VAR_25, VAR_28, VAR_27, VAR_24);
 VAR_19 = FUNC_8(VAR_25, VAR_28);
 if (VAR_19) {
  FUNC_10(VAR_25, VAR_5, VAR_7,
     "6175 Fail IO, Prep DMA: "
     "idx %d DID %x\n",
     VAR_30->index, VAR_27->nlp_DID);
  FUNC_1(&VAR_23->xmt_fcp_err);
  VAR_19 = -VAR_3;
  goto out_free_nvme_buf;
 }

 FUNC_9(VAR_26, "NVME FCP XMIT: xri x%x idx %d to %06x\n",
    VAR_28->cur_iocbq.sli4_xritag,
    VAR_30->index, VAR_27->nlp_DID);

 VAR_19 = FUNC_12(VAR_26, VAR_28->hdwq, &VAR_28->cur_iocbq);
 if (VAR_19) {
  FUNC_1(&VAR_23->xmt_fcp_wqerr);
  FUNC_10(VAR_25, VAR_5, VAR_7,
     "6113 Fail IO, Could not issue WQE err %x "
     "sid: x%x did: x%x oxid: x%x\n",
     VAR_19, VAR_25->fc_myDID, VAR_27->nlp_DID,
     VAR_28->cur_iocbq.sli4_xritag);
  goto out_free_nvme_buf;
 }

 if (VAR_26->cfg_xri_rebalancing)
  FUNC_5(VAR_26, VAR_28->hdwq_no);
 return 0;

 out_free_nvme_buf:
 if (VAR_28->nvmeCmd->sg_cnt) {
  if (VAR_28->nvmeCmd->io_dir == VAR_13)
   VAR_24->output_requests--;
  else
   VAR_24->input_requests--;
 } else
  VAR_24->control_requests--;
 FUNC_11(VAR_26, VAR_28);
 out_fail:
 return VAR_19;
}
