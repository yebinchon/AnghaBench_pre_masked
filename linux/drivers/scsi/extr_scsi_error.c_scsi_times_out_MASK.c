
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int state; TYPE_2__* device; } ;
struct request {int dummy; } ;
struct Scsi_Host {int eh_deadline; TYPE_1__* hostt; scalar_t__ last_reset; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;
struct TYPE_4__ {struct Scsi_Host* host; } ;
struct TYPE_3__ {int (* eh_timed_out ) (struct scsi_cmnd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct scsi_cmnd* FUNC_0 (struct request*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*,int ) ;
 int FUNC_4 (struct scsi_cmnd*,int ) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct scsi_cmnd*) ;

enum blk_eh_timer_return FUNC_8(struct request *VAR_7)
{
 struct scsi_cmnd *VAR_8 = FUNC_0(VAR_7);
 enum blk_eh_timer_return VAR_9 = VAR_0;
 struct Scsi_Host *VAR_10 = VAR_8->device->host;

 FUNC_7(VAR_8);
 FUNC_3(VAR_8, VAR_5);

 if (VAR_10->eh_deadline != -1 && !VAR_10->last_reset)
  VAR_10->last_reset = VAR_6;

 if (VAR_10->hostt->eh_timed_out)
  VAR_9 = VAR_10->hostt->eh_timed_out(VAR_8);

 if (VAR_9 == VAR_0) {
  if (FUNC_6(VAR_3, &VAR_8->state))
   return VAR_1;
  if (FUNC_1(VAR_8) != VAR_4) {
   FUNC_4(VAR_8, VAR_2);
   FUNC_2(VAR_8);
  }
 }

 return VAR_9;
}
