
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request {int dummy; } ;
struct nvme_rdma_request {int result; int status; int ref; TYPE_4__* mr; } ;
struct nvme_rdma_queue {TYPE_5__* ctrl; TYPE_1__* qp; } ;
struct nvme_completion {scalar_t__ command_id; int result; int status; } ;
struct TYPE_7__ {scalar_t__ invalidate_rkey; } ;
struct ib_wc {int wc_flags; TYPE_2__ ex; } ;
struct TYPE_8__ {int device; } ;
struct TYPE_10__ {TYPE_3__ ctrl; } ;
struct TYPE_9__ {scalar_t__ rkey; } ;
struct TYPE_6__ {int qp_num; } ;


 int VAR_0 ;
 struct nvme_rdma_request* FUNC_0 (struct request*) ;
 struct request* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,char*,scalar_t__,...) ;
 int FUNC_3 (struct request*,int ,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (struct nvme_rdma_queue*,struct nvme_rdma_request*) ;
 int FUNC_6 (struct nvme_rdma_queue*) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct nvme_rdma_queue *VAR_1,
  struct nvme_completion *VAR_2, struct ib_wc *VAR_3)
{
 struct request *VAR_4;
 struct nvme_rdma_request *VAR_5;

 VAR_4 = FUNC_1(FUNC_6(VAR_1), VAR_2->command_id);
 if (!VAR_4) {
  FUNC_2(VAR_1->ctrl->ctrl.device,
   "tag 0x%x on QP %#x not found\n",
   VAR_2->command_id, VAR_1->qp->qp_num);
  FUNC_4(VAR_1->ctrl);
  return;
 }
 VAR_5 = FUNC_0(VAR_4);

 VAR_5->status = VAR_2->status;
 VAR_5->result = VAR_2->result;

 if (VAR_3->wc_flags & VAR_0) {
  if (FUNC_8(VAR_3->ex.invalidate_rkey != VAR_5->mr->rkey)) {
   FUNC_2(VAR_1->ctrl->ctrl.device,
    "Bogus remote invalidation for rkey %#x\n",
    VAR_5->mr->rkey);
   FUNC_4(VAR_1->ctrl);
  }
 } else if (VAR_5->mr) {
  int VAR_6;

  VAR_6 = FUNC_5(VAR_1, VAR_5);
  if (FUNC_8(VAR_6 < 0)) {
   FUNC_2(VAR_1->ctrl->ctrl.device,
    "Queueing INV WR for rkey %#x failed (%d)\n",
    VAR_5->mr->rkey, VAR_6);
   FUNC_4(VAR_1->ctrl);
  }

  return;
 }

 if (FUNC_7(&VAR_5->ref))
  FUNC_3(VAR_4, VAR_5->status, VAR_5->result);
}
