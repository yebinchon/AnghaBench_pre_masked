
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u16 ;
struct _sas_device {int slot; scalar_t__ enclosure_logical_id; int phy; scalar_t__ sas_address; } ;
struct _pcie_device {scalar_t__ enclosure_handle; int slot; scalar_t__ enclosure_logical_id; int port_num; scalar_t__ wwid; } ;
struct MPT3SAS_ADAPTER {int logging_level; char* tmp_string; } ;
struct TYPE_14__ {scalar_t__ IOCLogInfo; scalar_t__ IOCStatus; } ;
struct TYPE_9__ {int PageType; int PageNumber; } ;
struct TYPE_13__ {int Function; int ExtPageType; TYPE_1__ Header; } ;
struct TYPE_12__ {int SCSIState; int SCSIStatus; scalar_t__ DevHandle; } ;
struct TYPE_10__ {int* CDB32; } ;
struct TYPE_11__ {scalar_t__ IoFlags; TYPE_2__ CDB; } ;
typedef TYPE_3__ Mpi2SCSIIORequest_t ;
typedef TYPE_4__ Mpi2SCSIIOReply_t ;
typedef TYPE_5__ Mpi2ConfigRequest_t ;
typedef TYPE_6__ MPI2DefaultReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,...) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*,unsigned long long,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_5__* FUNC_4 (struct MPT3SAS_ADAPTER*,int ) ;
 struct _pcie_device* FUNC_5 (struct MPT3SAS_ADAPTER*,int) ;
 struct _sas_device* FUNC_6 (struct MPT3SAS_ADAPTER*,int) ;
 int FUNC_7 (struct _pcie_device*) ;
 int FUNC_8 (struct _sas_device*) ;
 int FUNC_9 (char*,int ,char*,int,int,...) ;

__attribute__((used)) static void
FUNC_10(struct MPT3SAS_ADAPTER *VAR_3, u16 VAR_4,
 char *VAR_5, MPI2DefaultReply_t *VAR_6)
{
 Mpi2ConfigRequest_t *VAR_7;
 char *VAR_8 = ((void*)0);

 if (!(VAR_3->logging_level & VAR_1))
  return;

 VAR_7 = FUNC_4(VAR_3, VAR_4);
 switch (VAR_7->Function) {
 case 130:
 {
  Mpi2SCSIIORequest_t *VAR_9 =
      (Mpi2SCSIIORequest_t *)VAR_7;

  FUNC_9(VAR_3->tmp_string, VAR_2,
      "scsi_io, cmd(0x%02x), cdb_len(%d)",
      VAR_9->CDB.CDB32[0],
      FUNC_2(VAR_9->IoFlags) & 0xF);
  VAR_8 = VAR_3->tmp_string;
  break;
 }
 case 129:
  VAR_8 = "task_mgmt";
  break;
 case 137:
  VAR_8 = "ioc_init";
  break;
 case 138:
  VAR_8 = "ioc_facts";
  break;
 case 144:
 {
  Mpi2ConfigRequest_t *VAR_10 =
      (Mpi2ConfigRequest_t *)VAR_7;

  FUNC_9(VAR_3->tmp_string, VAR_2,
      "config, type(0x%02x), ext_type(0x%02x), number(%d)",
      (VAR_10->Header.PageType &
       VAR_0), VAR_10->ExtPageType,
      VAR_10->Header.PageNumber);
  VAR_8 = VAR_3->tmp_string;
  break;
 }
 case 135:
  VAR_8 = "port_facts";
  break;
 case 136:
  VAR_8 = "port_enable";
  break;
 case 141:
  VAR_8 = "event_notification";
  break;
 case 140:
  VAR_8 = "fw_download";
  break;
 case 139:
  VAR_8 = "fw_upload";
  break;
 case 134:
  VAR_8 = "raid_action";
  break;
 case 133:
 {
  Mpi2SCSIIORequest_t *VAR_11 =
      (Mpi2SCSIIORequest_t *)VAR_7;

  FUNC_9(VAR_3->tmp_string, VAR_2,
      "raid_pass, cmd(0x%02x), cdb_len(%d)",
      VAR_11->CDB.CDB32[0],
      FUNC_2(VAR_11->IoFlags) & 0xF);
  VAR_8 = VAR_3->tmp_string;
  break;
 }
 case 132:
  VAR_8 = "sas_iounit_cntl";
  break;
 case 131:
  VAR_8 = "sata_pass";
  break;
 case 143:
  VAR_8 = "diag_buffer_post";
  break;
 case 142:
  VAR_8 = "diag_release";
  break;
 case 128:
  VAR_8 = "smp_passthrough";
  break;
 }

 if (!VAR_8)
  return;

 FUNC_0(VAR_3, "%s: %s, smid(%d)\n", VAR_5, VAR_8, VAR_4);

 if (!VAR_6)
  return;

 if (VAR_6->IOCStatus || VAR_6->IOCLogInfo)
  FUNC_0(VAR_3, "\tiocstatus(0x%04x), loginfo(0x%08x)\n",
    FUNC_2(VAR_6->IOCStatus),
    FUNC_3(VAR_6->IOCLogInfo));

 if (VAR_7->Function == 130 ||
     VAR_7->Function ==
     133) {
  Mpi2SCSIIOReply_t *VAR_12 =
      (Mpi2SCSIIOReply_t *)VAR_6;
  struct _sas_device *VAR_13 = ((void*)0);
  struct _pcie_device *VAR_14 = ((void*)0);

  VAR_13 = FUNC_6(VAR_3,
      FUNC_2(VAR_12->DevHandle));
  if (VAR_13) {
   FUNC_1(VAR_3, "\tsas_address(0x%016llx), phy(%d)\n",
     (u64)VAR_13->sas_address,
     VAR_13->phy);
   FUNC_1(VAR_3, "\tenclosure_logical_id(0x%016llx), slot(%d)\n",
     (u64)VAR_13->enclosure_logical_id,
     VAR_13->slot);
   FUNC_8(VAR_13);
  }
  if (!VAR_13) {
   VAR_14 = FUNC_5(VAR_3,
    FUNC_2(VAR_12->DevHandle));
   if (VAR_14) {
    FUNC_1(VAR_3, "\tWWID(0x%016llx), port(%d)\n",
      (unsigned long long)VAR_14->wwid,
      VAR_14->port_num);
    if (VAR_14->enclosure_handle != 0)
     FUNC_1(VAR_3, "\tenclosure_logical_id(0x%016llx), slot(%d)\n",
       (u64)VAR_14->enclosure_logical_id,
       VAR_14->slot);
    FUNC_7(VAR_14);
   }
  }
  if (VAR_12->SCSIState || VAR_12->SCSIStatus)
   FUNC_0(VAR_3, "\tscsi_state(0x%02x), scsi_status(0x%02x)\n",
     VAR_12->SCSIState,
     VAR_12->SCSIStatus);
 }
}
