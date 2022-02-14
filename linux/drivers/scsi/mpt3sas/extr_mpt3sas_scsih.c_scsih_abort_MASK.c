
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct scsiio_tracker {int cb_idx; int msix_io; int smid; } ;
struct scsi_cmnd {int result; TYPE_2__* device; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct _pcie_device {int device_info; } ;
struct MPT3SAS_DEVICE {TYPE_1__* sas_target; } ;
struct MPT3SAS_ADAPTER {int nvme_abort_timeout; int tm_custom_handling; scalar_t__ remove_host; } ;
struct TYPE_4__ {int lun; struct MPT3SAS_DEVICE* hostdata; int host; } ;
struct TYPE_3__ {int flags; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct scsi_cmnd*) ;
 struct _pcie_device* FUNC_1 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_5 (struct _pcie_device*) ;
 struct scsiio_tracker* FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (int ,TYPE_2__*,char*,...) ;
 struct MPT3SAS_ADAPTER* FUNC_8 (int ) ;
 int FUNC_9 (struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_10(struct scsi_cmnd *VAR_8)
{
 struct MPT3SAS_ADAPTER *VAR_9 = FUNC_8(VAR_8->device->host);
 struct MPT3SAS_DEVICE *VAR_10;
 struct scsiio_tracker *VAR_11 = FUNC_6(VAR_8);
 u16 VAR_12;
 int VAR_13;

 u8 VAR_14 = 30;
 struct _pcie_device *VAR_15 = ((void*)0);
 FUNC_7(VAR_3, VAR_8->device,
  "attempting task abort! scmd(%p)\n", VAR_8);
 FUNC_0(VAR_9, VAR_8);

 VAR_10 = VAR_8->device->hostdata;
 if (!VAR_10 || !VAR_10->sas_target ||
     VAR_9->remove_host) {
  FUNC_7(VAR_3, VAR_8->device,
   "device been deleted! scmd(%p)\n", VAR_8);
  VAR_8->result = VAR_0 << 16;
  VAR_8->scsi_done(VAR_8);
  VAR_13 = VAR_7;
  goto out;
 }


 if (VAR_11 == ((void*)0) || VAR_11->cb_idx == 0xFF) {
  VAR_8->result = VAR_1 << 16;
  VAR_13 = VAR_7;
  goto out;
 }


 if (VAR_10->sas_target->flags &
     VAR_5 ||
     VAR_10->sas_target->flags & VAR_6) {
  VAR_8->result = VAR_1 << 16;
  VAR_13 = VAR_2;
  goto out;
 }

 FUNC_2(VAR_9);

 VAR_12 = VAR_10->sas_target->handle;
 VAR_15 = FUNC_1(VAR_9, VAR_12);
 if (VAR_15 && (!VAR_9->tm_custom_handling) &&
     (!(FUNC_3(VAR_15->device_info))))
  VAR_14 = VAR_9->nvme_abort_timeout;
 VAR_13 = FUNC_4(VAR_9, VAR_12, VAR_8->device->lun,
  VAR_4,
  VAR_11->smid, VAR_11->msix_io, VAR_14, 0);

 if (VAR_13 == VAR_7 && VAR_11->cb_idx != 0xFF)
  VAR_13 = VAR_2;
 out:
 FUNC_7(VAR_3, VAR_8->device, "task abort: %s scmd(%p)\n",
     ((VAR_13 == VAR_7) ? "SUCCESS" : "FAILED"), VAR_8);
 if (VAR_15)
  FUNC_5(VAR_15);
 return VAR_13;
}
