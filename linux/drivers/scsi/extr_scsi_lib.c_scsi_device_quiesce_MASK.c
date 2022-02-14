
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ quiesced_by; int state_mutex; struct request_queue* request_queue; } ;
struct request_queue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct scsi_device*,int ) ;
 int FUNC_8 () ;

int
FUNC_9(struct scsi_device *VAR_2)
{
 struct request_queue *VAR_3 = VAR_2->request_queue;
 int VAR_4;






 FUNC_0(VAR_2->quiesced_by && VAR_2->quiesced_by != VAR_1);

 if (VAR_2->quiesced_by == VAR_1)
  return 0;

 FUNC_4(VAR_3);

 FUNC_2(VAR_3);






 FUNC_8();
 FUNC_3(VAR_3);

 FUNC_5(&VAR_2->state_mutex);
 VAR_4 = FUNC_7(VAR_2, VAR_0);
 if (VAR_4 == 0)
  VAR_2->quiesced_by = VAR_1;
 else
  FUNC_1(VAR_3);
 FUNC_6(&VAR_2->state_mutex);

 return VAR_4;
}
