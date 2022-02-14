
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct scsi_target {struct MPT3SAS_TARGET* hostdata; } ;
struct scsi_cmnd {int result; TYPE_2__* device; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct _sas_device {scalar_t__ volume_handle; } ;
struct _pcie_device {int reset_timeout; int device_info; } ;
struct MPT3SAS_TARGET {int dummy; } ;
struct MPT3SAS_DEVICE {TYPE_1__* sas_target; } ;
struct MPT3SAS_ADAPTER {int tm_custom_handling; scalar_t__ remove_host; } ;
struct TYPE_4__ {int device_busy; int lun; struct MPT3SAS_DEVICE* hostdata; struct scsi_target* sdev_target; int host; } ;
struct TYPE_3__ {int flags; scalar_t__ handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct _pcie_device* FUNC_2 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 struct _sas_device* FUNC_3 (struct MPT3SAS_ADAPTER*,struct MPT3SAS_TARGET*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct MPT3SAS_ADAPTER*,scalar_t__,int ,int ,int ,int ,int,int) ;
 int FUNC_6 (struct _pcie_device*) ;
 int FUNC_7 (struct _sas_device*) ;
 int FUNC_8 (int ,TYPE_2__*,char*,...) ;
 struct MPT3SAS_ADAPTER* FUNC_9 (int ) ;
 int FUNC_10 (struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_11(struct scsi_cmnd *VAR_9)
{
 struct MPT3SAS_ADAPTER *VAR_10 = FUNC_9(VAR_9->device->host);
 struct MPT3SAS_DEVICE *VAR_11;
 struct _sas_device *VAR_12 = ((void*)0);
 struct _pcie_device *VAR_13 = ((void*)0);
 u16 VAR_14;
 u8 VAR_15 = 0;
 u8 VAR_16 = 30;
 int VAR_17;

 struct scsi_target *VAR_18 = VAR_9->device->sdev_target;
 struct MPT3SAS_TARGET *VAR_19 = VAR_18->hostdata;

 FUNC_8(VAR_3, VAR_9->device,
  "attempting device reset! scmd(%p)\n", VAR_9);
 FUNC_0(VAR_10, VAR_9);

 VAR_11 = VAR_9->device->hostdata;
 if (!VAR_11 || !VAR_11->sas_target ||
     VAR_10->remove_host) {
  FUNC_8(VAR_3, VAR_9->device,
   "device been deleted! scmd(%p)\n", VAR_9);
  VAR_9->result = VAR_0 << 16;
  VAR_9->scsi_done(VAR_9);
  VAR_17 = VAR_8;
  goto out;
 }


 VAR_14 = 0;
 if (VAR_11->sas_target->flags &
     VAR_7) {
  VAR_12 = FUNC_3(VAR_10,
    VAR_19);
  if (VAR_12)
   VAR_14 = VAR_12->volume_handle;
 } else
  VAR_14 = VAR_11->sas_target->handle;

 if (!VAR_14) {
  VAR_9->result = VAR_1 << 16;
  VAR_17 = VAR_2;
  goto out;
 }

 VAR_13 = FUNC_2(VAR_10, VAR_14);

 if (VAR_13 && (!VAR_10->tm_custom_handling) &&
     (!(FUNC_4(VAR_13->device_info)))) {
  VAR_16 = VAR_13->reset_timeout;
  VAR_15 = VAR_4;
 } else
  VAR_15 = VAR_5;

 VAR_17 = FUNC_5(VAR_10, VAR_14, VAR_9->device->lun,
  VAR_6, 0, 0,
  VAR_16, VAR_15);

 if (VAR_17 == VAR_8 && FUNC_1(&VAR_9->device->device_busy))
  VAR_17 = VAR_2;
 out:
 FUNC_8(VAR_3, VAR_9->device, "device reset: %s scmd(%p)\n",
     ((VAR_17 == VAR_8) ? "SUCCESS" : "FAILED"), VAR_9);

 if (VAR_12)
  FUNC_7(VAR_12);
 if (VAR_13)
  FUNC_6(VAR_13);

 return VAR_17;
}
