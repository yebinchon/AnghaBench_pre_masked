
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct _sas_node {int dummy; } ;
struct _sas_device {int dummy; } ;
struct _raid_device {int dummy; } ;
struct _pcie_device {int dummy; } ;
struct MPT3SAS_ADAPTER {int raid_device_lock; int pd_handles; int ir_firmware; int sas_node_lock; } ;
struct TYPE_30__ {int WWID; int ParentDevHandle; int DeviceInfo; int DevHandle; } ;
struct TYPE_29__ {int IOCLogInfo; int IOCStatus; } ;
struct TYPE_28__ {int VolDevHandle; int ReasonCode; } ;
struct TYPE_27__ {int SASAddress; int DevHandle; } ;
struct TYPE_26__ {int PhysDiskNum; int DevHandle; } ;
struct TYPE_25__ {scalar_t__ VolumeState; } ;
struct TYPE_24__ {int DevHandle; int WWID; } ;
struct TYPE_23__ {int SASAddress; int PhyNum; int ParentDevHandle; int DeviceInfo; int DevHandle; } ;
typedef TYPE_1__ Mpi2SasDevicePage0_t ;
typedef TYPE_2__ Mpi2RaidVolPage1_t ;
typedef TYPE_3__ Mpi2RaidVolPage0_t ;
typedef TYPE_4__ Mpi2RaidPhysDiskPage0_t ;
typedef TYPE_5__ Mpi2ExpanderPage0_t ;
typedef TYPE_6__ Mpi2EventIrConfigElement_t ;
typedef TYPE_7__ Mpi2ConfigReply_t ;
typedef TYPE_8__ Mpi26PCIeDevicePage0_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct MPT3SAS_ADAPTER*,int,int ,int) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,int) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct MPT3SAS_ADAPTER*,int) ;
 struct _raid_device* FUNC_6 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 int FUNC_7 (struct MPT3SAS_ADAPTER*,struct _sas_node*,int) ;
 int FUNC_8 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_9 (struct MPT3SAS_ADAPTER*,TYPE_6__*) ;
 int FUNC_10 (struct MPT3SAS_ADAPTER*,char*,...) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (TYPE_6__*,int ,int) ;
 int FUNC_15 (struct MPT3SAS_ADAPTER*,TYPE_7__*,TYPE_5__*,int ,int) ;
 int FUNC_16 (struct MPT3SAS_ADAPTER*,TYPE_7__*,TYPE_8__*,int ,int) ;
 int FUNC_17 (struct MPT3SAS_ADAPTER*,TYPE_7__*,TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_18 (struct MPT3SAS_ADAPTER*,TYPE_7__*,TYPE_3__*,int ,int,int) ;
 int FUNC_19 (struct MPT3SAS_ADAPTER*,TYPE_7__*,TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_20 (struct MPT3SAS_ADAPTER*,TYPE_7__*,TYPE_1__*,int ,int) ;
 struct _pcie_device* FUNC_21 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 struct _sas_device* FUNC_22 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 struct _sas_device* FUNC_23 (struct MPT3SAS_ADAPTER*,int) ;
 struct _sas_node* FUNC_24 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 int FUNC_25 (struct MPT3SAS_ADAPTER*,int ,int,int ,int ) ;
 int FUNC_26 (struct _pcie_device*) ;
 int FUNC_27 (struct _sas_device*) ;
 int FUNC_28 (int,int ) ;
 int FUNC_29 (int *,unsigned long) ;
 int FUNC_30 (int *,unsigned long) ;
 int FUNC_31 (int) ;

__attribute__((used)) static void
FUNC_32(struct MPT3SAS_ADAPTER *VAR_14)
{
 Mpi2ExpanderPage0_t VAR_15;
 Mpi2SasDevicePage0_t VAR_16;
 Mpi26PCIeDevicePage0_t VAR_17;
 Mpi2RaidVolPage1_t VAR_18;
 Mpi2RaidVolPage0_t VAR_19;
 Mpi2RaidPhysDiskPage0_t VAR_20;
 Mpi2EventIrConfigElement_t VAR_21;
 Mpi2ConfigReply_t VAR_22;
 u8 VAR_23;
 u16 VAR_24;
 u16 VAR_25, VAR_26;
 u64 VAR_27;
 struct _sas_device *VAR_28;
 struct _pcie_device *VAR_29;
 struct _sas_node *VAR_30;
 static struct _raid_device *VAR_31;
 u8 VAR_32;
 unsigned long VAR_33;

 FUNC_10(VAR_14, "scan devices: start\n");

 FUNC_8(VAR_14);

 FUNC_10(VAR_14, "\tscan devices: expanders start\n");


 VAR_25 = 0xFFFF;
 while (!(FUNC_15(VAR_14, &VAR_22, &VAR_15,
     VAR_12, VAR_25))) {
  VAR_24 = FUNC_11(VAR_22.IOCStatus) &
      VAR_2;
  if (VAR_24 != VAR_3) {
   FUNC_10(VAR_14, "\tbreak from expander scan: ioc_status(0x%04x), loginfo(0x%08x)\n",
     VAR_24, FUNC_12(VAR_22.IOCLogInfo));
   break;
  }
  VAR_25 = FUNC_11(VAR_15);
  FUNC_29(&VAR_14->sas_node_lock, VAR_33);
  VAR_30 = FUNC_24(
      VAR_14, FUNC_13(VAR_15));
  FUNC_30(&VAR_14->sas_node_lock, VAR_33);
  if (VAR_30)
   FUNC_7(VAR_14, VAR_30,
       VAR_25);
  else {
   FUNC_10(VAR_14, "\tBEFORE adding expander: handle (0x%04x), sas_addr(0x%016llx)\n",
     VAR_25,
     (u64)FUNC_13(VAR_15));
   FUNC_1(VAR_14, VAR_25);
   FUNC_10(VAR_14, "\tAFTER adding expander: handle (0x%04x), sas_addr(0x%016llx)\n",
     VAR_25,
     (u64)FUNC_13(VAR_15));
  }
 }

 FUNC_10(VAR_14, "\tscan devices: expanders complete\n");

 if (!VAR_14->ir_firmware)
  goto skip_to_sas;

 FUNC_10(VAR_14, "\tscan devices: phys disk start\n");


 VAR_23 = 0xFF;
 while (!(FUNC_17(VAR_14, &VAR_22,
     &VAR_20, VAR_4,
     VAR_23))) {
  VAR_24 = FUNC_11(VAR_22.IOCStatus) &
      VAR_2;
  if (VAR_24 != VAR_3) {
   FUNC_10(VAR_14, "\tbreak from phys disk scan: ioc_status(0x%04x), loginfo(0x%08x)\n",
     VAR_24, FUNC_12(VAR_22.IOCLogInfo));
   break;
  }
  VAR_23 = VAR_20;
  VAR_25 = FUNC_11(VAR_20);
  VAR_28 = FUNC_23(VAR_14, VAR_25);
  if (VAR_28) {
   FUNC_27(VAR_28);
   continue;
  }
  if (FUNC_20(VAR_14, &VAR_22,
      &VAR_16, VAR_11,
      VAR_25) != 0)
   continue;
  VAR_24 = FUNC_11(VAR_22.IOCStatus) &
      VAR_2;
  if (VAR_24 != VAR_3) {
   FUNC_10(VAR_14, "\tbreak from phys disk scan ioc_status(0x%04x), loginfo(0x%08x)\n",
     VAR_24, FUNC_12(VAR_22.IOCLogInfo));
   break;
  }
  VAR_26 = FUNC_11(VAR_16);
  if (!FUNC_2(VAR_14, VAR_26,
      &VAR_27)) {
   FUNC_10(VAR_14, "\tBEFORE adding phys disk: handle (0x%04x), sas_addr(0x%016llx)\n",
     VAR_25,
     (u64)FUNC_13(VAR_16));
   FUNC_25(VAR_14, VAR_27,
       VAR_25, VAR_16,
       VAR_13);
   FUNC_28(VAR_25, VAR_14->pd_handles);
   VAR_32 = 0;




   while (FUNC_0(VAR_14, VAR_25, VAR_32++,
       1)) {
    FUNC_31(1);
   }
   FUNC_10(VAR_14, "\tAFTER adding phys disk: handle (0x%04x), sas_addr(0x%016llx)\n",
     VAR_25,
     (u64)FUNC_13(VAR_16));
  }
 }

 FUNC_10(VAR_14, "\tscan devices: phys disk complete\n");

 FUNC_10(VAR_14, "\tscan devices: volumes start\n");


 VAR_25 = 0xFFFF;
 while (!(FUNC_19(VAR_14, &VAR_22,
     &VAR_18, VAR_5, VAR_25))) {
  VAR_24 = FUNC_11(VAR_22.IOCStatus) &
      VAR_2;
  if (VAR_24 != VAR_3) {
   FUNC_10(VAR_14, "\tbreak from volume scan: ioc_status(0x%04x), loginfo(0x%08x)\n",
     VAR_24, FUNC_12(VAR_22.IOCLogInfo));
   break;
  }
  VAR_25 = FUNC_11(VAR_18);
  FUNC_29(&VAR_14->raid_device_lock, VAR_33);
  VAR_31 = FUNC_6(VAR_14,
      FUNC_13(VAR_18));
  FUNC_30(&VAR_14->raid_device_lock, VAR_33);
  if (VAR_31)
   continue;
  if (FUNC_18(VAR_14, &VAR_22,
      &VAR_19, VAR_6, VAR_25,
       sizeof(Mpi2RaidVolPage0_t)))
   continue;
  VAR_24 = FUNC_11(VAR_22.IOCStatus) &
      VAR_2;
  if (VAR_24 != VAR_3) {
   FUNC_10(VAR_14, "\tbreak from volume scan: ioc_status(0x%04x), loginfo(0x%08x)\n",
     VAR_24, FUNC_12(VAR_22.IOCLogInfo));
   break;
  }
  if (VAR_19 == VAR_9 ||
      VAR_19 == VAR_8 ||
      VAR_19 == VAR_7) {
   FUNC_14(&VAR_21, 0, sizeof(Mpi2EventIrConfigElement_t));
   VAR_21.ReasonCode = VAR_1;
   VAR_21.VolDevHandle = VAR_18;
   FUNC_10(VAR_14, "\tBEFORE adding volume: handle (0x%04x)\n",
     VAR_18);
   FUNC_9(VAR_14, &VAR_21);
   FUNC_10(VAR_14, "\tAFTER adding volume: handle (0x%04x)\n",
     VAR_18);
  }
 }

 FUNC_10(VAR_14, "\tscan devices: volumes complete\n");

 skip_to_sas:

 FUNC_10(VAR_14, "\tscan devices: end devices start\n");


 VAR_25 = 0xFFFF;
 while (!(FUNC_20(VAR_14, &VAR_22,
     &VAR_16, VAR_10,
     VAR_25))) {
  VAR_24 = FUNC_11(VAR_22.IOCStatus) &
      VAR_2;
  if (VAR_24 != VAR_3) {
   FUNC_10(VAR_14, "\tbreak from end device scan: ioc_status(0x%04x), loginfo(0x%08x)\n",
     VAR_24, FUNC_12(VAR_22.IOCLogInfo));
   break;
  }
  VAR_25 = FUNC_11(VAR_16);
  if (!(FUNC_3(
      FUNC_12(VAR_16))))
   continue;
  VAR_28 = FUNC_22(VAR_14,
      FUNC_13(VAR_16));
  if (VAR_28) {
   FUNC_27(VAR_28);
   continue;
  }
  VAR_26 = FUNC_11(VAR_16);
  if (!FUNC_2(VAR_14, VAR_26, &VAR_27)) {
   FUNC_10(VAR_14, "\tBEFORE adding end device: handle (0x%04x), sas_addr(0x%016llx)\n",
     VAR_25,
     (u64)FUNC_13(VAR_16));
   FUNC_25(VAR_14, VAR_27, VAR_25,
       VAR_16, VAR_13);
   VAR_32 = 0;




   while (FUNC_0(VAR_14, VAR_25, VAR_32++,
       0)) {
    FUNC_31(1);
   }
   FUNC_10(VAR_14, "\tAFTER adding end device: handle (0x%04x), sas_addr(0x%016llx)\n",
     VAR_25,
     (u64)FUNC_13(VAR_16));
  }
 }
 FUNC_10(VAR_14, "\tscan devices: end devices complete\n");
 FUNC_10(VAR_14, "\tscan devices: pcie end devices start\n");


 VAR_25 = 0xFFFF;
 while (!(FUNC_16(VAR_14, &VAR_22,
  &VAR_17, VAR_0,
  VAR_25))) {
  VAR_24 = FUNC_11(VAR_22.IOCStatus)
    & VAR_2;
  if (VAR_24 != VAR_3) {
   FUNC_10(VAR_14, "\tbreak from pcie end device scan: ioc_status(0x%04x), loginfo(0x%08x)\n",
     VAR_24, FUNC_12(VAR_22.IOCLogInfo));
   break;
  }
  VAR_25 = FUNC_11(VAR_17);
  if (!(FUNC_4(
   FUNC_12(VAR_17))))
   continue;
  VAR_29 = FUNC_21(VAR_14,
    FUNC_13(VAR_17));
  if (VAR_29) {
   FUNC_26(VAR_29);
   continue;
  }
  VAR_32 = 0;
  VAR_26 = FUNC_11(VAR_17);
  FUNC_5(VAR_14, VAR_25);

  FUNC_10(VAR_14, "\tAFTER adding pcie end device: handle (0x%04x), wwid(0x%016llx)\n",
    VAR_25, (u64)FUNC_13(VAR_17));
 }
 FUNC_10(VAR_14, "\tpcie devices: pcie end devices complete\n");
 FUNC_10(VAR_14, "scan devices: complete\n");
}
