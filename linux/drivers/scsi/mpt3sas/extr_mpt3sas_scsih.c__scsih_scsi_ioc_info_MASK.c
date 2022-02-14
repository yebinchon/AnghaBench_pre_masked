
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sense_info {char* skey; int asc; char* ascq; } ;
struct scsi_target {struct MPT3SAS_TARGET* hostdata; } ;
struct scsi_cmnd {int sense_buffer; int result; int underflow; TYPE_1__* device; } ;
struct _sas_device {int phy; scalar_t__ sas_address; } ;
struct _pcie_device {scalar_t__ enclosure_handle; scalar_t__* connector_name; int enclosure_level; scalar_t__* slot; scalar_t__ enclosure_logical_id; scalar_t__* port_num; scalar_t__ wwid; } ;
struct MPT3SAS_TARGET {int flags; scalar_t__ sas_address; } ;
struct MPT3SAS_ADAPTER {char* tmp_string; scalar_t__ hide_ir_msg; } ;
struct TYPE_5__ {int SCSIState; int SCSIStatus; int ResponseInfo; int SenseCount; int TransferCount; int TaskTag; int DevHandle; int IOCLogInfo; int IOCStatus; } ;
struct TYPE_4__ {struct scsi_target* sdev_target; } ;
typedef TYPE_2__ Mpi2SCSIIOReply_t ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct _sas_device*,int *,int *) ;
 int FUNC_1 (int ,struct sense_info*) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,int) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*,char*,int ,scalar_t__*) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct _pcie_device* FUNC_7 (struct MPT3SAS_ADAPTER*,struct MPT3SAS_TARGET*) ;
 struct _sas_device* FUNC_8 (struct MPT3SAS_ADAPTER*,struct MPT3SAS_TARGET*) ;
 int FUNC_9 (struct _pcie_device*) ;
 int FUNC_10 (struct _sas_device*) ;
 int FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (struct scsi_cmnd*) ;
 int FUNC_14 (char*,char*) ;

__attribute__((used)) static void
FUNC_15(struct MPT3SAS_ADAPTER *VAR_8, struct scsi_cmnd *VAR_9,
 Mpi2SCSIIOReply_t *VAR_10, u16 VAR_11)
{
 u32 VAR_12;
 u8 *VAR_13;
 u16 VAR_14 = FUNC_5(VAR_10->IOCStatus) &
     VAR_0;
 u8 VAR_15 = VAR_10->SCSIState;
 u8 VAR_16 = VAR_10->SCSIStatus;
 char *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 char *VAR_19 = VAR_8->tmp_string;
 u32 VAR_20 = FUNC_6(VAR_10->IOCLogInfo);
 struct _sas_device *VAR_21 = ((void*)0);
 struct _pcie_device *VAR_22 = ((void*)0);
 struct scsi_target *VAR_23 = VAR_9->device->sdev_target;
 struct MPT3SAS_TARGET *VAR_24 = VAR_23->hostdata;
 char *VAR_25 = ((void*)0);

 if (!VAR_24)
  return;
 if (VAR_8->hide_ir_msg)
  VAR_25 = "WarpDrive";
 else
  VAR_25 = "volume";

 if (VAR_20 == 0x31170000)
  return;

 switch (VAR_14) {
 case 139:
  VAR_17 = "success";
  break;
 case 152:
  VAR_17 = "invalid function";
  break;
 case 143:
  VAR_17 = "scsi recovered error";
  break;
 case 147:
  VAR_17 = "scsi invalid dev handle";
  break;
 case 149:
  VAR_17 = "scsi device not there";
  break;
 case 151:
  VAR_17 = "scsi data overrun";
  break;
 case 150:
  VAR_17 = "scsi data underrun";
  break;
 case 145:
  VAR_17 = "scsi io data error";
  break;
 case 144:
  VAR_17 = "scsi protocol error";
  break;
 case 140:
  VAR_17 = "scsi task terminated";
  break;
 case 142:
  VAR_17 = "scsi residual mismatch";
  break;
 case 141:
  VAR_17 = "scsi task mgmt failed";
  break;
 case 146:
  VAR_17 = "scsi ioc terminated";
  break;
 case 148:
  VAR_17 = "scsi ext terminated";
  break;
 case 155:
  VAR_17 = "eedp guard error";
  break;
 case 154:
  VAR_17 = "eedp ref tag error";
  break;
 case 156:
  VAR_17 = "eedp app tag error";
  break;
 case 153:
  VAR_17 = "insufficient power";
  break;
 default:
  VAR_17 = "unknown";
  break;
 }

 switch (VAR_16) {
 case 133:
  VAR_18 = "good";
  break;
 case 136:
  VAR_18 = "check condition";
  break;
 case 134:
  VAR_18 = "condition met";
  break;
 case 137:
  VAR_18 = "busy";
  break;
 case 132:
  VAR_18 = "intermediate";
  break;
 case 131:
  VAR_18 = "intermediate condmet";
  break;
 case 130:
  VAR_18 = "reservation conflict";
  break;
 case 135:
  VAR_18 = "command terminated";
  break;
 case 128:
  VAR_18 = "task set full";
  break;
 case 138:
  VAR_18 = "aca active";
  break;
 case 129:
  VAR_18 = "task aborted";
  break;
 default:
  VAR_18 = "unknown";
  break;
 }

 VAR_19[0] = '\0';
 if (!VAR_15)
  VAR_19 = " ";
 if (VAR_15 & VAR_4)
  FUNC_14(VAR_19, "response info ");
 if (VAR_15 & VAR_5)
  FUNC_14(VAR_19, "state terminated ");
 if (VAR_15 & VAR_3)
  FUNC_14(VAR_19, "no status ");
 if (VAR_15 & VAR_1)
  FUNC_14(VAR_19, "autosense failed ");
 if (VAR_15 & VAR_2)
  FUNC_14(VAR_19, "autosense valid ");

 FUNC_13(VAR_9);

 if (VAR_24->flags & VAR_7) {
  FUNC_4(VAR_8, "\t%s wwid(0x%016llx)\n",
    VAR_25, (u64)VAR_24->sas_address);
 } else if (VAR_24->flags & VAR_6) {
  VAR_22 = FUNC_7(VAR_8, VAR_24);
  if (VAR_22) {
   FUNC_3(VAR_8, "\twwid(0x%016llx), port(%d)\n",
     (u64)VAR_22->wwid, VAR_22->port_num);
   if (VAR_22->enclosure_handle != 0)
    FUNC_3(VAR_8, "\tenclosure logical id(0x%016llx), slot(%d)\n",
      (u64)VAR_22->enclosure_logical_id,
      VAR_22->slot);
   if (VAR_22->connector_name[0])
    FUNC_3(VAR_8, "\tenclosure level(0x%04x), connector name( %s)\n",
      VAR_22->enclosure_level,
      VAR_22->connector_name);
   FUNC_9(VAR_22);
  }
 } else {
  VAR_21 = FUNC_8(VAR_8, VAR_24);
  if (VAR_21) {
   FUNC_4(VAR_8, "\tsas_address(0x%016llx), phy(%d)\n",
     (u64)VAR_21->sas_address, VAR_21->phy);

   FUNC_0(VAR_8, VAR_21,
       ((void*)0), ((void*)0));

   FUNC_10(VAR_21);
  }
 }

 FUNC_4(VAR_8, "\thandle(0x%04x), ioc_status(%s)(0x%04x), smid(%d)\n",
   FUNC_5(VAR_10->DevHandle),
   VAR_17, VAR_14, VAR_11);
 FUNC_4(VAR_8, "\trequest_len(%d), underflow(%d), resid(%d)\n",
   FUNC_11(VAR_9), VAR_9->underflow, FUNC_12(VAR_9));
 FUNC_4(VAR_8, "\ttag(%d), transfer_count(%d), sc->result(0x%08x)\n",
   FUNC_5(VAR_10->TaskTag),
   FUNC_6(VAR_10->TransferCount), VAR_9->result);
 FUNC_4(VAR_8, "\tscsi_status(%s)(0x%02x), scsi_state(%s)(0x%02x)\n",
   VAR_18, VAR_16, VAR_19, VAR_15);

 if (VAR_15 & VAR_2) {
  struct sense_info VAR_26;
  FUNC_1(VAR_9->sense_buffer, &VAR_26);
  FUNC_4(VAR_8, "\t[sense_key,asc,ascq]: [0x%02x,0x%02x,0x%02x], count(%d)\n",
    VAR_26.skey, VAR_26.asc, VAR_26.ascq,
    FUNC_6(VAR_10->SenseCount));
 }
 if (VAR_15 & VAR_4) {
  VAR_12 = FUNC_6(VAR_10->ResponseInfo);
  VAR_13 = (u8 *)&VAR_12;
  FUNC_2(VAR_8, VAR_13[0]);
 }
}
