
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_17__ {void* handle; } ;
struct TYPE_16__ {void* handle; } ;
struct mptsas_phyinfo {TYPE_3__ attached; TYPE_2__ identify; int programmed_link_rate; int hw_link_rate; } ;
typedef int dma_addr_t ;
struct TYPE_15__ {TYPE_6__* ehdr; } ;
struct TYPE_21__ {int physAddr; int action; scalar_t__ pageAddr; int timeout; scalar_t__ dir; TYPE_1__ cfghdr; } ;
struct TYPE_20__ {int ExtPageLength; int ExtPageType; int PageType; scalar_t__ Reserved2; scalar_t__ Reserved1; scalar_t__ PageNumber; int PageVersion; } ;
struct TYPE_19__ {int pcidev; } ;
struct TYPE_18__ {int AttachedDevHandle; int OwnerDevHandle; int ProgrammedLinkRate; int HwLinkRate; } ;
typedef TYPE_4__ SasPhyPage0_t ;
typedef TYPE_5__ MPT_ADAPTER ;
typedef TYPE_6__ ConfigExtendedPageHeader_t ;
typedef TYPE_7__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,int,TYPE_4__*,int) ;

__attribute__((used)) static int
FUNC_5(MPT_ADAPTER *VAR_8, struct mptsas_phyinfo *VAR_9,
  u32 VAR_10, u32 VAR_11)
{
 ConfigExtendedPageHeader_t VAR_12;
 CONFIGPARMS VAR_13;
 SasPhyPage0_t *VAR_14;
 dma_addr_t VAR_15;
 int VAR_16;

 VAR_12.PageVersion = VAR_6;
 VAR_12.ExtPageLength = 0;
 VAR_12.PageNumber = 0;
 VAR_12.Reserved1 = 0;
 VAR_12.Reserved2 = 0;
 VAR_12.PageType = VAR_5;
 VAR_12.ExtPageType = VAR_4;

 VAR_13.cfghdr.ehdr = &VAR_12;
 VAR_13.dir = 0;
 VAR_13.timeout = VAR_7;


 VAR_13.physAddr = -1;
 VAR_13.pageAddr = VAR_10 + VAR_11;
 VAR_13.action = VAR_2;

 VAR_16 = FUNC_1(VAR_8, &VAR_13);
 if (VAR_16)
  goto out;

 if (!VAR_12.ExtPageLength) {
  VAR_16 = -VAR_1;
  goto out;
 }

 VAR_14 = FUNC_3(VAR_8->pcidev, VAR_12.ExtPageLength * 4,
          &VAR_15);
 if (!VAR_14) {
  VAR_16 = -VAR_0;
  goto out;
 }

 VAR_13.physAddr = VAR_15;
 VAR_13.action = VAR_3;

 VAR_16 = FUNC_1(VAR_8, &VAR_13);
 if (VAR_16)
  goto out_free_consistent;

 FUNC_2(VAR_8, VAR_14);

 VAR_9->hw_link_rate = VAR_14->HwLinkRate;
 VAR_9->programmed_link_rate = VAR_14->ProgrammedLinkRate;
 VAR_9->identify.handle = FUNC_0(VAR_14->OwnerDevHandle);
 VAR_9->attached.handle = FUNC_0(VAR_14->AttachedDevHandle);

 out_free_consistent:
 FUNC_4(VAR_8->pcidev, VAR_12.ExtPageLength * 4,
       VAR_14, VAR_15);
 out:
 return VAR_16;
}
