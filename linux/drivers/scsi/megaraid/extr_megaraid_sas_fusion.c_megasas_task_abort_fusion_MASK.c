
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct scsi_cmnd {int result; TYPE_4__* device; } ;
struct megasas_instance {int reset_mutex; TYPE_3__* host; TYPE_2__* pdev; int adprecovery; } ;
struct MR_PRIV_DEVICE {int tm_busy; int is_tm_capable; } ;
struct TYPE_9__ {int id; int channel; TYPE_1__* host; struct MR_PRIV_DEVICE* hostdata; } ;
struct TYPE_8__ {int host_no; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int VAR_9 ;
 int FUNC_2 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_3 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct megasas_instance*,scalar_t__,int ,int ,scalar_t__,int ,struct MR_PRIV_DEVICE*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct scsi_cmnd*,char*,...) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 int FUNC_10 (int ,TYPE_4__*,char*,...) ;

int FUNC_11(struct scsi_cmnd *VAR_10)
{
 struct megasas_instance *VAR_11;
 u16 VAR_12, VAR_13;
 int VAR_14;
 struct MR_PRIV_DEVICE *VAR_15;
 VAR_15 = VAR_10->device->hostdata;

 VAR_11 = (struct megasas_instance *)VAR_10->device->host->hostdata;

 if (FUNC_0(&VAR_11->adprecovery) != VAR_4) {
  FUNC_1(&VAR_11->pdev->dev, "Controller is not OPERATIONAL,"
  "SCSI host:%d\n", VAR_11->host->host_no);
  VAR_14 = VAR_1;
  return VAR_14;
 }

 if (!VAR_15) {
  FUNC_10(VAR_2, VAR_10->device, "device been deleted! "
   "scmd(%p)\n", VAR_10);
  VAR_10->result = VAR_0 << 16;
  VAR_14 = VAR_6;
  goto out;
 }

 if (!VAR_15->is_tm_capable) {
  VAR_14 = VAR_1;
  goto out;
 }

 FUNC_6(&VAR_11->reset_mutex);

 VAR_12 = FUNC_3(VAR_10);

 if (!VAR_12) {
  VAR_14 = VAR_6;
  FUNC_8(VAR_3, VAR_10, "Command for which abort is"
   " issued is not found in outstanding commands\n");
  FUNC_7(&VAR_11->reset_mutex);
  goto out;
 }

 VAR_13 = FUNC_4(VAR_10->device);

 if (VAR_13 == (u16)VAR_8) {
  VAR_14 = VAR_6;
  FUNC_10(VAR_2, VAR_10->device,
   "task abort issued for invalid devhandle\n");
  FUNC_7(&VAR_11->reset_mutex);
  goto out;
 }
 FUNC_10(VAR_2, VAR_10->device,
  "attempting task abort! scmd(0x%p) tm_dev_handle 0x%x\n",
  VAR_10, VAR_13);

 VAR_15->tm_busy = 1;
 VAR_14 = FUNC_5(VAR_11, VAR_13,
   VAR_10->device->channel, VAR_10->device->id, VAR_12,
   VAR_5,
   VAR_15);
 VAR_15->tm_busy = 0;

 FUNC_7(&VAR_11->reset_mutex);
 FUNC_8(VAR_2, VAR_10, "task abort %s!! scmd(0x%p)\n",
   ((VAR_14 == VAR_6) ? "SUCCESS" : "FAILED"), VAR_10);
out:
 FUNC_9(VAR_10);
 if (VAR_9 & VAR_7)
  FUNC_2(VAR_10);

 return VAR_14;
}
