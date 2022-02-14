
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int state_mutex; struct request_queue* request_queue; } ;
struct request_queue {int dummy; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->request_queue;
 int VAR_2;

 FUNC_1(&VAR_0->state_mutex);
 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 == 0)
  FUNC_0(VAR_1);
 FUNC_2(&VAR_0->state_mutex);

 return VAR_2;
}
