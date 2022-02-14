
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int device_busy; } ;
struct request_queue {struct scsi_device* queuedata; } ;
struct blk_mq_hw_ctx {struct request_queue* queue; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct blk_mq_hw_ctx*,int ) ;
 scalar_t__ FUNC_2 (struct request_queue*,struct scsi_device*) ;
 int FUNC_3 (struct scsi_device*) ;

__attribute__((used)) static bool FUNC_4(struct blk_mq_hw_ctx *VAR_1)
{
 struct request_queue *VAR_2 = VAR_1->queue;
 struct scsi_device *VAR_3 = VAR_2->queuedata;

 if (FUNC_2(VAR_2, VAR_3))
  return 1;

 if (FUNC_0(&VAR_3->device_busy) == 0 && !FUNC_3(VAR_3))
  FUNC_1(VAR_1, VAR_0);
 return 0;
}
