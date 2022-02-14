
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_device {TYPE_1__* handler; } ;
struct scsi_cmnd {int cmnd; } ;
struct request {int dummy; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_6__ {scalar_t__ (* init_command ) (struct scsi_cmnd*) ;} ;
struct TYPE_5__ {int __cmd; int cmd; } ;
struct TYPE_4__ {scalar_t__ (* prep_fn ) (struct scsi_device*,struct request*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct scsi_cmnd* FUNC_0 (struct request*) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_3__* FUNC_2 (struct scsi_cmnd*) ;
 TYPE_2__* FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct scsi_device*,struct request*) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static blk_status_t FUNC_7(struct scsi_device *VAR_2,
  struct request *VAR_3)
{
 struct scsi_cmnd *VAR_4 = FUNC_0(VAR_3);

 if (FUNC_6(VAR_2->handler && VAR_2->handler->prep_fn)) {
  blk_status_t VAR_5 = VAR_2->handler->prep_fn(VAR_2, VAR_3);
  if (VAR_5 != VAR_1)
   return VAR_5;
 }

 VAR_4->cmnd = FUNC_3(VAR_3)->cmd = FUNC_3(VAR_3)->__cmd;
 FUNC_1(VAR_4->cmnd, 0, VAR_0);
 return FUNC_2(VAR_4)->init_command(VAR_4);
}
