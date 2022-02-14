
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mspro_block_data {int q_lock; int * block_req; scalar_t__ eject; } ;
struct memstick_dev {int dummy; } ;
struct blk_mq_queue_data {int * rq; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
typedef int blk_status_t ;
struct TYPE_2__ {struct memstick_dev* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct mspro_block_data* FUNC_1 (struct memstick_dev*) ;
 scalar_t__ FUNC_2 (struct memstick_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static blk_status_t FUNC_5(struct blk_mq_hw_ctx *VAR_3,
       const struct blk_mq_queue_data *VAR_4)
{
 struct memstick_dev *VAR_5 = VAR_3->queue->queuedata;
 struct mspro_block_data *VAR_6 = FUNC_1(VAR_5);

 FUNC_3(&VAR_6->q_lock);

 if (VAR_6->block_req) {
  FUNC_4(&VAR_6->q_lock);
  return VAR_0;
 }

 if (VAR_6->eject) {
  FUNC_4(&VAR_6->q_lock);
  FUNC_0(VAR_4->rq);
  return VAR_1;
 }

 VAR_6->block_req = VAR_4->rq;
 FUNC_0(VAR_4->rq);

 if (FUNC_2(VAR_5))
  VAR_6->block_req = ((void*)0);

 FUNC_4(&VAR_6->q_lock);
 return VAR_2;
}
