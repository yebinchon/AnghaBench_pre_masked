
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct request_queue* request_queue; } ;
struct request_queue {int dummy; } ;


 int FUNC_0 (struct request_queue*) ;

void FUNC_1(struct scsi_device *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->request_queue;

 FUNC_0(VAR_1);
}
