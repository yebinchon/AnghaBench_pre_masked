
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {int result; scalar_t__* cmnd; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_3__* device; } ;
struct megasas_instance {int unload; scalar_t__ issuepend_done; scalar_t__ fw_supported_vd_count; TYPE_2__* instancet; int fw_sync_cache_support; int adprecovery; } ;
struct Scsi_Host {int dummy; } ;
struct MR_PRIV_DEVICE {scalar_t__ tm_busy; } ;
struct TYPE_6__ {scalar_t__ id; scalar_t__ lun; struct MR_PRIV_DEVICE* hostdata; TYPE_1__* host; } ;
struct TYPE_5__ {int (* build_and_issue_cmd ) (struct megasas_instance*,struct scsi_cmnd*) ;} ;
struct TYPE_4__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct megasas_instance*,struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct megasas_instance*,struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_9(struct Scsi_Host *VAR_10, struct scsi_cmnd *VAR_11)
{
 struct megasas_instance *VAR_12;
 struct MR_PRIV_DEVICE *VAR_13;

 VAR_12 = (struct megasas_instance *)
     VAR_11->device->host->hostdata;

 if (VAR_12->unload == 1) {
  VAR_11->result = VAR_1 << 16;
  VAR_11->scsi_done(VAR_11);
  return 0;
 }

 if (VAR_12->issuepend_done == 0)
  return VAR_8;



 if (FUNC_1(&VAR_12->adprecovery) == VAR_4) {
  if (FUNC_2(VAR_12, VAR_11) ==
      (VAR_3 << 16)) {
   return VAR_8;
  } else {
   VAR_11->result = VAR_1 << 16;
   VAR_11->scsi_done(VAR_11);
   return 0;
  }
 }

 if (FUNC_1(&VAR_12->adprecovery) == VAR_6) {
  VAR_11->result = VAR_1 << 16;
  VAR_11->scsi_done(VAR_11);
  return 0;
 }

 VAR_13 = VAR_11->device->hostdata;
 if (!VAR_13) {
  VAR_11->result = VAR_1 << 16;
  VAR_11->scsi_done(VAR_11);
  return 0;
 }

 if (FUNC_1(&VAR_12->adprecovery) != VAR_5)
  return VAR_8;

 if (VAR_13->tm_busy)
  return VAR_7;


 VAR_11->result = 0;

 if (FUNC_0(VAR_11->device) &&
     (VAR_11->device->id >= VAR_12->fw_supported_vd_count ||
  VAR_11->device->lun)) {
  VAR_11->result = VAR_0 << 16;
  goto out_done;
 }

 if ((VAR_11->cmnd[0] == VAR_9) &&
     FUNC_0(VAR_11->device) &&
     (!VAR_12->fw_sync_cache_support)) {
  VAR_11->result = VAR_2 << 16;
  goto out_done;
 }

 return VAR_12->instancet->build_and_issue_cmd(VAR_12, VAR_11);

 out_done:
 VAR_11->scsi_done(VAR_11);
 return 0;
}
