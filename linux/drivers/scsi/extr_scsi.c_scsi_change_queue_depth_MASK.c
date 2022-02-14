
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int queue_depth; scalar_t__ request_queue; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 () ;

int FUNC_2(struct scsi_device *VAR_0, int VAR_1)
{
 if (VAR_1 > 0) {
  VAR_0->queue_depth = VAR_1;
  FUNC_1();
 }

 if (VAR_0->request_queue)
  FUNC_0(VAR_0->request_queue, VAR_1);

 return VAR_0->queue_depth;
}
