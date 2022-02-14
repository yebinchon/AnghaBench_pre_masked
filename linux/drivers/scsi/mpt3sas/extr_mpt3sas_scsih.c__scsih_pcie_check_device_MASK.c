
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef void* u16 ;
struct scsi_target {struct MPT3SAS_TARGET* hostdata; } ;
struct _pcie_device {void* handle; char* connector_name; scalar_t__ enclosure_level; int access_status; struct scsi_target* starget; } ;
struct MPT3SAS_TARGET {void* handle; } ;
struct MPT3SAS_ADAPTER {int pcie_device_lock; } ;
struct TYPE_6__ {int AccessStatus; int Flags; int * ConnectorName; scalar_t__ EnclosureLevel; int WWID; int DeviceInfo; } ;
struct TYPE_5__ {int IOCStatus; } ;
typedef TYPE_1__ Mpi2ConfigReply_t ;
typedef TYPE_2__ Mpi26PCIeDevicePage0_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct _pcie_device* FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 scalar_t__ FUNC_1 (struct MPT3SAS_ADAPTER*,int ,void*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,char*,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int *,int) ;
 scalar_t__ FUNC_9 (struct MPT3SAS_ADAPTER*,TYPE_1__*,TYPE_2__*,int ,void*) ;
 int FUNC_10 (struct _pcie_device*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ,struct scsi_target*,char*,void*,void*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15(struct MPT3SAS_ADAPTER *VAR_6, u16 VAR_7)
{
 Mpi2ConfigReply_t VAR_8;
 Mpi26PCIeDevicePage0_t VAR_9;
 u32 VAR_10;
 struct _pcie_device *VAR_11;
 u64 VAR_12;
 unsigned long VAR_13;
 struct scsi_target *VAR_14;
 struct MPT3SAS_TARGET *VAR_15;
 u32 VAR_16;

 if ((FUNC_9(VAR_6, &VAR_8,
  &VAR_9, VAR_3, VAR_7)))
  return;

 VAR_10 = FUNC_5(VAR_8.IOCStatus) & VAR_4;
 if (VAR_10 != VAR_5)
  return;


 VAR_16 = FUNC_6(VAR_9);
 if (!(FUNC_2(VAR_16)))
  return;

 VAR_12 = FUNC_7(VAR_9);
 FUNC_11(&VAR_6->pcie_device_lock, VAR_13);
 VAR_11 = FUNC_0(VAR_6, VAR_12);

 if (!VAR_11) {
  FUNC_12(&VAR_6->pcie_device_lock, VAR_13);
  return;
 }

 if (FUNC_14(VAR_11->handle != VAR_7)) {
  VAR_14 = VAR_11->starget;
  VAR_15 = VAR_14->hostdata;
  VAR_11->access_status = VAR_9;
  FUNC_13(VAR_0, VAR_14,
      "handle changed from(0x%04x) to (0x%04x)!!!\n",
      VAR_11->handle, VAR_7);
  VAR_15->handle = VAR_7;
  VAR_11->handle = VAR_7;

  if (FUNC_6(VAR_9) &
      VAR_2) {
   VAR_11->enclosure_level =
       VAR_9;
   FUNC_8(&VAR_11->connector_name[0],
       &VAR_9[0], 4);
  } else {
   VAR_11->enclosure_level = 0;
   VAR_11->connector_name[0] = '\0';
  }
 }


 if (!(FUNC_6(VAR_9) &
     VAR_1)) {
  FUNC_4(VAR_6, "device is not present handle(0x%04x), flags!!!\n",
    VAR_7);
  FUNC_12(&VAR_6->pcie_device_lock, VAR_13);
  FUNC_10(VAR_11);
  return;
 }


 if (FUNC_1(VAR_6, VAR_12, VAR_7,
     VAR_9)) {
  FUNC_12(&VAR_6->pcie_device_lock, VAR_13);
  FUNC_10(VAR_11);
  return;
 }

 FUNC_12(&VAR_6->pcie_device_lock, VAR_13);
 FUNC_10(VAR_11);

 FUNC_3(VAR_6, VAR_12);

 return;
}
