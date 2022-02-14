
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct TYPE_9__ {scalar_t__* state; int* free_queue; int chrdev_request_id; int flags; TYPE_1__* host; scalar_t__ reset_print; void* pending_tail; void* pending_head; scalar_t__ pending_request_count; scalar_t__ posted_request_count; void* free_tail; void* free_head; struct scsi_cmnd** srb; } ;
struct TYPE_8__ {int host_lock; } ;
typedef TYPE_2__ TW_Device_Extension ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_9 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_11(TW_Device_Extension *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = 1;
 unsigned long VAR_11 = 0;

 FUNC_5(VAR_1, &VAR_8->flags);
 FUNC_0(VAR_8);
 FUNC_2(VAR_8);
 FUNC_6(VAR_8->host->host_lock, VAR_11);


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if ((VAR_8->state[VAR_9] != VAR_6) &&
      (VAR_8->state[VAR_9] != VAR_7) &&
      (VAR_8->state[VAR_9] != VAR_5)) {
   if (VAR_8->srb[VAR_9]) {
    struct scsi_cmnd *VAR_12 = VAR_8->srb[VAR_9];

    VAR_12->result = (VAR_0 << 16);
    if (FUNC_9(VAR_12))
     FUNC_4(VAR_12);
    VAR_12->scsi_done(VAR_12);
   }
  }
 }


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_8->free_queue[VAR_9] = VAR_9;
  VAR_8->state[VAR_9] = VAR_7;
 }
 VAR_8->free_head = VAR_4;
 VAR_8->free_tail = VAR_4;
 VAR_8->posted_request_count = 0;
 VAR_8->pending_request_count = 0;
 VAR_8->pending_head = VAR_4;
 VAR_8->pending_tail = VAR_4;
 VAR_8->reset_print = 0;

 FUNC_7(VAR_8->host->host_lock, VAR_11);

 if (FUNC_10(VAR_8, 1))
  goto out;

 FUNC_1(VAR_8);
 FUNC_3(VAR_1, &VAR_8->flags);
 VAR_8->chrdev_request_id = VAR_2;

 VAR_10 = 0;
out:
 return VAR_10;
}
