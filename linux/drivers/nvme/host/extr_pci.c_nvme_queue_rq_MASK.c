
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct nvme_queue {int flags; struct nvme_dev* dev; } ;
struct nvme_ns {int dummy; } ;
struct nvme_iod {int npages; scalar_t__ nents; scalar_t__ aborted; } ;
struct nvme_dev {int dummy; } ;
struct nvme_command {int dummy; } ;
struct blk_mq_queue_data {int last; struct request* rq; } ;
struct blk_mq_hw_ctx {struct nvme_queue* driver_data; TYPE_1__* queue; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_2__ {struct nvme_ns* queuedata; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct request*) ;
 struct nvme_iod* FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (struct nvme_dev*,struct request*,struct nvme_command*) ;
 scalar_t__ FUNC_6 (struct nvme_dev*,struct request*,struct nvme_command*) ;
 scalar_t__ FUNC_7 (struct nvme_ns*,struct request*,struct nvme_command*) ;
 int FUNC_8 (struct nvme_queue*,struct nvme_command*,int ) ;
 int FUNC_9 (struct nvme_dev*,struct request*) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static blk_status_t FUNC_12(struct blk_mq_hw_ctx *VAR_3,
    const struct blk_mq_queue_data *VAR_4)
{
 struct nvme_ns *VAR_5 = VAR_3->queue->queuedata;
 struct nvme_queue *VAR_6 = VAR_3->driver_data;
 struct nvme_dev *VAR_7 = VAR_6->dev;
 struct request *VAR_8 = VAR_4->rq;
 struct nvme_iod *VAR_9 = FUNC_1(VAR_8);
 struct nvme_command VAR_10;
 blk_status_t VAR_11;

 VAR_9->aborted = 0;
 VAR_9->npages = -1;
 VAR_9->nents = 0;





 if (FUNC_11(!FUNC_10(VAR_2, &VAR_6->flags)))
  return VAR_0;

 VAR_11 = FUNC_7(VAR_5, VAR_8, &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (FUNC_3(VAR_8)) {
  VAR_11 = FUNC_5(VAR_7, VAR_8, &VAR_10);
  if (VAR_11)
   goto out_free_cmd;
 }

 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_6(VAR_7, VAR_8, &VAR_10);
  if (VAR_11)
   goto out_unmap_data;
 }

 FUNC_2(VAR_8);
 FUNC_8(VAR_6, &VAR_10, VAR_4->last);
 return VAR_1;
out_unmap_data:
 FUNC_9(VAR_7, VAR_8);
out_free_cmd:
 FUNC_4(VAR_8);
 return VAR_11;
}
