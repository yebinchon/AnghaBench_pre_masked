
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mptsas_devinfo {void* flags; int device_info; int sas_address; int channel; int phys_disk_num; int id; int port_id; int phy_id; void* slot; void* handle_enclosure; void* handle_parent; void* handle; } ;
typedef int dma_addr_t ;
typedef int __le64 ;
struct TYPE_13__ {TYPE_4__* ehdr; } ;
struct TYPE_17__ {int physAddr; int action; int timeout; scalar_t__ dir; scalar_t__ pageAddr; TYPE_1__ cfghdr; } ;
struct TYPE_16__ {int ExtPageLength; int ExtPageType; int PageType; scalar_t__ Reserved2; scalar_t__ Reserved1; scalar_t__ PageNumber; int PageVersion; } ;
struct TYPE_15__ {int pcidev; } ;
struct TYPE_14__ {int Flags; int DeviceInfo; int SASAddress; int Bus; int TargetID; int PhysicalPort; int PhyNum; int Slot; int EnclosureHandle; int ParentDevHandle; int DevHandle; } ;
typedef TYPE_2__ SasDevicePage0_t ;
typedef TYPE_3__ MPT_ADAPTER ;
typedef TYPE_4__ ConfigExtendedPageHeader_t ;
typedef TYPE_5__ CONFIGPARMS ;


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
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct mptsas_devinfo*,int ,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int ,int,int*) ;
 int FUNC_8 (int ,int,TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_9(MPT_ADAPTER *VAR_10, struct mptsas_devinfo *VAR_11,
  u32 VAR_12, u32 VAR_13)
{
 ConfigExtendedPageHeader_t VAR_14;
 CONFIGPARMS VAR_15;
 SasDevicePage0_t *VAR_16;
 dma_addr_t VAR_17;
 __le64 VAR_18;
 int VAR_19=0;

 VAR_14.PageVersion = VAR_8;
 VAR_14.ExtPageLength = 0;
 VAR_14.PageNumber = 0;
 VAR_14.Reserved1 = 0;
 VAR_14.Reserved2 = 0;
 VAR_14.PageType = VAR_6;
 VAR_14.ExtPageType = VAR_5;

 VAR_15.cfghdr.ehdr = &VAR_14;
 VAR_15.pageAddr = VAR_12 + VAR_13;
 VAR_15.physAddr = -1;
 VAR_15.action = VAR_3;
 VAR_15.dir = 0;
 VAR_15.timeout = VAR_9;

 FUNC_4(VAR_11, 0, sizeof(struct mptsas_devinfo));
 VAR_19 = FUNC_5(VAR_10, &VAR_15);
 if (VAR_19)
  goto out;
 if (!VAR_14.ExtPageLength) {
  VAR_19 = -VAR_2;
  goto out;
 }

 VAR_16 = FUNC_7(VAR_10->pcidev, VAR_14.ExtPageLength * 4,
          &VAR_17);
 if (!VAR_16) {
  VAR_19 = -VAR_1;
  goto out;
 }

 VAR_15.physAddr = VAR_17;
 VAR_15.action = VAR_4;

 VAR_19 = FUNC_5(VAR_10, &VAR_15);

 if (VAR_19 == VAR_7) {
  VAR_19 = -VAR_0;
  goto out_free_consistent;
 }

 if (VAR_19)
  goto out_free_consistent;

 FUNC_6(VAR_10, VAR_16);

 FUNC_4(VAR_11, 0, sizeof(struct mptsas_devinfo));
 VAR_11->handle = FUNC_0(VAR_16->DevHandle);
 VAR_11->handle_parent = FUNC_0(VAR_16->ParentDevHandle);
 VAR_11->handle_enclosure =
     FUNC_0(VAR_16->EnclosureHandle);
 VAR_11->slot = FUNC_0(VAR_16->Slot);
 VAR_11->phy_id = VAR_16->PhyNum;
 VAR_11->port_id = VAR_16->PhysicalPort;
 VAR_11->id = VAR_16->TargetID;
 VAR_11->phys_disk_num = ~0;
 VAR_11->channel = VAR_16->Bus;
 FUNC_3(&VAR_18, &VAR_16->SASAddress, sizeof(__le64));
 VAR_11->sas_address = FUNC_2(VAR_18);
 VAR_11->device_info =
     FUNC_1(VAR_16->DeviceInfo);
 VAR_11->flags = FUNC_0(VAR_16->Flags);

 out_free_consistent:
 FUNC_8(VAR_10->pcidev, VAR_14.ExtPageLength * 4,
       VAR_16, VAR_17);
 out:
 return VAR_19;
}
