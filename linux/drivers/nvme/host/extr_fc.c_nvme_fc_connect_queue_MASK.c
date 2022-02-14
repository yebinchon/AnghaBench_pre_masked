
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ u16 ;
struct nvmefc_ls_req {int rqstlen; int rsplen; int timeout; struct fcnvme_ls_cr_conn_acc* rspaddr; struct fcnvme_ls_cr_conn_rqst* rqstaddr; void* private; } ;
struct nvmefc_ls_req_op {struct nvme_fc_queue* queue; struct nvmefc_ls_req ls_req; } ;
struct nvme_fc_queue {scalar_t__ qnum; int flags; int connection_id; } ;
struct nvme_fc_ctrl {int dev; int rport; int association_id; TYPE_2__* lport; } ;
struct fcnvme_lsdesc_rqst {int dummy; } ;
struct fcnvme_lsdesc_cr_conn_cmd {int dummy; } ;
struct fcnvme_lsdesc_conn_id {int dummy; } ;
struct fcnvme_lsdesc_assoc_id {int dummy; } ;
struct TYPE_16__ {void* sqsize; void* qid; void* ersp_ratio; scalar_t__ desc_len; scalar_t__ desc_tag; } ;
struct TYPE_15__ {int association_id; scalar_t__ desc_len; scalar_t__ desc_tag; } ;
struct TYPE_14__ {scalar_t__ ls_cmd; } ;
struct fcnvme_ls_cr_conn_rqst {TYPE_5__ connect_cmd; TYPE_4__ associd; scalar_t__ desc_list_len; TYPE_3__ w0; } ;
struct TYPE_11__ {scalar_t__ desc_tag; scalar_t__ desc_len; int connection_id; } ;
struct TYPE_18__ {scalar_t__ ls_cmd; } ;
struct TYPE_19__ {scalar_t__ desc_tag; scalar_t__ desc_len; TYPE_7__ w0; } ;
struct TYPE_17__ {scalar_t__ ls_cmd; } ;
struct TYPE_20__ {scalar_t__ desc_list_len; TYPE_8__ rqst; TYPE_6__ w0; } ;
struct fcnvme_ls_cr_conn_acc {TYPE_10__ connectid; TYPE_9__ hdr; } ;
struct TYPE_13__ {TYPE_1__* ops; } ;
struct TYPE_12__ {int lsrqst_priv_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct nvmefc_ls_req_op*) ;
 struct nvmefc_ls_req_op* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,struct nvmefc_ls_req_op*) ;
 int FUNC_9 (int ,int *) ;
 int* VAR_18 ;

__attribute__((used)) static int
FUNC_10(struct nvme_fc_ctrl *VAR_19, struct nvme_fc_queue *VAR_20,
   u16 VAR_21, u16 VAR_22)
{
 struct nvmefc_ls_req_op *VAR_23;
 struct nvmefc_ls_req *VAR_24;
 struct fcnvme_ls_cr_conn_rqst *VAR_25;
 struct fcnvme_ls_cr_conn_acc *VAR_26;
 int VAR_27, VAR_28 = 0;

 VAR_23 = FUNC_7((sizeof(*VAR_23) +
    VAR_19->lport->ops->lsrqst_priv_sz +
    sizeof(*VAR_25) + sizeof(*VAR_26)), VAR_8);
 if (!VAR_23) {
  VAR_27 = -VAR_1;
  goto out_no_memory;
 }
 VAR_24 = &VAR_23->ls_req;

 VAR_24->private = (void *)&VAR_23[1];
 VAR_25 = (struct fcnvme_ls_cr_conn_rqst *)
   (VAR_24->private + VAR_19->lport->ops->lsrqst_priv_sz);
 VAR_26 = (struct fcnvme_ls_cr_conn_acc *)&VAR_25[1];

 VAR_25->w0.ls_cmd = VAR_7;
 VAR_25->desc_list_len = FUNC_2(
    sizeof(struct fcnvme_lsdesc_assoc_id) +
    sizeof(struct fcnvme_lsdesc_cr_conn_cmd));

 VAR_25->associd.desc_tag = FUNC_2(VAR_2);
 VAR_25->associd.desc_len =
   FUNC_5(
    sizeof(struct fcnvme_lsdesc_assoc_id));
 VAR_25->associd.association_id = FUNC_3(VAR_19->association_id);
 VAR_25->connect_cmd.desc_tag =
   FUNC_2(VAR_4);
 VAR_25->connect_cmd.desc_len =
   FUNC_5(
    sizeof(struct fcnvme_lsdesc_cr_conn_cmd));
 VAR_25->connect_cmd.ersp_ratio = FUNC_1(VAR_22);
 VAR_25->connect_cmd.qid = FUNC_1(VAR_20->qnum);
 VAR_25->connect_cmd.sqsize = FUNC_1(VAR_21 - 1);

 VAR_23->queue = VAR_20;
 VAR_24->rqstaddr = VAR_25;
 VAR_24->rqstlen = sizeof(*VAR_25);
 VAR_24->rspaddr = VAR_26;
 VAR_24->rsplen = sizeof(*VAR_26);
 VAR_24->timeout = VAR_9;

 VAR_27 = FUNC_8(VAR_19->rport, VAR_23);
 if (VAR_27)
  goto out_free_buffer;




 if (VAR_26->hdr.w0.ls_cmd != VAR_6)
  VAR_28 = VAR_15;
 else if (VAR_26->hdr.desc_list_len !=
   FUNC_5(sizeof(struct fcnvme_ls_cr_conn_acc)))
  VAR_28 = VAR_14;
 else if (VAR_26->hdr.rqst.desc_tag != FUNC_2(VAR_5))
  VAR_28 = VAR_16;
 else if (VAR_26->hdr.rqst.desc_len !=
   FUNC_5(sizeof(struct fcnvme_lsdesc_rqst)))
  VAR_28 = VAR_17;
 else if (VAR_26->hdr.rqst.w0.ls_cmd != VAR_7)
  VAR_28 = VAR_13;
 else if (VAR_26->connectid.desc_tag !=
   FUNC_2(VAR_3))
  VAR_28 = VAR_11;
 else if (VAR_26->connectid.desc_len !=
   FUNC_5(sizeof(struct fcnvme_lsdesc_conn_id)))
  VAR_28 = VAR_12;

 if (VAR_28) {
  VAR_27 = -VAR_0;
  FUNC_4(VAR_19->dev,
   "q %d connect failed: %s\n",
   VAR_20->qnum, VAR_18[VAR_28]);
 } else {
  VAR_20->connection_id =
   FUNC_0(VAR_26->connectid.connection_id);
  FUNC_9(VAR_10, &VAR_20->flags);
 }

out_free_buffer:
 FUNC_6(VAR_23);
out_no_memory:
 if (VAR_27)
  FUNC_4(VAR_19->dev,
   "queue %d connect command failed (%d).\n",
   VAR_20->qnum, VAR_27);
 return VAR_27;
}
