
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct request_queue* request_queue; } ;
struct request_queue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct scsi_device*,int ) ;

int FUNC_2(struct scsi_device *VAR_2)
{
 struct request_queue *VAR_3 = VAR_2->request_queue;
 int VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (VAR_4) {
  VAR_4 = FUNC_1(VAR_2, VAR_1);

  if (VAR_4)
   return VAR_4;
 }






 FUNC_0(VAR_3);
 return 0;
}
