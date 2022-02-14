
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
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct megasas_instance*,scalar_t__,int ,int ,int ,int ,struct MR_PRIV_DEVICE*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct scsi_cmnd*,char*,char*) ;
 int FUNC_7 (int ,TYPE_4__*,char*,...) ;

int FUNC_8(struct scsi_cmnd *VAR_8)
{

 struct megasas_instance *VAR_9;
 int VAR_10 = VAR_1;
 u16 VAR_11;
 struct MR_PRIV_DEVICE *VAR_12;
 VAR_12 = VAR_8->device->hostdata;

 VAR_9 = (struct megasas_instance *)VAR_8->device->host->hostdata;

 if (FUNC_0(&VAR_9->adprecovery) != VAR_4) {
  FUNC_1(&VAR_9->pdev->dev, "Controller is not OPERATIONAL,"
  "SCSI host:%d\n", VAR_9->host->host_no);
  VAR_10 = VAR_1;
  return VAR_10;
 }

 if (!VAR_12) {
  FUNC_7(VAR_2, VAR_8->device,
       "device been deleted! scmd: (0x%p)\n", VAR_8);
  VAR_8->result = VAR_0 << 16;
  VAR_10 = VAR_6;
  goto out;
 }

 if (!VAR_12->is_tm_capable) {
  VAR_10 = VAR_1;
  goto out;
 }

 FUNC_4(&VAR_9->reset_mutex);
 VAR_11 = FUNC_2(VAR_8->device);

 if (VAR_11 == (u16)VAR_7) {
  VAR_10 = VAR_6;
  FUNC_7(VAR_2, VAR_8->device,
   "target reset issued for invalid devhandle\n");
  FUNC_5(&VAR_9->reset_mutex);
  goto out;
 }

 FUNC_7(VAR_2, VAR_8->device,
  "attempting target reset! scmd(0x%p) tm_dev_handle: 0x%x\n",
  VAR_8, VAR_11);
 VAR_12->tm_busy = 1;
 VAR_10 = FUNC_3(VAR_9, VAR_11,
   VAR_8->device->channel, VAR_8->device->id, 0,
   VAR_5,
   VAR_12);
 VAR_12->tm_busy = 0;
 FUNC_5(&VAR_9->reset_mutex);
 FUNC_6(VAR_3, VAR_8, "target reset %s!!\n",
  (VAR_10 == VAR_6) ? "SUCCESS" : "FAILED");

out:
 return VAR_10;
}
