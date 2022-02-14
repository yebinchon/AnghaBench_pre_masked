
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_gendev; } ;
struct request_queue {struct scsi_device* queuedata; int * mq_ops; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

struct scsi_device *FUNC_1(struct request_queue *VAR_2)
{
 struct scsi_device *VAR_3 = ((void*)0);

 if (VAR_2->mq_ops == &VAR_1 ||
     VAR_2->mq_ops == &VAR_0)
  VAR_3 = VAR_2->queuedata;
 if (!VAR_3 || !FUNC_0(&VAR_3->sdev_gendev))
  VAR_3 = ((void*)0);

 return VAR_3;
}
