
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef void* u64 ;
typedef int u32 ;
typedef void* u16 ;
struct scsi_target {struct MPT3SAS_TARGET* hostdata; } ;
struct _sas_device {void* handle; char* connector_name; int enclosure_handle; int is_chassis_slot_valid; int chassis_slot; void* enclosure_logical_id; scalar_t__ enclosure_level; struct scsi_target* starget; } ;
struct TYPE_6__ {int ChassisSlot; int Flags; int EnclosureLogicalID; } ;
struct _enclosure_node {TYPE_1__ pg0; } ;
struct MPT3SAS_TARGET {void* handle; } ;
struct MPT3SAS_ADAPTER {int sas_device_lock; } ;
struct TYPE_8__ {int IOCStatus; } ;
struct TYPE_7__ {scalar_t__ PhyNum; int AccessStatus; int Flags; int EnclosureHandle; int ConnectorName; scalar_t__ EnclosureLevel; int SASAddress; int DeviceInfo; } ;
typedef TYPE_2__ Mpi2SasDevicePage0_t ;
typedef TYPE_3__ Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct _sas_device* FUNC_0 (struct MPT3SAS_ADAPTER*,void*) ;
 scalar_t__ FUNC_1 (struct MPT3SAS_ADAPTER*,void*,void*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*,void*) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,char*,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int) ;
 scalar_t__ FUNC_9 (struct MPT3SAS_ADAPTER*,TYPE_3__*,TYPE_2__*,int ,void*) ;
 struct _enclosure_node* FUNC_10 (struct MPT3SAS_ADAPTER*,int) ;
 int FUNC_11 (struct _sas_device*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int ,struct scsi_target*,char*,void*,void*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static void
FUNC_16(struct MPT3SAS_ADAPTER *VAR_7,
 u64 VAR_8, u16 VAR_9, u8 VAR_10, u8 VAR_11)
{
 Mpi2ConfigReply_t VAR_12;
 Mpi2SasDevicePage0_t VAR_13;
 struct _sas_device *VAR_14;
 struct _enclosure_node *VAR_15 = ((void*)0);
 u32 VAR_16;
 unsigned long VAR_17;
 u64 VAR_18;
 struct scsi_target *VAR_19;
 struct MPT3SAS_TARGET *VAR_20;
 u32 VAR_21;

 if ((FUNC_9(VAR_7, &VAR_12, &VAR_13,
     VAR_5, VAR_9)))
  return;

 VAR_16 = FUNC_5(VAR_12.IOCStatus) & VAR_1;
 if (VAR_16 != VAR_2)
  return;




 if (VAR_10 != VAR_13)
  return;


 VAR_21 = FUNC_6(VAR_13);
 if (!(FUNC_2(VAR_21)))
  return;

 FUNC_12(&VAR_7->sas_device_lock, VAR_17);
 VAR_18 = FUNC_7(VAR_13);
 VAR_14 = FUNC_0(VAR_7,
     VAR_18);

 if (!VAR_14)
  goto out_unlock;

 if (FUNC_15(VAR_14->handle != VAR_9)) {
  VAR_19 = VAR_14->starget;
  VAR_20 = VAR_19->hostdata;
  FUNC_14(VAR_0, VAR_19,
   "handle changed from(0x%04x) to (0x%04x)!!!\n",
   VAR_14->handle, VAR_9);
  VAR_20->handle = VAR_9;
  VAR_14->handle = VAR_9;
  if (FUNC_5(VAR_13) &
       VAR_4) {
   VAR_14->enclosure_level =
    VAR_13;
   FUNC_8(VAR_14->connector_name,
    VAR_13, 4);
   VAR_14->connector_name[4] = '\0';
  } else {
   VAR_14->enclosure_level = 0;
   VAR_14->connector_name[0] = '\0';
  }

  VAR_14->enclosure_handle =
    FUNC_5(VAR_13);
  VAR_14->is_chassis_slot_valid = 0;
  VAR_15 = FUNC_10(VAR_7,
      VAR_14->enclosure_handle);
  if (VAR_15) {
   VAR_14->enclosure_logical_id =
       FUNC_7(VAR_15->pg0.EnclosureLogicalID);
   if (FUNC_5(VAR_15->pg0.Flags) &
       VAR_6) {
    VAR_14->is_chassis_slot_valid = 1;
    VAR_14->chassis_slot =
     VAR_15->pg0.ChassisSlot;
   }
  }
 }


 if (!(FUNC_5(VAR_13) &
     VAR_3)) {
  FUNC_4(VAR_7, "device is not present handle(0x%04x), flags!!!\n",
   VAR_9);
  goto out_unlock;
 }


 if (FUNC_1(VAR_7, VAR_18, VAR_9,
     VAR_13))
  goto out_unlock;

 FUNC_13(&VAR_7->sas_device_lock, VAR_17);
 FUNC_3(VAR_7, VAR_18);

 if (VAR_14)
  FUNC_11(VAR_14);
 return;

out_unlock:
 FUNC_13(&VAR_7->sas_device_lock, VAR_17);
 if (VAR_14)
  FUNC_11(VAR_14);
}
