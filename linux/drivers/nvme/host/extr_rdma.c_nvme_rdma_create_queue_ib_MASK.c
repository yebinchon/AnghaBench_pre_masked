
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct nvme_rdma_queue {int const queue_size; TYPE_6__* device; int ib_cq; TYPE_5__* cm_id; int rsp_ring; int flags; TYPE_4__* ctrl; TYPE_9__* qp; } ;
struct nvme_completion {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum ib_poll_context { ____Placeholder_ib_poll_context } ib_poll_context ;
struct TYPE_16__ {int rdma_mrs; } ;
struct TYPE_15__ {struct ib_device* dev; } ;
struct TYPE_14__ {TYPE_2__* device; } ;
struct TYPE_12__ {int device; } ;
struct TYPE_13__ {TYPE_3__ ctrl; } ;
struct TYPE_10__ {int parent; } ;
struct TYPE_11__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct ib_device*,struct nvme_rdma_queue*,int const,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_9__*,int *,int const,int ,int,int ) ;
 int FUNC_6 (struct ib_device*,int const,int,int ) ;
 int FUNC_7 (struct nvme_rdma_queue*,int const) ;
 int FUNC_8 (TYPE_6__*) ;
 TYPE_6__* FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (struct ib_device*,int ,int const,int,int ) ;
 int FUNC_11 (struct ib_device*) ;
 scalar_t__ FUNC_12 (struct nvme_rdma_queue*) ;
 int FUNC_13 (struct nvme_rdma_queue*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct nvme_rdma_queue *VAR_7)
{
 struct ib_device *VAR_8;
 const int VAR_9 = 3;
 const int VAR_10 = VAR_9 + 1;
 int VAR_11, VAR_12 = FUNC_13(VAR_7);
 enum ib_poll_context VAR_13;
 int VAR_14, VAR_15;

 VAR_7->device = FUNC_9(VAR_7->cm_id);
 if (!VAR_7->device) {
  FUNC_2(VAR_7->cm_id->device->dev.parent,
   "no client data found!\n");
  return -VAR_1;
 }
 VAR_8 = VAR_7->device->dev;





 VAR_11 = VAR_12 == 0 ? VAR_12 : VAR_12 - 1;


 if (FUNC_12(VAR_7))
  VAR_13 = VAR_4;
 else
  VAR_13 = VAR_5;


 VAR_7->ib_cq = FUNC_3(VAR_8, VAR_7,
    VAR_10 * VAR_7->queue_size + 1,
    VAR_11, VAR_13);
 if (FUNC_0(VAR_7->ib_cq)) {
  VAR_14 = FUNC_1(VAR_7->ib_cq);
  goto out_put_dev;
 }

 VAR_14 = FUNC_7(VAR_7, VAR_9);
 if (VAR_14)
  goto out_destroy_ib_cq;

 VAR_7->rsp_ring = FUNC_6(VAR_8, VAR_7->queue_size,
   sizeof(struct nvme_completion), VAR_0);
 if (!VAR_7->rsp_ring) {
  VAR_14 = -VAR_2;
  goto out_destroy_qp;
 }






 VAR_15 = FUNC_11(VAR_8) + 1;
 VAR_14 = FUNC_5(VAR_7->qp, &VAR_7->qp->rdma_mrs,
         VAR_7->queue_size,
         VAR_3,
         VAR_15, 0);
 if (VAR_14) {
  FUNC_2(VAR_7->ctrl->ctrl.device,
   "failed to initialize MR pool sized %d for QID %d\n",
   VAR_7->queue_size, VAR_12);
  goto out_destroy_ring;
 }

 FUNC_15(VAR_6, &VAR_7->flags);

 return 0;

out_destroy_ring:
 FUNC_10(VAR_8, VAR_7->rsp_ring, VAR_7->queue_size,
       sizeof(struct nvme_completion), VAR_0);
out_destroy_qp:
 FUNC_14(VAR_7->cm_id);
out_destroy_ib_cq:
 FUNC_4(VAR_7->ib_cq);
out_put_dev:
 FUNC_8(VAR_7->device);
 return VAR_14;
}
