
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct nvme_rdma_request {int dummy; } ;
struct blk_mq_tag_set {int reserved_tags; int cmd_size; int nr_hw_queues; int nr_maps; int timeout; struct nvme_rdma_ctrl* driver_data; int flags; int numa_node; scalar_t__ queue_depth; int * ops; } ;
struct nvme_rdma_ctrl {struct blk_mq_tag_set tag_set; struct blk_mq_tag_set admin_tag_set; } ;
struct nvme_ctrl {int queue_count; TYPE_1__* opts; int numa_node; scalar_t__ sqsize; } ;
struct TYPE_2__ {scalar_t__ nr_poll_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct blk_mq_tag_set* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct blk_mq_tag_set*) ;
 int FUNC_2 (struct blk_mq_tag_set*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 struct nvme_rdma_ctrl* FUNC_3 (struct nvme_ctrl*) ;

__attribute__((used)) static struct blk_mq_tag_set *FUNC_4(struct nvme_ctrl *VAR_9,
  bool VAR_10)
{
 struct nvme_rdma_ctrl *VAR_11 = FUNC_3(VAR_9);
 struct blk_mq_tag_set *VAR_12;
 int VAR_13;

 if (VAR_10) {
  VAR_12 = &VAR_11->admin_tag_set;
  FUNC_2(VAR_12, 0, sizeof(*VAR_12));
  VAR_12->ops = &VAR_7;
  VAR_12->queue_depth = VAR_4;
  VAR_12->reserved_tags = 2;
  VAR_12->numa_node = VAR_9->numa_node;
  VAR_12->cmd_size = sizeof(struct nvme_rdma_request) +
   VAR_6 * sizeof(struct scatterlist);
  VAR_12->driver_data = VAR_11;
  VAR_12->nr_hw_queues = 1;
  VAR_12->timeout = VAR_0;
  VAR_12->flags = VAR_1;
 } else {
  VAR_12 = &VAR_11->tag_set;
  FUNC_2(VAR_12, 0, sizeof(*VAR_12));
  VAR_12->ops = &VAR_8;
  VAR_12->queue_depth = VAR_9->sqsize + 1;
  VAR_12->reserved_tags = 1;
  VAR_12->numa_node = VAR_9->numa_node;
  VAR_12->flags = VAR_2;
  VAR_12->cmd_size = sizeof(struct nvme_rdma_request) +
   VAR_6 * sizeof(struct scatterlist);
  VAR_12->driver_data = VAR_11;
  VAR_12->nr_hw_queues = VAR_9->queue_count - 1;
  VAR_12->timeout = VAR_5;
  VAR_12->nr_maps = VAR_9->opts->nr_poll_queues ? VAR_3 : 2;
 }

 VAR_13 = FUNC_1(VAR_12);
 if (VAR_13)
  return FUNC_0(VAR_13);

 return VAR_12;
}
