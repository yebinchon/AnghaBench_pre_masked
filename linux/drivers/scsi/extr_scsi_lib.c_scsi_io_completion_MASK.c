
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int result; struct request* request; TYPE_1__* device; } ;
struct request_queue {int dummy; } ;
struct request {int dummy; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_4__ {int result; } ;
struct TYPE_3__ {struct request_queue* request_queue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,char*) ;
 unsigned int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,struct scsi_cmnd*,char*,int ,unsigned int) ;
 scalar_t__ FUNC_7 (struct request*,scalar_t__,unsigned int) ;
 int FUNC_8 (struct scsi_cmnd*,int) ;
 int FUNC_9 (struct scsi_cmnd*,int,scalar_t__*) ;
 int FUNC_10 (struct scsi_cmnd*,struct request_queue*) ;
 scalar_t__ FUNC_11 (struct scsi_cmnd*) ;
 TYPE_2__* FUNC_12 (struct request*) ;
 scalar_t__ FUNC_13 (int) ;

void FUNC_14(struct scsi_cmnd *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = VAR_2->result;
 struct request_queue *VAR_5 = VAR_2->device->request_queue;
 struct request *VAR_6 = VAR_2->request;
 blk_status_t VAR_7 = VAR_0;

 if (FUNC_13(VAR_4))
  VAR_4 = FUNC_9(VAR_2, VAR_4, &VAR_7);

 if (FUNC_13(FUNC_3(VAR_6))) {



  FUNC_12(VAR_6)->result = VAR_2->result;
 }





 FUNC_0(1, FUNC_6(VAR_1, VAR_2,
  "%u sectors total, %d bytes done.\n",
  FUNC_4(VAR_6), VAR_3));






 if (FUNC_5(FUNC_2(VAR_6) > 0 || VAR_7 == VAR_0)) {
  if (FUNC_5(!FUNC_7(VAR_6, VAR_7, VAR_3)))
   return;
 }


 if (FUNC_13(VAR_7 && FUNC_11(VAR_2))) {
  if (FUNC_7(VAR_6, VAR_7, FUNC_2(VAR_6)))
   FUNC_1(1,
       "Bytes remaining after failed, no-retry command");
  return;
 }





 if (FUNC_5(VAR_4 == 0))
  FUNC_10(VAR_2, VAR_5);
 else
  FUNC_8(VAR_2, VAR_4);
}
