
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {struct request_queue* request_queue; TYPE_1__* host; } ;
struct request_queue {struct scsi_device* queuedata; } ;
struct TYPE_2__ {int tag_set; } ;


 scalar_t__ FUNC_0 (struct request_queue*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,struct request_queue*) ;
 struct request_queue* FUNC_2 (int *) ;
 int FUNC_3 (int ,struct request_queue*) ;

struct request_queue *FUNC_4(struct scsi_device *VAR_1)
{
 VAR_1->request_queue = FUNC_2(&VAR_1->host->tag_set);
 if (FUNC_0(VAR_1->request_queue))
  return ((void*)0);

 VAR_1->request_queue->queuedata = VAR_1;
 FUNC_1(VAR_1->host, VAR_1->request_queue);
 FUNC_3(VAR_0, VAR_1->request_queue);
 return VAR_1->request_queue;
}
