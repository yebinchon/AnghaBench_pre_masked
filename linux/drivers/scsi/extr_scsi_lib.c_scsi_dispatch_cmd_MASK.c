
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int result; int* cmnd; scalar_t__ cmd_len; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__* device; } ;
struct Scsi_Host {scalar_t__ max_cmd_len; scalar_t__ shost_state; TYPE_1__* hostt; } ;
struct TYPE_4__ {scalar_t__ sdev_state; int lun; struct Scsi_Host* host; scalar_t__ lun_in_cdb; int iorequest_cnt; } ;
struct TYPE_3__ {int (* queuecommand ) (struct Scsi_Host*,struct scsi_cmnd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct scsi_cmnd*,char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct Scsi_Host*,struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*,int) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct scsi_cmnd *VAR_8)
{
 struct Scsi_Host *VAR_9 = VAR_8->device->host;
 int VAR_10 = 0;

 FUNC_1(&VAR_8->device->iorequest_cnt);


 if (FUNC_9(VAR_8->device->sdev_state == VAR_6)) {



  VAR_8->result = VAR_1 << 16;
  goto done;
 }


 if (FUNC_9(FUNC_3(VAR_8->device))) {







  FUNC_0(3, FUNC_2(VAR_2, VAR_8,
   "queuecommand : device blocked\n"));
  return VAR_3;
 }


 if (VAR_8->device->lun_in_cdb)
  VAR_8->cmnd[1] = (VAR_8->cmnd[1] & 0x1f) |
          (VAR_8->device->lun << 5 & 0xe0);

 FUNC_4(VAR_8);





 if (VAR_8->cmd_len > VAR_8->device->host->max_cmd_len) {
  FUNC_0(3, FUNC_2(VAR_2, VAR_8,
          "queuecommand : command too long. "
          "cdb_size=%d host->max_cmd_len=%d\n",
          VAR_8->cmd_len, VAR_8->device->host->max_cmd_len));
  VAR_8->result = (VAR_0 << 16);
  goto done;
 }

 if (FUNC_9(VAR_9->shost_state == VAR_7)) {
  VAR_8->result = (VAR_1 << 16);
  goto done;

 }

 FUNC_8(VAR_8);
 VAR_10 = VAR_9->hostt->queuecommand(VAR_9, VAR_8);
 if (VAR_10) {
  FUNC_7(VAR_8, VAR_10);
  if (VAR_10 != VAR_3 &&
      VAR_10 != VAR_5)
   VAR_10 = VAR_4;

  FUNC_0(3, FUNC_2(VAR_2, VAR_8,
   "queuecommand : request rejected\n"));
 }

 return VAR_10;
 done:
 VAR_8->scsi_done(VAR_8);
 return 0;
}
