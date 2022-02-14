
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct nvme_loop_iod {int dummy; } ;
struct TYPE_11__ {int reserved_tags; int cmd_size; int nr_hw_queues; int flags; int timeout; struct nvme_loop_ctrl* driver_data; int numa_node; int queue_depth; int * ops; } ;
struct TYPE_10__ {int queue_count; int max_hw_sectors; void* fabrics_q; void* admin_q; TYPE_5__* admin_tagset; } ;
struct nvme_loop_ctrl {TYPE_1__* queues; TYPE_5__ admin_tag_set; TYPE_2__ ctrl; } ;
struct TYPE_9__ {int nvme_sq; int flags; struct nvme_loop_ctrl* ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*) ;
 int VAR_7 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 void* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (TYPE_5__*,int ,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct nvme_loop_ctrl *VAR_9)
{
 int VAR_10;

 FUNC_7(&VAR_9->admin_tag_set, 0, sizeof(VAR_9->admin_tag_set));
 VAR_9->admin_tag_set.ops = &VAR_8;
 VAR_9->admin_tag_set.queue_depth = VAR_3;
 VAR_9->admin_tag_set.reserved_tags = 2;
 VAR_9->admin_tag_set.numa_node = VAR_2;
 VAR_9->admin_tag_set.cmd_size = sizeof(struct nvme_loop_iod) +
  VAR_7 * sizeof(struct scatterlist);
 VAR_9->admin_tag_set.driver_data = VAR_9;
 VAR_9->admin_tag_set.nr_hw_queues = 1;
 VAR_9->admin_tag_set.timeout = VAR_0;
 VAR_9->admin_tag_set.flags = VAR_1;

 VAR_9->queues[0].ctrl = VAR_9;
 VAR_10 = FUNC_11(&VAR_9->queues[0].nvme_sq);
 if (VAR_10)
  return VAR_10;
 VAR_9->ctrl.queue_count = 1;

 VAR_10 = FUNC_3(&VAR_9->admin_tag_set);
 if (VAR_10)
  goto out_free_sq;
 VAR_9->ctrl.admin_tagset = &VAR_9->admin_tag_set;

 VAR_9->ctrl.fabrics_q = FUNC_5(&VAR_9->admin_tag_set);
 if (FUNC_0(VAR_9->ctrl.fabrics_q)) {
  VAR_10 = FUNC_1(VAR_9->ctrl.fabrics_q);
  goto out_free_tagset;
 }

 VAR_9->ctrl.admin_q = FUNC_5(&VAR_9->admin_tag_set);
 if (FUNC_0(VAR_9->ctrl.admin_q)) {
  VAR_10 = FUNC_1(VAR_9->ctrl.admin_q);
  goto out_cleanup_fabrics_q;
 }

 VAR_10 = FUNC_12(&VAR_9->ctrl);
 if (VAR_10)
  goto out_cleanup_queue;

 FUNC_13(VAR_5, &VAR_9->queues[0].flags);

 VAR_10 = FUNC_8(&VAR_9->ctrl);
 if (VAR_10)
  goto out_cleanup_queue;

 VAR_9->ctrl.max_hw_sectors =
  (VAR_4 - 1) << (VAR_6 - 9);

 FUNC_6(VAR_9->ctrl.admin_q);

 VAR_10 = FUNC_9(&VAR_9->ctrl);
 if (VAR_10)
  goto out_cleanup_queue;

 return 0;

out_cleanup_queue:
 FUNC_2(VAR_9->ctrl.admin_q);
out_cleanup_fabrics_q:
 FUNC_2(VAR_9->ctrl.fabrics_q);
out_free_tagset:
 FUNC_4(&VAR_9->admin_tag_set);
out_free_sq:
 FUNC_10(&VAR_9->queues[0].nvme_sq);
 return VAR_10;
}
