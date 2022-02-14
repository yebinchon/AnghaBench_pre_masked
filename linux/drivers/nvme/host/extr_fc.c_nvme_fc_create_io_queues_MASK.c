
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nvmf_ctrl_options {unsigned int nr_io_queues; int queue_size; } ;
struct nvme_fcp_op_w_sgl {int dummy; } ;
struct TYPE_10__ {unsigned int queue_count; TYPE_4__* tagset; int connect_q; scalar_t__ sqsize; int numa_node; struct nvmf_ctrl_options* opts; int device; } ;
struct TYPE_11__ {int reserved_tags; int nr_hw_queues; int timeout; struct nvme_fc_ctrl* driver_data; int cmd_size; int flags; int numa_node; int queue_depth; int * ops; } ;
struct nvme_fc_ctrl {int ioq_live; TYPE_3__ ctrl; TYPE_4__ tag_set; TYPE_2__* lport; } ;
struct TYPE_9__ {TYPE_1__* ops; } ;
struct TYPE_8__ {int fcprqst_priv_sz; int max_hw_queues; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (TYPE_4__*,int ,int) ;
 unsigned int FUNC_8 (unsigned int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct nvme_fc_ctrl*,scalar_t__) ;
 int FUNC_11 (struct nvme_fc_ctrl*,scalar_t__) ;
 int FUNC_12 (struct nvme_fc_ctrl*) ;
 int FUNC_13 (struct nvme_fc_ctrl*) ;
 int FUNC_14 (struct nvme_fc_ctrl*) ;
 int VAR_2 ;
 int FUNC_15 (TYPE_3__*,unsigned int*) ;
 int VAR_3 ;
 int FUNC_16 (struct nvme_fcp_op_w_sgl*,int ,int ) ;

__attribute__((used)) static int
FUNC_17(struct nvme_fc_ctrl *VAR_4)
{
 struct nvmf_ctrl_options *VAR_5 = VAR_4->ctrl.opts;
 unsigned int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_8(FUNC_8(VAR_5->nr_io_queues, FUNC_9()),
    VAR_4->lport->ops->max_hw_queues);
 VAR_7 = FUNC_15(&VAR_4->ctrl, &VAR_6);
 if (VAR_7) {
  FUNC_6(VAR_4->ctrl.device,
   "set_queue_count failed: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_4->ctrl.queue_count = VAR_6 + 1;
 if (!VAR_6)
  return 0;

 FUNC_14(VAR_4);

 FUNC_7(&VAR_4->tag_set, 0, sizeof(VAR_4->tag_set));
 VAR_4->tag_set.ops = &VAR_2;
 VAR_4->tag_set.queue_depth = VAR_4->ctrl.opts->queue_size;
 VAR_4->tag_set.reserved_tags = 1;
 VAR_4->tag_set.numa_node = VAR_4->ctrl.numa_node;
 VAR_4->tag_set.flags = VAR_0;
 VAR_4->tag_set.cmd_size =
  FUNC_16((struct nvme_fcp_op_w_sgl *)((void*)0), VAR_3,
       VAR_4->lport->ops->fcprqst_priv_sz);
 VAR_4->tag_set.driver_data = VAR_4;
 VAR_4->tag_set.nr_hw_queues = VAR_4->ctrl.queue_count - 1;
 VAR_4->tag_set.timeout = VAR_1;

 VAR_7 = FUNC_3(&VAR_4->tag_set);
 if (VAR_7)
  return VAR_7;

 VAR_4->ctrl.tagset = &VAR_4->tag_set;

 VAR_4->ctrl.connect_q = FUNC_5(&VAR_4->tag_set);
 if (FUNC_0(VAR_4->ctrl.connect_q)) {
  VAR_7 = FUNC_1(VAR_4->ctrl.connect_q);
  goto out_free_tag_set;
 }

 VAR_7 = FUNC_11(VAR_4, VAR_4->ctrl.sqsize + 1);
 if (VAR_7)
  goto out_cleanup_blk_queue;

 VAR_7 = FUNC_10(VAR_4, VAR_4->ctrl.sqsize + 1);
 if (VAR_7)
  goto out_delete_hw_queues;

 VAR_4->ioq_live = 1;

 return 0;

out_delete_hw_queues:
 FUNC_12(VAR_4);
out_cleanup_blk_queue:
 FUNC_2(VAR_4->ctrl.connect_q);
out_free_tag_set:
 FUNC_4(&VAR_4->tag_set);
 FUNC_13(VAR_4);


 VAR_4->ctrl.tagset = ((void*)0);

 return VAR_7;
}
