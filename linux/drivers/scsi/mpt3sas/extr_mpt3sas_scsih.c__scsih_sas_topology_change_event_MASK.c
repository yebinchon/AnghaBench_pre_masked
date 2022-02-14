
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ u16 ;
struct fw_event_work {scalar_t__ ignore; scalar_t__ event_data; } ;
struct _sas_node {scalar_t__ num_phys; int sas_address; } ;
struct TYPE_5__ {scalar_t__ num_phys; int sas_address; } ;
struct MPT3SAS_ADAPTER {int logging_level; scalar_t__ shost_recovery; int pend_os_device_add; scalar_t__ pci_error_recovery; scalar_t__ remove_host; int sas_node_lock; TYPE_1__ sas_hba; } ;
struct TYPE_7__ {scalar_t__ ExpStatus; int NumEntries; scalar_t__ StartPhyNum; TYPE_2__* PHY; int ExpanderDevHandle; } ;
struct TYPE_6__ {scalar_t__ PhyStatus; int LinkRate; int AttachedDevHandle; } ;
typedef TYPE_3__ Mpi2EventDataSasTopologyChangeList_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;



 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_5 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_6 (struct MPT3SAS_ADAPTER*,TYPE_3__*) ;
 int FUNC_7 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_8 (struct MPT3SAS_ADAPTER*,char*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct MPT3SAS_ADAPTER*,int ) ;
 struct _sas_node* FUNC_11 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 int FUNC_12 (struct MPT3SAS_ADAPTER*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_16(struct MPT3SAS_ADAPTER *VAR_6,
 struct fw_event_work *VAR_7)
{
 int VAR_8;
 u16 VAR_9, VAR_10;
 u16 VAR_11;
 u8 VAR_12, VAR_13;
 struct _sas_node *VAR_14;
 u64 VAR_15;
 unsigned long VAR_16;
 u8 VAR_17, VAR_18;
 Mpi2EventDataSasTopologyChangeList_t *VAR_19 =
  (Mpi2EventDataSasTopologyChangeList_t *)
  VAR_7->event_data;

 if (VAR_6->logging_level & VAR_5)
  FUNC_6(VAR_6, VAR_19);

 if (VAR_6->shost_recovery || VAR_6->remove_host || VAR_6->pci_error_recovery)
  return 0;

 if (!VAR_6->sas_hba.num_phys)
  FUNC_4(VAR_6);
 else
  FUNC_5(VAR_6);

 if (VAR_7->ignore) {
  FUNC_7(VAR_6, FUNC_8(VAR_6, "ignoring expander event\n"));
  return 0;
 }

 VAR_9 = FUNC_9(VAR_19->ExpanderDevHandle);


 if (VAR_19->ExpStatus == VAR_0)
  if (FUNC_3(VAR_6, VAR_9) != 0)
   return 0;

 FUNC_13(&VAR_6->sas_node_lock, VAR_16);
 VAR_14 = FUNC_11(VAR_6,
     VAR_9);
 if (VAR_14) {
  VAR_15 = VAR_14->sas_address;
  VAR_13 = VAR_14->num_phys;
 } else if (VAR_9 < VAR_6->sas_hba.num_phys) {
  VAR_15 = VAR_6->sas_hba.sas_address;
  VAR_13 = VAR_6->sas_hba.num_phys;
 } else {
  FUNC_14(&VAR_6->sas_node_lock, VAR_16);
  return 0;
 }
 FUNC_14(&VAR_6->sas_node_lock, VAR_16);


 for (VAR_8 = 0; VAR_8 < VAR_19->NumEntries; VAR_8++) {
  if (VAR_7->ignore) {
   FUNC_7(VAR_6,
       FUNC_8(VAR_6, "ignoring expander event\n"));
   return 0;
  }
  if (VAR_6->remove_host || VAR_6->pci_error_recovery)
   return 0;
  VAR_12 = VAR_19->StartPhyNum + VAR_8;
  if (VAR_12 >= VAR_13)
   continue;
  VAR_11 = VAR_19->PHY[VAR_8].PhyStatus &
      VAR_3;
  if ((VAR_19->PHY[VAR_8].PhyStatus &
      VAR_2) && (VAR_11 !=
      128))
    continue;
  VAR_10 = FUNC_9(VAR_19->PHY[VAR_8].AttachedDevHandle);
  if (!VAR_10)
   continue;
  VAR_17 = VAR_19->PHY[VAR_8].LinkRate >> 4;
  VAR_18 = VAR_19->PHY[VAR_8].LinkRate & 0xF;
  switch (VAR_11) {
  case 130:

   if (VAR_6->shost_recovery)
    break;

   if (VAR_17 == VAR_18)
    break;

   FUNC_12(VAR_6, VAR_15,
       VAR_10, VAR_12, VAR_17);

   if (VAR_17 < VAR_4)
    break;

   FUNC_1(VAR_6, VAR_15, VAR_10,
       VAR_12, VAR_17);

   if (!FUNC_15(VAR_10, VAR_6->pend_os_device_add))
    break;



  case 129:

   if (VAR_6->shost_recovery)
    break;

   FUNC_12(VAR_6, VAR_15,
       VAR_10, VAR_12, VAR_17);

   FUNC_0(VAR_6, VAR_10, VAR_12, 0);

   break;
  case 128:

   FUNC_2(VAR_6, VAR_10);
   break;
  }
 }


 if (VAR_19->ExpStatus == VAR_1 &&
     VAR_14)
  FUNC_10(VAR_6, VAR_15);

 return 0;
}
