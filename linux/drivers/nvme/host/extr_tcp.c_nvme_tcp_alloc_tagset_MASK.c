
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_tcp_request {int dummy; } ;
struct blk_mq_tag_set {int reserved_tags; int cmd_size; int nr_hw_queues; int nr_maps; int timeout; struct nvme_tcp_ctrl* driver_data; int flags; void* numa_node; scalar_t__ queue_depth; int * ops; } ;
struct nvme_tcp_ctrl {struct blk_mq_tag_set tag_set; struct blk_mq_tag_set admin_tag_set; } ;
struct nvme_ctrl {int queue_count; TYPE_1__* opts; scalar_t__ sqsize; } ;
struct TYPE_2__ {scalar_t__ nr_poll_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct blk_mq_tag_set* FUNC_0 (int) ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct blk_mq_tag_set*) ;
 int FUNC_2 (struct blk_mq_tag_set*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 struct nvme_tcp_ctrl* FUNC_3 (struct nvme_ctrl*) ;

__attribute__((used)) static struct blk_mq_tag_set *FUNC_4(struct nvme_ctrl *VAR_8,
  bool VAR_9)
{
 struct nvme_tcp_ctrl *VAR_10 = FUNC_3(VAR_8);
 struct blk_mq_tag_set *VAR_11;
 int VAR_12;

 if (VAR_9) {
  VAR_11 = &VAR_10->admin_tag_set;
  FUNC_2(VAR_11, 0, sizeof(*VAR_11));
  VAR_11->ops = &VAR_6;
  VAR_11->queue_depth = VAR_4;
  VAR_11->reserved_tags = 2;
  VAR_11->numa_node = VAR_3;
  VAR_11->cmd_size = sizeof(struct nvme_tcp_request);
  VAR_11->driver_data = VAR_10;
  VAR_11->nr_hw_queues = 1;
  VAR_11->timeout = VAR_0;
 } else {
  VAR_11 = &VAR_10->tag_set;
  FUNC_2(VAR_11, 0, sizeof(*VAR_11));
  VAR_11->ops = &VAR_7;
  VAR_11->queue_depth = VAR_8->sqsize + 1;
  VAR_11->reserved_tags = 1;
  VAR_11->numa_node = VAR_3;
  VAR_11->flags = VAR_1;
  VAR_11->cmd_size = sizeof(struct nvme_tcp_request);
  VAR_11->driver_data = VAR_10;
  VAR_11->nr_hw_queues = VAR_8->queue_count - 1;
  VAR_11->timeout = VAR_5;
  VAR_11->nr_maps = VAR_8->opts->nr_poll_queues ? VAR_2 : 2;
 }

 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12)
  return FUNC_0(VAR_12);

 return VAR_11;
}
