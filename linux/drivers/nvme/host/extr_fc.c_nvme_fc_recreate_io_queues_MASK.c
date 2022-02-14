
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct nvmf_ctrl_options {unsigned int nr_io_queues; } ;
struct TYPE_6__ {int queue_count; int device; scalar_t__ sqsize; struct nvmf_ctrl_options* opts; } ;
struct nvme_fc_ctrl {int tag_set; TYPE_3__ ctrl; TYPE_2__* lport; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int max_hw_queues; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct nvme_fc_ctrl*,scalar_t__) ;
 int FUNC_5 (struct nvme_fc_ctrl*,scalar_t__) ;
 int FUNC_6 (struct nvme_fc_ctrl*) ;
 int FUNC_7 (struct nvme_fc_ctrl*) ;
 int FUNC_8 (TYPE_3__*,unsigned int*) ;

__attribute__((used)) static int
FUNC_9(struct nvme_fc_ctrl *VAR_1)
{
 struct nvmf_ctrl_options *VAR_2 = VAR_1->ctrl.opts;
 u32 VAR_3 = VAR_1->ctrl.queue_count - 1;
 unsigned int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(FUNC_2(VAR_2->nr_io_queues, FUNC_3()),
    VAR_1->lport->ops->max_hw_queues);
 VAR_5 = FUNC_8(&VAR_1->ctrl, &VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_1->ctrl.device,
   "set_queue_count failed: %d\n", VAR_5);
  return VAR_5;
 }

 if (!VAR_4 && VAR_3) {
  FUNC_1(VAR_1->ctrl.device,
   "Fail Reconnect: At least 1 io queue "
   "required (was %d)\n", VAR_3);
  return -VAR_0;
 }

 VAR_1->ctrl.queue_count = VAR_4 + 1;

 if (VAR_1->ctrl.queue_count == 1)
  return 0;

 VAR_5 = FUNC_5(VAR_1, VAR_1->ctrl.sqsize + 1);
 if (VAR_5)
  goto out_free_io_queues;

 VAR_5 = FUNC_4(VAR_1, VAR_1->ctrl.sqsize + 1);
 if (VAR_5)
  goto out_delete_hw_queues;

 if (VAR_3 != VAR_4)
  FUNC_1(VAR_1->ctrl.device,
   "reconnect: revising io queue count from %d to %d\n",
   VAR_3, VAR_4);
 FUNC_0(&VAR_1->tag_set, VAR_4);

 return 0;

out_delete_hw_queues:
 FUNC_6(VAR_1);
out_free_io_queues:
 FUNC_7(VAR_1);
 return VAR_5;
}
