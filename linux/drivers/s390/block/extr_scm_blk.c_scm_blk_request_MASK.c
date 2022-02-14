
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scm_request {TYPE_3__* aob; } ;
struct scm_queue {int lock; struct scm_request* scmrq; } ;
struct scm_device {int dev; } ;
struct scm_blk_dev {int dummy; } ;
struct request {int dummy; } ;
struct blk_mq_queue_data {scalar_t__ last; struct request* rq; } ;
struct blk_mq_hw_ctx {struct scm_queue* driver_data; TYPE_1__* queue; } ;
typedef int blk_status_t ;
struct TYPE_5__ {scalar_t__ msb_count; } ;
struct TYPE_6__ {TYPE_2__ request; } ;
struct TYPE_4__ {struct scm_device* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct request*) ;
 struct scm_blk_dev* FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct scm_blk_dev*,struct request*) ;
 struct scm_request* FUNC_4 () ;
 int FUNC_5 (struct scm_blk_dev*,struct scm_request*) ;
 scalar_t__ FUNC_6 (struct scm_request*) ;
 int FUNC_7 (struct scm_request*,struct request*) ;
 int FUNC_8 (struct scm_request*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static blk_status_t FUNC_11(struct blk_mq_hw_ctx *VAR_3,
      const struct blk_mq_queue_data *VAR_4)
{
 struct scm_device *VAR_5 = VAR_3->queue->queuedata;
 struct scm_blk_dev *VAR_6 = FUNC_2(&VAR_5->dev);
 struct scm_queue *VAR_7 = VAR_3->driver_data;
 struct request *VAR_8 = VAR_4->rq;
 struct scm_request *VAR_9;

 FUNC_9(&VAR_7->lock);
 if (!FUNC_3(VAR_6, VAR_8)) {
  FUNC_10(&VAR_7->lock);
  return VAR_1;
 }

 VAR_9 = VAR_7->scmrq;
 if (!VAR_9) {
  VAR_9 = FUNC_4();
  if (!VAR_9) {
   FUNC_0(5, "no request");
   FUNC_10(&VAR_7->lock);
   return VAR_1;
  }
  FUNC_5(VAR_6, VAR_9);
  VAR_7->scmrq = VAR_9;
 }
 FUNC_7(VAR_9, VAR_8);

 if (FUNC_6(VAR_9)) {
  FUNC_0(5, "aidaw alloc failed");
  FUNC_7(VAR_9, ((void*)0));

  if (VAR_9->aob->request.msb_count)
   FUNC_8(VAR_9);

  VAR_7->scmrq = ((void*)0);
  FUNC_10(&VAR_7->lock);
  return VAR_1;
 }
 FUNC_1(VAR_8);

 if (VAR_4->last || VAR_9->aob->request.msb_count == VAR_2) {
  FUNC_8(VAR_9);
  VAR_7->scmrq = ((void*)0);
 }
 FUNC_10(&VAR_7->lock);
 return VAR_0;
}
