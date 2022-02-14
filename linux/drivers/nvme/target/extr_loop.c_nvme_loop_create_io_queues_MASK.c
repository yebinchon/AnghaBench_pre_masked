
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct nvme_loop_iod {int dummy; } ;
struct TYPE_9__ {int reserved_tags; int cmd_size; int timeout; scalar_t__ nr_hw_queues; struct nvme_loop_ctrl* driver_data; int flags; int numa_node; int queue_depth; int * ops; } ;
struct TYPE_8__ {int connect_q; TYPE_3__* tagset; scalar_t__ queue_count; TYPE_1__* opts; } ;
struct nvme_loop_ctrl {TYPE_3__ tag_set; TYPE_2__ ctrl; } ;
struct TYPE_7__ {int queue_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 (struct nvme_loop_ctrl*) ;
 int FUNC_8 (struct nvme_loop_ctrl*) ;
 int FUNC_9 (struct nvme_loop_ctrl*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(struct nvme_loop_ctrl *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_9(VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_6(&VAR_5->tag_set, 0, sizeof(VAR_5->tag_set));
 VAR_5->tag_set.ops = &VAR_4;
 VAR_5->tag_set.queue_depth = VAR_5->ctrl.opts->queue_size;
 VAR_5->tag_set.reserved_tags = 1;
 VAR_5->tag_set.numa_node = VAR_1;
 VAR_5->tag_set.flags = VAR_0;
 VAR_5->tag_set.cmd_size = sizeof(struct nvme_loop_iod) +
  VAR_3 * sizeof(struct scatterlist);
 VAR_5->tag_set.driver_data = VAR_5;
 VAR_5->tag_set.nr_hw_queues = VAR_5->ctrl.queue_count - 1;
 VAR_5->tag_set.timeout = VAR_2;
 VAR_5->ctrl.tagset = &VAR_5->tag_set;

 VAR_6 = FUNC_3(&VAR_5->tag_set);
 if (VAR_6)
  goto out_destroy_queues;

 VAR_5->ctrl.connect_q = FUNC_5(&VAR_5->tag_set);
 if (FUNC_0(VAR_5->ctrl.connect_q)) {
  VAR_6 = FUNC_1(VAR_5->ctrl.connect_q);
  goto out_free_tagset;
 }

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6)
  goto out_cleanup_connect_q;

 return 0;

out_cleanup_connect_q:
 FUNC_2(VAR_5->ctrl.connect_q);
out_free_tagset:
 FUNC_4(&VAR_5->tag_set);
out_destroy_queues:
 FUNC_8(VAR_5);
 return VAR_6;
}
