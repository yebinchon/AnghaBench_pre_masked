
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int device_busy; } ;
struct request_queue {struct scsi_device* queuedata; } ;
struct blk_mq_hw_ctx {struct request_queue* queue; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct blk_mq_hw_ctx *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->queue;
 struct scsi_device *VAR_2 = VAR_1->queuedata;

 FUNC_0(&VAR_2->device_busy);
}
