
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct msb_data {int q_lock; int io_work; int io_queue; int io_queue_stopped; struct request* req; scalar_t__ card_dead; } ;
struct memstick_dev {int dummy; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
typedef int blk_status_t ;
struct TYPE_2__ {struct memstick_dev* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 struct msb_data* FUNC_4 (struct memstick_dev*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static blk_status_t FUNC_8(struct blk_mq_hw_ctx *VAR_3,
     const struct blk_mq_queue_data *VAR_4)
{
 struct memstick_dev *VAR_5 = VAR_3->queue->queuedata;
 struct msb_data *VAR_6 = FUNC_4(VAR_5);
 struct request *VAR_7 = VAR_4->rq;

 FUNC_3("Submit request");

 FUNC_6(&VAR_6->q_lock);

 if (VAR_6->card_dead) {
  FUNC_2("Refusing requests on removed card");

  FUNC_0(!VAR_6->io_queue_stopped);

  FUNC_7(&VAR_6->q_lock);
  FUNC_1(VAR_7);
  return VAR_1;
 }

 if (VAR_6->req) {
  FUNC_7(&VAR_6->q_lock);
  return VAR_0;
 }

 FUNC_1(VAR_7);
 VAR_6->req = VAR_7;

 if (!VAR_6->io_queue_stopped)
  FUNC_5(VAR_6->io_queue, &VAR_6->io_work);

 FUNC_7(&VAR_6->q_lock);
 return VAR_2;
}
