
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {struct Scsi_Host* host; } ;
struct request_queue {struct scsi_device* queuedata; } ;
struct blk_mq_hw_ctx {int queue_num; struct request_queue* queue; } ;
struct Scsi_Host {TYPE_1__* hostt; } ;
struct TYPE_2__ {int (* commit_rqs ) (struct Scsi_Host*,int ) ;} ;


 int FUNC_0 (struct Scsi_Host*,int ) ;

__attribute__((used)) static void FUNC_1(struct blk_mq_hw_ctx *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->queue;
 struct scsi_device *VAR_2 = VAR_1->queuedata;
 struct Scsi_Host *VAR_3 = VAR_2->host;

 VAR_3->hostt->commit_rqs(VAR_3, VAR_0->queue_num);
}
