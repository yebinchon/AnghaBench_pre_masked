
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubiblock_pdu {int work; int usgl; } ;
struct ubiblock {int wq; } ;
struct request {int dummy; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
typedef int blk_status_t ;
struct TYPE_2__ {struct ubiblock* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;

 struct ubiblock_pdu* FUNC_0 (struct request*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static blk_status_t FUNC_4(struct blk_mq_hw_ctx *VAR_2,
        const struct blk_mq_queue_data *VAR_3)
{
 struct request *VAR_4 = VAR_3->rq;
 struct ubiblock *VAR_5 = VAR_2->queue->queuedata;
 struct ubiblock_pdu *VAR_6 = FUNC_0(VAR_4);

 switch (FUNC_2(VAR_4)) {
 case 128:
  FUNC_3(&VAR_6->usgl);
  FUNC_1(VAR_5->wq, &VAR_6->work);
  return VAR_1;
 default:
  return VAR_0;
 }

}
