
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mptsas_enclosure {int sep_channel; int sep_id; int start_channel; int start_id; void* start_slot; void* num_slot; void* flags; void* enclosure_handle; int enclosure_logical_id; } ;
typedef int hdr ;
typedef int dma_addr_t ;
typedef int __le64 ;
struct TYPE_12__ {TYPE_4__* ehdr; } ;
struct TYPE_16__ {int physAddr; int action; int timeout; scalar_t__ dir; scalar_t__ pageAddr; TYPE_1__ cfghdr; } ;
struct TYPE_15__ {int ExtPageLength; int ExtPageType; int PageType; scalar_t__ PageNumber; int PageVersion; } ;
struct TYPE_14__ {int pcidev; } ;
struct TYPE_13__ {int SEPBus; int SEPTargetID; int StartBus; int StartTargetID; int StartSlot; int NumSlots; int Flags; int EnclosureHandle; int EnclosureLogicalID; } ;
typedef TYPE_2__ SasEnclosurePage0_t ;
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
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*) ;
 TYPE_2__* FUNC_5 (int ,int,int*) ;
 int FUNC_6 (int ,int,TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_7(MPT_ADAPTER *VAR_8, struct mptsas_enclosure *VAR_9,
  u32 VAR_10, u32 VAR_11)
{
 ConfigExtendedPageHeader_t VAR_12;
 CONFIGPARMS VAR_13;
 SasEnclosurePage0_t *VAR_14;
 dma_addr_t VAR_15;
 int VAR_16;
 __le64 VAR_17;

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.PageVersion = VAR_6;
 VAR_12.PageNumber = 0;
 VAR_12.PageType = VAR_5;
 VAR_12.ExtPageType = VAR_4;

 VAR_13.cfghdr.ehdr = &VAR_12;
 VAR_13.physAddr = -1;
 VAR_13.pageAddr = VAR_10 + VAR_11;
 VAR_13.action = VAR_2;
 VAR_13.dir = 0;
 VAR_13.timeout = VAR_7;

 VAR_16 = FUNC_4(VAR_8, &VAR_13);
 if (VAR_16)
  goto out;
 if (!VAR_12.ExtPageLength) {
  VAR_16 = -VAR_1;
  goto out;
 }

 VAR_14 = FUNC_5(VAR_8->pcidev, VAR_12.ExtPageLength * 4,
   &VAR_15);
 if (!VAR_14) {
  VAR_16 = -VAR_0;
  goto out;
 }

 VAR_13.physAddr = VAR_15;
 VAR_13.action = VAR_3;

 VAR_16 = FUNC_4(VAR_8, &VAR_13);
 if (VAR_16)
  goto out_free_consistent;


 FUNC_2(&VAR_17, &VAR_14->EnclosureLogicalID, sizeof(__le64));
 VAR_9->enclosure_logical_id = FUNC_1(VAR_17);
 VAR_9->enclosure_handle = FUNC_0(VAR_14->EnclosureHandle);
 VAR_9->flags = FUNC_0(VAR_14->Flags);
 VAR_9->num_slot = FUNC_0(VAR_14->NumSlots);
 VAR_9->start_slot = FUNC_0(VAR_14->StartSlot);
 VAR_9->start_id = VAR_14->StartTargetID;
 VAR_9->start_channel = VAR_14->StartBus;
 VAR_9->sep_id = VAR_14->SEPTargetID;
 VAR_9->sep_channel = VAR_14->SEPBus;

 out_free_consistent:
 FUNC_6(VAR_8->pcidev, VAR_12.ExtPageLength * 4,
       VAR_14, VAR_15);
 out:
 return VAR_16;
}
