
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct nvme_tcp_request {int dummy; } ;
struct nvme_tcp_queue {TYPE_1__* ctrl; int flags; } ;
struct nvme_ns {int dummy; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {struct nvme_tcp_queue* driver_data; TYPE_2__* queue; } ;
typedef int blk_status_t ;
struct TYPE_4__ {struct nvme_ns* queuedata; } ;
struct TYPE_3__ {int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvme_tcp_request* FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct nvme_tcp_request*) ;
 int FUNC_3 (struct nvme_ns*,struct request*) ;
 int FUNC_4 (int *,struct request*,int) ;
 int FUNC_5 (int *,struct request*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static blk_status_t FUNC_8(struct blk_mq_hw_ctx *VAR_2,
  const struct blk_mq_queue_data *VAR_3)
{
 struct nvme_ns *VAR_4 = VAR_2->queue->queuedata;
 struct nvme_tcp_queue *VAR_5 = VAR_2->driver_data;
 struct request *VAR_6 = VAR_3->rq;
 struct nvme_tcp_request *VAR_7 = FUNC_0(VAR_6);
 bool VAR_8 = FUNC_6(VAR_1, &VAR_5->flags);
 blk_status_t VAR_9;

 if (!FUNC_4(&VAR_5->ctrl->ctrl, VAR_6, VAR_8))
  return FUNC_5(&VAR_5->ctrl->ctrl, VAR_6);

 VAR_9 = FUNC_3(VAR_4, VAR_6);
 if (FUNC_7(VAR_9))
  return VAR_9;

 FUNC_1(VAR_6);

 FUNC_2(VAR_7);

 return VAR_0;
}
