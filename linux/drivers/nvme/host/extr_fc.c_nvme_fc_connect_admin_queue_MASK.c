
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int u16 ;
struct nvmefc_ls_req {int rqstlen; int rsplen; int timeout; struct fcnvme_ls_cr_assoc_acc* rspaddr; struct fcnvme_ls_cr_assoc_rqst* rqstaddr; void* private; } ;
struct nvmefc_ls_req_op {struct nvme_fc_queue* queue; struct nvmefc_ls_req ls_req; } ;
struct nvme_fc_queue {int qnum; int flags; void* connection_id; } ;
struct TYPE_24__ {TYPE_6__* opts; } ;
struct nvme_fc_ctrl {int dev; void* association_id; int rport; TYPE_7__ ctrl; TYPE_2__* lport; } ;
struct fcnvme_lsdesc_rqst {int dummy; } ;
struct fcnvme_lsdesc_cr_assoc_cmd {int dummy; } ;
struct fcnvme_lsdesc_conn_id {int dummy; } ;
struct fcnvme_lsdesc_assoc_id {int dummy; } ;
struct TYPE_22__ {int subnqn; int hostnqn; int hostid; void* cntlid; void* sqsize; void* ersp_ratio; scalar_t__ desc_len; scalar_t__ desc_tag; } ;
struct TYPE_20__ {scalar_t__ ls_cmd; } ;
struct fcnvme_ls_cr_assoc_rqst {TYPE_5__ assoc_cmd; scalar_t__ desc_list_len; TYPE_3__ w0; } ;
struct TYPE_17__ {scalar_t__ desc_tag; scalar_t__ desc_len; int connection_id; } ;
struct TYPE_16__ {scalar_t__ desc_tag; scalar_t__ desc_len; int association_id; } ;
struct TYPE_26__ {scalar_t__ ls_cmd; } ;
struct TYPE_14__ {scalar_t__ desc_tag; scalar_t__ desc_len; TYPE_9__ w0; } ;
struct TYPE_25__ {scalar_t__ ls_cmd; } ;
struct TYPE_15__ {scalar_t__ desc_list_len; TYPE_10__ rqst; TYPE_8__ w0; } ;
struct fcnvme_ls_cr_assoc_acc {TYPE_13__ connectid; TYPE_12__ associd; TYPE_11__ hdr; } ;
struct TYPE_23__ {int subsysnqn; TYPE_4__* host; } ;
struct TYPE_21__ {int nqn; int id; } ;
struct TYPE_19__ {TYPE_1__* ops; } ;
struct TYPE_18__ {int lsrqst_priv_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
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
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct nvmefc_ls_req_op*) ;
 struct nvmefc_ls_req_op* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct nvmefc_ls_req_op*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int *,int *) ;
 int* VAR_23 ;

__attribute__((used)) static int
FUNC_12(struct nvme_fc_ctrl *VAR_24,
 struct nvme_fc_queue *VAR_25, u16 VAR_26, u16 VAR_27)
{
 struct nvmefc_ls_req_op *VAR_28;
 struct nvmefc_ls_req *VAR_29;
 struct fcnvme_ls_cr_assoc_rqst *VAR_30;
 struct fcnvme_ls_cr_assoc_acc *VAR_31;
 int VAR_32, VAR_33 = 0;

 VAR_28 = FUNC_6((sizeof(*VAR_28) +
    VAR_24->lport->ops->lsrqst_priv_sz +
    sizeof(*VAR_30) + sizeof(*VAR_31)), VAR_10);
 if (!VAR_28) {
  VAR_32 = -VAR_1;
  goto out_no_memory;
 }
 VAR_29 = &VAR_28->ls_req;

 VAR_29->private = (void *)&VAR_28[1];
 VAR_30 = (struct fcnvme_ls_cr_assoc_rqst *)
   (VAR_29->private + VAR_24->lport->ops->lsrqst_priv_sz);
 VAR_31 = (struct fcnvme_ls_cr_assoc_acc *)&VAR_30[1];

 VAR_30->w0.ls_cmd = VAR_9;
 VAR_30->desc_list_len =
   FUNC_2(sizeof(struct fcnvme_lsdesc_cr_assoc_cmd));

 VAR_30->assoc_cmd.desc_tag =
   FUNC_2(VAR_6);
 VAR_30->assoc_cmd.desc_len =
   FUNC_4(
    sizeof(struct fcnvme_lsdesc_cr_assoc_cmd));

 VAR_30->assoc_cmd.ersp_ratio = FUNC_1(VAR_27);
 VAR_30->assoc_cmd.sqsize = FUNC_1(VAR_26 - 1);

 VAR_30->assoc_cmd.cntlid = FUNC_1(0xffff);
 FUNC_11(&VAR_30->assoc_cmd.hostid, &VAR_24->ctrl.opts->host->id);
 FUNC_10(VAR_30->assoc_cmd.hostnqn, VAR_24->ctrl.opts->host->nqn,
  FUNC_7(VAR_2, VAR_13));
 FUNC_10(VAR_30->assoc_cmd.subnqn, VAR_24->ctrl.opts->subsysnqn,
  FUNC_7(VAR_3, VAR_13));

 VAR_28->queue = VAR_25;
 VAR_29->rqstaddr = VAR_30;
 VAR_29->rqstlen = sizeof(*VAR_30);
 VAR_29->rspaddr = VAR_31;
 VAR_29->rsplen = sizeof(*VAR_31);
 VAR_29->timeout = VAR_11;

 VAR_32 = FUNC_8(VAR_24->rport, VAR_28);
 if (VAR_32)
  goto out_free_buffer;




 if (VAR_31->hdr.w0.ls_cmd != VAR_8)
  VAR_33 = VAR_20;
 else if (VAR_31->hdr.desc_list_len !=
   FUNC_4(
    sizeof(struct fcnvme_ls_cr_assoc_acc)))
  VAR_33 = VAR_19;
 else if (VAR_31->hdr.rqst.desc_tag !=
   FUNC_2(VAR_7))
  VAR_33 = VAR_21;
 else if (VAR_31->hdr.rqst.desc_len !=
   FUNC_4(sizeof(struct fcnvme_lsdesc_rqst)))
  VAR_33 = VAR_22;
 else if (VAR_31->hdr.rqst.w0.ls_cmd != VAR_9)
  VAR_33 = VAR_18;
 else if (VAR_31->associd.desc_tag !=
   FUNC_2(VAR_4))
  VAR_33 = VAR_14;
 else if (VAR_31->associd.desc_len !=
   FUNC_4(
    sizeof(struct fcnvme_lsdesc_assoc_id)))
  VAR_33 = VAR_15;
 else if (VAR_31->connectid.desc_tag !=
   FUNC_2(VAR_5))
  VAR_33 = VAR_16;
 else if (VAR_31->connectid.desc_len !=
   FUNC_4(sizeof(struct fcnvme_lsdesc_conn_id)))
  VAR_33 = VAR_17;

 if (VAR_33) {
  VAR_32 = -VAR_0;
  FUNC_3(VAR_24->dev,
   "q %d connect failed: %s\n",
   VAR_25->qnum, VAR_23[VAR_33]);
 } else {
  VAR_24->association_id =
   FUNC_0(VAR_31->associd.association_id);
  VAR_25->connection_id =
   FUNC_0(VAR_31->connectid.connection_id);
  FUNC_9(VAR_12, &VAR_25->flags);
 }

out_free_buffer:
 FUNC_5(VAR_28);
out_no_memory:
 if (VAR_32)
  FUNC_3(VAR_24->dev,
   "queue %d connect admin queue failed (%d).\n",
   VAR_25->qnum, VAR_32);
 return VAR_32;
}
