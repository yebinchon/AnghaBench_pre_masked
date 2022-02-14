
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rdma_conn_param {int flow_control; int retry_count; int rnr_retry_count; int private_data_len; struct nvme_rdma_cm_req* private_data; int responder_resources; int qp_num; } ;
struct nvme_rdma_queue {int cm_id; struct nvme_rdma_ctrl* ctrl; scalar_t__ queue_size; TYPE_4__* device; TYPE_1__* qp; } ;
struct TYPE_10__ {int device; scalar_t__ sqsize; } ;
struct nvme_rdma_ctrl {TYPE_5__ ctrl; } ;
struct nvme_rdma_cm_req {scalar_t__ qid; void* hsqsize; void* hrqsize; void* recfmt; } ;
typedef int priv ;
struct TYPE_9__ {TYPE_3__* dev; } ;
struct TYPE_7__ {int max_qp_rd_atom; } ;
struct TYPE_8__ {TYPE_2__ attrs; } ;
struct TYPE_6__ {int qp_num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct nvme_rdma_queue*) ;
 scalar_t__ FUNC_3 (struct nvme_rdma_queue*) ;
 int FUNC_4 (int ,struct rdma_conn_param*) ;

__attribute__((used)) static int FUNC_5(struct nvme_rdma_queue *VAR_2)
{
 struct nvme_rdma_ctrl *VAR_3 = VAR_2->ctrl;
 struct rdma_conn_param VAR_4 = { };
 struct nvme_rdma_cm_req VAR_5 = { };
 int VAR_6;

 VAR_4.qp_num = VAR_2->qp->qp_num;
 VAR_4.flow_control = 1;

 VAR_4.responder_resources = VAR_2->device->dev->attrs.max_qp_rd_atom;

 VAR_4.retry_count = 7;
 VAR_4.rnr_retry_count = 7;
 VAR_4.private_data = &VAR_5;
 VAR_4.private_data_len = sizeof(VAR_5);

 VAR_5.recfmt = FUNC_0(VAR_1);
 VAR_5.qid = FUNC_0(FUNC_3(VAR_2));




 if (VAR_5.qid == 0) {
  VAR_5.hrqsize = FUNC_0(VAR_0);
  VAR_5.hsqsize = FUNC_0(VAR_0 - 1);
 } else {





  VAR_5.hrqsize = FUNC_0(VAR_2->queue_size);
  VAR_5.hsqsize = FUNC_0(VAR_2->ctrl->ctrl.sqsize);
 }

 VAR_6 = FUNC_4(VAR_2->cm_id, &VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_3->ctrl.device,
   "rdma_connect failed (%d).\n", VAR_6);
  goto out_destroy_queue_ib;
 }

 return 0;

out_destroy_queue_ib:
 FUNC_2(VAR_2);
 return VAR_6;
}
