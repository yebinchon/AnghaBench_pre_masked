
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct fw_event_work {scalar_t__ ignore; scalar_t__ event_data; } ;
struct _pcie_device {int dummy; } ;
struct MPT3SAS_ADAPTER {int logging_level; scalar_t__ shost_recovery; int pend_os_device_add; int pcie_device_lock; scalar_t__ pci_error_recovery; scalar_t__ remove_host; } ;
struct TYPE_5__ {int NumEntries; TYPE_1__* PortEntry; } ;
struct TYPE_4__ {int PortStatus; int CurrentPortInfo; int PreviousPortInfo; int AttachedDevHandle; } ;
typedef TYPE_2__ Mpi26EventDataPCIeTopologyChangeList_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int VAR_3 ;
 struct _pcie_device* FUNC_0 (struct MPT3SAS_ADAPTER*,int) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,int) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,int) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*,int) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,TYPE_2__*) ;
 int FUNC_5 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_6 (struct MPT3SAS_ADAPTER*,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct _pcie_device*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int,int ) ;

__attribute__((used)) static void
FUNC_12(struct MPT3SAS_ADAPTER *VAR_4,
 struct fw_event_work *VAR_5)
{
 int VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 u8 VAR_9, VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 Mpi26EventDataPCIeTopologyChangeList_t *VAR_13 =
  (Mpi26EventDataPCIeTopologyChangeList_t *) VAR_5->event_data;
 struct _pcie_device *VAR_14;

 if (VAR_4->logging_level & VAR_3)
  FUNC_4(VAR_4, VAR_13);

 if (VAR_4->shost_recovery || VAR_4->remove_host ||
  VAR_4->pci_error_recovery)
  return;

 if (VAR_5->ignore) {
  FUNC_5(VAR_4, FUNC_6(VAR_4, "ignoring switch event\n"));
  return;
 }


 for (VAR_6 = 0; VAR_6 < VAR_13->NumEntries; VAR_6++) {
  if (VAR_5->ignore) {
   FUNC_5(VAR_4,
       FUNC_6(VAR_4, "ignoring switch event\n"));
   return;
  }
  if (VAR_4->remove_host || VAR_4->pci_error_recovery)
   return;
  VAR_8 = VAR_13->PortEntry[VAR_6].PortStatus;
  VAR_7 =
   FUNC_7(VAR_13->PortEntry[VAR_6].AttachedDevHandle);
  if (!VAR_7)
   continue;

  VAR_9 = VAR_13->PortEntry[VAR_6].CurrentPortInfo
   & VAR_1;
  VAR_10 = VAR_13->PortEntry[VAR_6].PreviousPortInfo
   & VAR_1;

  switch (VAR_8) {
  case 128:
   if (VAR_4->shost_recovery)
    break;
   if (VAR_9 == VAR_10)
    break;
   if (VAR_9 < VAR_0)
    break;

   FUNC_2(VAR_4, VAR_7);







   FUNC_9(&VAR_4->pcie_device_lock, VAR_11);
   VAR_14 = FUNC_0(VAR_4, VAR_7);
   FUNC_10(&VAR_4->pcie_device_lock, VAR_11);

   if (VAR_14) {
    FUNC_8(VAR_14);
    break;
   }

   if (!FUNC_11(VAR_7, VAR_4->pend_os_device_add))
    break;

   FUNC_5(VAR_4,
       FUNC_6(VAR_4, "handle(0x%04x) device not found: convert event to a device add\n",
         VAR_7));
   VAR_13->PortEntry[VAR_6].PortStatus &= 0xF0;
   VAR_13->PortEntry[VAR_6].PortStatus |=
    130;

  case 130:
   if (VAR_4->shost_recovery)
    break;
   if (VAR_9 < VAR_0)
    break;

   VAR_12 = FUNC_1(VAR_4, VAR_7);
   if (!VAR_12) {





    VAR_13->PortEntry[VAR_6].PortStatus |=
     VAR_2;
   }
   break;
  case 129:
   FUNC_3(VAR_4, VAR_7);
   break;
  }
 }
}
