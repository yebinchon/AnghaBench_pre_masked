
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct scsi_cmnd {int allowed; int transfersize; int cmnd; int cmd_len; int sdb; } ;
struct request {scalar_t__ bio; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_2__ {int retries; int cmd; int cmd_len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct scsi_cmnd* FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;
 TYPE_1__* FUNC_5 (struct request*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static blk_status_t FUNC_7(struct scsi_device *VAR_1,
  struct request *VAR_2)
{
 struct scsi_cmnd *VAR_3 = FUNC_1(VAR_2);







 if (VAR_2->bio) {
  blk_status_t VAR_4 = FUNC_4(VAR_3);
  if (FUNC_6(VAR_4 != VAR_0))
   return VAR_4;
 } else {
  FUNC_0(FUNC_2(VAR_2));

  FUNC_3(&VAR_3->sdb, 0, sizeof(VAR_3->sdb));
 }

 VAR_3->cmd_len = FUNC_5(VAR_2)->cmd_len;
 VAR_3->cmnd = FUNC_5(VAR_2)->cmd;
 VAR_3->transfersize = FUNC_2(VAR_2);
 VAR_3->allowed = FUNC_5(VAR_2)->retries;
 return VAR_0;
}
