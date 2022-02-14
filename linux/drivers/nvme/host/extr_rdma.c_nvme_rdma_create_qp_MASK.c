
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_rdma_queue {int const queue_size; TYPE_2__* cm_id; int qp; int ib_cq; struct nvme_rdma_device* device; } ;
struct nvme_rdma_device {int pd; scalar_t__ num_inline_segments; } ;
struct TYPE_3__ {int max_send_wr; int max_recv_wr; int max_recv_sge; scalar_t__ max_send_sge; } ;
struct ib_qp_init_attr {int recv_cq; int send_cq; int qp_type; int sq_sig_type; TYPE_1__ cap; int event_handler; } ;
typedef int init_attr ;
struct TYPE_4__ {int qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_qp_init_attr*,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,struct ib_qp_init_attr*) ;

__attribute__((used)) static int FUNC_2(struct nvme_rdma_queue *VAR_3, const int VAR_4)
{
 struct nvme_rdma_device *VAR_5 = VAR_3->device;
 struct ib_qp_init_attr VAR_6;
 int VAR_7;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.event_handler = VAR_2;

 VAR_6.cap.max_send_wr = VAR_4 * VAR_3->queue_size + 1;

 VAR_6.cap.max_recv_wr = VAR_3->queue_size + 1;
 VAR_6.cap.max_recv_sge = 1;
 VAR_6.cap.max_send_sge = 1 + VAR_5->num_inline_segments;
 VAR_6.sq_sig_type = VAR_1;
 VAR_6.qp_type = VAR_0;
 VAR_6.send_cq = VAR_3->ib_cq;
 VAR_6.recv_cq = VAR_3->ib_cq;

 VAR_7 = FUNC_1(VAR_3->cm_id, VAR_5->pd, &VAR_6);

 VAR_3->qp = VAR_3->cm_id->qp;
 return VAR_7;
}
