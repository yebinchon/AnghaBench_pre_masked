
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scsi_device {int lun; int id; int channel; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; scalar_t__ sense_buffer; int cmnd; int cmd_len; struct scsi_device* device; } ;
struct pvscsi_ctx {scalar_t__ sensePA; } ;
struct pvscsi_adapter {TYPE_1__* dev; struct PVSCSIRingReqDesc* req_ring; struct PVSCSIRingsState* rings_state; } ;
struct PVSCSIRingsState {int reqNumEntriesLog2; int reqProdIdx; int cmpConsIdx; } ;
struct PVSCSIRingReqDesc {int context; scalar_t__ flags; int tag; int cdbLen; int cdb; int vcpuHint; scalar_t__ senseAddr; scalar_t__ senseLen; int * lun; int target; int bus; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,int ,int) ;
 scalar_t__ FUNC_7 (struct pvscsi_adapter*,struct pvscsi_ctx*,struct scsi_cmnd*,struct PVSCSIRingReqDesc*) ;
 int FUNC_8 (struct pvscsi_adapter*,struct pvscsi_ctx*) ;
 int FUNC_9 (int ,struct scsi_cmnd*,char*,...) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct pvscsi_adapter *VAR_10,
        struct pvscsi_ctx *VAR_11, struct scsi_cmnd *VAR_12)
{
 struct PVSCSIRingsState *VAR_13;
 struct PVSCSIRingReqDesc *VAR_14;
 struct scsi_device *VAR_15;
 u32 VAR_16;

 VAR_13 = VAR_10->rings_state;
 VAR_15 = VAR_12->device;
 VAR_16 = VAR_13->reqNumEntriesLog2;
 if (VAR_13->reqProdIdx - VAR_13->cmpConsIdx >= 1 << VAR_16) {
  FUNC_9(VAR_4, VAR_12, "vmw_pvscsi: "
       "ring full: reqProdIdx=%d cmpConsIdx=%d\n",
       VAR_13->reqProdIdx, VAR_13->cmpConsIdx);
  return -1;
 }

 VAR_14 = VAR_10->req_ring + (VAR_13->reqProdIdx & FUNC_0(VAR_16));

 VAR_14->bus = VAR_15->channel;
 VAR_14->target = VAR_15->id;
 FUNC_6(VAR_14->lun, 0, sizeof(VAR_14->lun));
 VAR_14->lun[1] = VAR_15->lun;

 if (VAR_12->sense_buffer) {
  VAR_11->sensePA = FUNC_2(&VAR_10->dev->dev,
    VAR_12->sense_buffer, VAR_8,
    VAR_0);
  if (FUNC_3(&VAR_10->dev->dev, VAR_11->sensePA)) {
   FUNC_9(VAR_4, VAR_12,
        "vmw_pvscsi: Failed to map sense buffer for DMA.\n");
   VAR_11->sensePA = 0;
   return -VAR_3;
  }
  VAR_14->senseAddr = VAR_11->sensePA;
  VAR_14->senseLen = VAR_8;
 } else {
  VAR_14->senseLen = 0;
  VAR_14->senseAddr = 0;
 }
 VAR_14->cdbLen = VAR_12->cmd_len;
 VAR_14->vcpuHint = FUNC_10();
 FUNC_5(VAR_14->cdb, VAR_12->cmnd, VAR_14->cdbLen);

 VAR_14->tag = VAR_9;

 if (VAR_12->sc_data_direction == VAR_0)
  VAR_14->flags = VAR_7;
 else if (VAR_12->sc_data_direction == VAR_2)
  VAR_14->flags = VAR_6;
 else if (VAR_12->sc_data_direction == VAR_1)
  VAR_14->flags = VAR_5;
 else
  VAR_14->flags = 0;

 if (FUNC_7(VAR_10, VAR_11, VAR_12, VAR_14) != 0) {
  if (VAR_12->sense_buffer) {
   FUNC_4(&VAR_10->dev->dev, VAR_11->sensePA,
      VAR_8,
      VAR_0);
   VAR_11->sensePA = 0;
  }
  return -VAR_3;
 }

 VAR_14->context = FUNC_8(VAR_10, VAR_11);

 FUNC_1();

 VAR_13->reqProdIdx++;

 return 0;
}
