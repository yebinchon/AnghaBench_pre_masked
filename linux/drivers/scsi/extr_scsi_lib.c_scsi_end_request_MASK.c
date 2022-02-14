
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int requeue_work; TYPE_1__* host; struct request_queue* request_queue; } ;
struct scsi_cmnd {int flags; int rcu; struct scsi_device* device; } ;
struct request_queue {int q_usage_counter; } ;
struct request {int rq_disk; } ;
typedef int blk_status_t ;
struct TYPE_4__ {scalar_t__ single_lun; } ;
struct TYPE_3__ {int starved_list; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct request*,int ) ;
 int FUNC_2 (int ) ;
 struct scsi_cmnd* FUNC_3 (struct request*) ;
 int FUNC_4 (struct request_queue*,int) ;
 scalar_t__ FUNC_5 (struct request_queue*) ;
 int FUNC_6 (struct request*) ;
 scalar_t__ FUNC_7 (struct request*,int ,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct scsi_cmnd*) ;
 TYPE_2__* FUNC_14 (struct scsi_device*) ;

__attribute__((used)) static bool FUNC_15(struct request *VAR_1, blk_status_t VAR_2,
  unsigned int VAR_3)
{
 struct scsi_cmnd *VAR_4 = FUNC_3(VAR_1);
 struct scsi_device *VAR_5 = VAR_4->device;
 struct request_queue *VAR_6 = VAR_5->request_queue;

 if (FUNC_7(VAR_1, VAR_2, VAR_3))
  return 1;

 if (FUNC_5(VAR_6))
  FUNC_2(VAR_1->rq_disk);

 if (!FUNC_6(VAR_1)) {
  FUNC_0(!(VAR_4->flags & VAR_0));
  VAR_4->flags &= ~VAR_0;
 }







 FUNC_8(&VAR_4->rcu);
 FUNC_13(VAR_4);





 FUNC_11(&VAR_6->q_usage_counter);

 FUNC_1(VAR_1, VAR_2);

 if (FUNC_14(VAR_5)->single_lun ||
     !FUNC_10(&VAR_5->host->starved_list))
  FUNC_9(&VAR_5->requeue_work);
 else
  FUNC_4(VAR_6, 1);

 FUNC_12(&VAR_6->q_usage_counter);
 return 0;
}
