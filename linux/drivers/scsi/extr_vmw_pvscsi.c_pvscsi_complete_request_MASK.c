
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;int * cmnd; TYPE_1__* device; scalar_t__ sense_buffer; } ;
struct pvscsi_ctx {struct completion* abort_cmp; struct scsi_cmnd* cmd; } ;
struct pvscsi_adapter {int dummy; } ;
struct completion {int dummy; } ;
struct PVSCSIRingCmpDesc {int hostStatus; int scsiStatus; scalar_t__ dataLen; int context; } ;
struct TYPE_2__ {int sdev_gendev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct completion*) ;
 int FUNC_1 (int *,char*,struct scsi_cmnd*,int ,struct pvscsi_ctx*,int,int,int) ;
 struct pvscsi_ctx* FUNC_2 (struct pvscsi_adapter*,int ) ;
 int FUNC_3 (struct pvscsi_adapter*,struct pvscsi_ctx*) ;
 int FUNC_4 (struct pvscsi_adapter*,struct pvscsi_ctx*) ;
 int FUNC_5 (int ,struct scsi_cmnd*,char*,int) ;
 scalar_t__ FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*,scalar_t__) ;
 int FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_9(struct pvscsi_adapter *VAR_12,
        const struct PVSCSIRingCmpDesc *VAR_13)
{
 struct pvscsi_ctx *VAR_14;
 struct scsi_cmnd *VAR_15;
 struct completion *VAR_16;
 u32 VAR_17 = VAR_13->hostStatus;
 u32 VAR_18 = VAR_13->scsiStatus;

 VAR_14 = FUNC_2(VAR_12, VAR_13->context);
 VAR_15 = VAR_14->cmd;
 VAR_16 = VAR_14->abort_cmp;
 FUNC_4(VAR_12, VAR_14);
 FUNC_3(VAR_12, VAR_14);
 if (VAR_16) {






  FUNC_0(VAR_16);
  return;
 }

 VAR_15->result = 0;
 if (VAR_18 != VAR_11 &&
     (VAR_17 == 129 ||
      VAR_17 == 138 ||
      VAR_17 == 137)) {
  if (VAR_18 == VAR_10) {
   VAR_15->result = (VAR_5 << 16);
  } else {
   VAR_15->result = (VAR_3 << 16) | VAR_18;
   if (VAR_18 == VAR_9 &&
       VAR_15->sense_buffer)
    VAR_15->result |= (VAR_7 << 24);
  }
 } else
  switch (VAR_17) {
  case 129:
  case 138:
  case 137:

   VAR_15->result = (VAR_3 << 16);
   break;

  case 145:
  case 144:

   FUNC_7(VAR_15, FUNC_6(VAR_15) - VAR_13->dataLen);
   VAR_15->result = (VAR_2 << 16);
   break;

  case 132:

   VAR_15->result = (VAR_0 << 16);
   break;

  case 136:
  case 128:
  case 148:
   VAR_15->result = (VAR_6 << 24);


  case 142:
  case 139:
  case 140:
  case 135:
  case 143:
  case 141:
  case 147:
  case 131:
   VAR_15->result |= (VAR_2 << 16);
   break;

  case 130:
  case 134:
  case 146:
   VAR_15->result = (VAR_5 << 16);
   break;

  case 149:
   VAR_15->result = (VAR_1 << 16);
   break;

  case 133:
   VAR_15->result = (VAR_4 << 16);
   break;

  default:
   VAR_15->result = (VAR_2 << 16);
   FUNC_5(VAR_8, VAR_15,
        "Unknown completion status: 0x%x\n",
        VAR_17);
 }

 FUNC_1(&VAR_15->device->sdev_gendev,
  "cmd=%p %x ctx=%p result=0x%x status=0x%x,%x\n",
  VAR_15, VAR_15->cmnd[0], VAR_14, VAR_15->result, VAR_17, VAR_18);

 VAR_15->scsi_done(VAR_15);
}
