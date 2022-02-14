
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct nvmf_ctrl_options {scalar_t__ queue_size; int subsysnqn; } ;
struct TYPE_20__ {int max_hw_sectors; scalar_t__ maxcmd; scalar_t__ sqsize; int queue_count; scalar_t__ nr_reconnects; int device; scalar_t__ icdoff; int admin_q; struct nvmf_ctrl_options* opts; } ;
struct nvme_fc_ctrl {int assoc_active; TYPE_9__* queues; TYPE_6__ ctrl; int ioq_live; TYPE_5__* lport; TYPE_3__* rport; int cnum; } ;
struct TYPE_21__ {int flags; } ;
struct TYPE_15__ {int port_name; } ;
struct TYPE_19__ {TYPE_4__* ops; TYPE_1__ localport; } ;
struct TYPE_18__ {int max_sgl_segments; } ;
struct TYPE_16__ {scalar_t__ port_state; int port_name; } ;
struct TYPE_17__ {TYPE_2__ remoteport; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nvme_fc_ctrl*,TYPE_9__*,int ,int) ;
 int FUNC_1 (struct nvme_fc_ctrl*,TYPE_9__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_5 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (struct nvme_fc_ctrl*,TYPE_9__*,int,int) ;
 int FUNC_9 (struct nvme_fc_ctrl*) ;
 scalar_t__ FUNC_10 (struct nvme_fc_ctrl*) ;
 int FUNC_11 (struct nvme_fc_ctrl*) ;
 int FUNC_12 (TYPE_9__*) ;
 int FUNC_13 (struct nvme_fc_ctrl*) ;
 int FUNC_14 (struct nvme_fc_ctrl*) ;
 int FUNC_15 (struct nvme_fc_ctrl*) ;
 int FUNC_16 (struct nvme_fc_ctrl*) ;
 int FUNC_17 (TYPE_6__*) ;
 int FUNC_18 (TYPE_6__*) ;
 int FUNC_19 (TYPE_6__*) ;
 int FUNC_20 (int ,int *) ;

__attribute__((used)) static int
FUNC_21(struct nvme_fc_ctrl *VAR_7)
{
 struct nvmf_ctrl_options *VAR_8 = VAR_7->ctrl.opts;
 int VAR_9;
 bool VAR_10;

 ++VAR_7->ctrl.nr_reconnects;

 if (VAR_7->rport->remoteport.port_state != VAR_2)
  return -VAR_0;

 if (FUNC_10(VAR_7))
  return -VAR_1;

 FUNC_4(VAR_7->ctrl.device,
  "NVME-FC{%d}: create association : host wwpn 0x%016llx "
  " rport wwpn 0x%016llx: NQN \"%s\"\n",
  VAR_7->cnum, VAR_7->lport->localport.port_name,
  VAR_7->rport->remoteport.port_name, VAR_7->ctrl.opts->subsysnqn);





 VAR_9 = FUNC_0(VAR_7, &VAR_7->queues[0], 0,
    VAR_3);
 if (VAR_9)
  goto out_free_queue;

 VAR_9 = FUNC_8(VAR_7, &VAR_7->queues[0],
    VAR_3, (VAR_3 / 4));
 if (VAR_9)
  goto out_delete_hw_queue;

 VAR_9 = FUNC_19(&VAR_7->ctrl);
 if (VAR_9)
  goto out_disconnect_admin_queue;

 FUNC_20(VAR_5, &VAR_7->queues[0].flags);
 VAR_9 = FUNC_7(&VAR_7->ctrl);
 if (VAR_9)
  goto out_disconnect_admin_queue;

 VAR_7->ctrl.max_hw_sectors =
  (VAR_7->lport->ops->max_sgl_segments - 1) << (VAR_6 - 9);

 FUNC_2(VAR_7->ctrl.admin_q);

 VAR_9 = FUNC_17(&VAR_7->ctrl);
 if (VAR_9)
  goto out_disconnect_admin_queue;




 if (VAR_7->ctrl.icdoff) {
  FUNC_3(VAR_7->ctrl.device, "icdoff %d is not supported!\n",
    VAR_7->ctrl.icdoff);
  goto out_disconnect_admin_queue;
 }



 if (VAR_8->queue_size > VAR_7->ctrl.maxcmd) {

  FUNC_5(VAR_7->ctrl.device,
   "queue_size %zu > ctrl maxcmd %u, reducing "
   "to queue_size\n",
   VAR_8->queue_size, VAR_7->ctrl.maxcmd);
  VAR_8->queue_size = VAR_7->ctrl.maxcmd;
 }

 if (VAR_8->queue_size > VAR_7->ctrl.sqsize + 1) {

  FUNC_5(VAR_7->ctrl.device,
   "queue_size %zu > ctrl sqsize %u, clamping down\n",
   VAR_8->queue_size, VAR_7->ctrl.sqsize + 1);
  VAR_8->queue_size = VAR_7->ctrl.sqsize + 1;
 }

 VAR_9 = FUNC_13(VAR_7);
 if (VAR_9)
  goto out_term_aen_ops;





 if (VAR_7->ctrl.queue_count > 1) {
  if (!VAR_7->ioq_live)
   VAR_9 = FUNC_9(VAR_7);
  else
   VAR_9 = FUNC_14(VAR_7);
  if (VAR_9)
   goto out_term_aen_ops;
 }

 VAR_10 = FUNC_6(&VAR_7->ctrl, VAR_4);

 VAR_7->ctrl.nr_reconnects = 0;

 if (VAR_10)
  FUNC_18(&VAR_7->ctrl);

 return 0;

out_term_aen_ops:
 FUNC_15(VAR_7);
out_disconnect_admin_queue:

 FUNC_16(VAR_7);
out_delete_hw_queue:
 FUNC_1(VAR_7, &VAR_7->queues[0], 0);
out_free_queue:
 FUNC_12(&VAR_7->queues[0]);
 VAR_7->assoc_active = 0;
 FUNC_11(VAR_7);

 return VAR_9;
}
