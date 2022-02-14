
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct nvme_rdma_queue {int cmnd_capsule_len; size_t queue_size; int cm_id; int flags; int cm_error; int cm_done; struct nvme_rdma_ctrl* ctrl; } ;
struct TYPE_4__ {int ioccsz; int device; TYPE_1__* opts; } ;
struct nvme_rdma_ctrl {TYPE_2__ ctrl; int addr; int src_addr; struct nvme_rdma_queue* queues; } ;
struct nvme_command {int dummy; } ;
struct TYPE_3__ {int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct nvme_rdma_queue*) ;
 int FUNC_5 (struct nvme_rdma_queue*) ;
 int FUNC_6 (int *,int ,struct nvme_rdma_queue*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct sockaddr*,struct sockaddr*,int ) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct nvme_rdma_ctrl *VAR_8,
  int VAR_9, size_t VAR_10)
{
 struct nvme_rdma_queue *VAR_11;
 struct sockaddr *VAR_12 = ((void*)0);
 int VAR_13;

 VAR_11 = &VAR_8->queues[VAR_9];
 VAR_11->ctrl = VAR_8;
 FUNC_3(&VAR_11->cm_done);

 if (VAR_9 > 0)
  VAR_11->cmnd_capsule_len = VAR_8->ctrl.ioccsz * 16;
 else
  VAR_11->cmnd_capsule_len = sizeof(struct nvme_command);

 VAR_11->queue_size = VAR_10;

 VAR_11->cm_id = FUNC_6(&VAR_6, VAR_7, VAR_11,
   VAR_5, VAR_1);
 if (FUNC_0(VAR_11->cm_id)) {
  FUNC_2(VAR_8->ctrl.device,
   "failed to create CM ID: %ld\n", FUNC_1(VAR_11->cm_id));
  return FUNC_1(VAR_11->cm_id);
 }

 if (VAR_8->ctrl.opts->mask & VAR_4)
  VAR_12 = (struct sockaddr *)&VAR_8->src_addr;

 VAR_11->cm_error = -VAR_0;
 VAR_13 = FUNC_8(VAR_11->cm_id, VAR_12,
   (struct sockaddr *)&VAR_8->addr,
   VAR_2);
 if (VAR_13) {
  FUNC_2(VAR_8->ctrl.device,
   "rdma_resolve_addr failed (%d).\n", VAR_13);
  goto out_destroy_cm_id;
 }

 VAR_13 = FUNC_5(VAR_11);
 if (VAR_13) {
  FUNC_2(VAR_8->ctrl.device,
   "rdma connection establishment failed (%d)\n", VAR_13);
  goto out_destroy_cm_id;
 }

 FUNC_9(VAR_3, &VAR_11->flags);

 return 0;

out_destroy_cm_id:
 FUNC_7(VAR_11->cm_id);
 FUNC_4(VAR_11);
 return VAR_13;
}
