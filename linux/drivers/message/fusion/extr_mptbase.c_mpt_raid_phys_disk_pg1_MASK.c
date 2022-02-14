
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef void* u8 ;
typedef TYPE_4__* pRaidPhysDiskPage1_t ;
typedef int dma_addr_t ;
typedef int __le64 ;
struct TYPE_16__ {TYPE_7__* hdr; } ;
struct TYPE_22__ {int PageNumber; int physAddr; int PageLength; void* pageAddr; int action; TYPE_1__ cfghdr; int PageType; int PageVersion; } ;
struct TYPE_21__ {int pcidev; } ;
struct TYPE_20__ {int NumPhysDiskPaths; TYPE_3__* Path; void* PhysDiskNum; } ;
struct TYPE_19__ {int NumPhysDiskPaths; TYPE_2__* Path; } ;
struct TYPE_18__ {int OwnerWWID; int WWID; int Flags; int OwnerIdentifier; int PhysDiskBus; int PhysDiskID; } ;
struct TYPE_17__ {int OwnerWWID; int WWID; int Flags; int OwnerIdentifier; int PhysDiskBus; int PhysDiskID; } ;
typedef TYPE_5__ RaidPhysDiskPage1_t ;
typedef TYPE_6__ MPT_ADAPTER ;
typedef TYPE_7__ ConfigPageHeader_t ;
typedef TYPE_7__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_7__*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_6__*,TYPE_7__*) ;
 TYPE_4__* FUNC_5 (int ,int,int*) ;
 int FUNC_6 (int ,int,TYPE_4__*,int) ;

int
FUNC_7(MPT_ADAPTER *VAR_6, u8 VAR_7,
  RaidPhysDiskPage1_t *VAR_8)
{
 CONFIGPARMS VAR_9;
 ConfigPageHeader_t VAR_10;
 dma_addr_t VAR_11;
 pRaidPhysDiskPage1_t VAR_12 = ((void*)0);
 int VAR_13;
 int VAR_14;
 __le64 VAR_15;

 FUNC_3(&VAR_9, 0 , sizeof(CONFIGPARMS));
 FUNC_3(&VAR_10, 0 , sizeof(ConfigPageHeader_t));
 VAR_13 = 0;

 VAR_10.PageVersion = VAR_5;
 VAR_10.PageType = VAR_4;
 VAR_10.PageNumber = 1;
 VAR_9.cfghdr.hdr = &VAR_10;
 VAR_9.physAddr = -1;
 VAR_9.action = VAR_2;

 if (FUNC_4(VAR_6, &VAR_9) != 0) {
  VAR_13 = -VAR_0;
  goto out;
 }

 if (!VAR_10.PageLength) {
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_5(VAR_6->pcidev, VAR_10.PageLength * 4,
     &VAR_11);

 if (!VAR_12) {
  VAR_13 = -VAR_1;
  goto out;
 }

 VAR_9.physAddr = VAR_11;
 VAR_9.action = VAR_3;
 VAR_9.pageAddr = VAR_7;

 if (FUNC_4(VAR_6, &VAR_9) != 0) {
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_8->NumPhysDiskPaths = VAR_12->NumPhysDiskPaths;
 VAR_8->PhysDiskNum = VAR_7;
 for (VAR_14 = 0; VAR_14 < VAR_8->NumPhysDiskPaths; VAR_14++) {
  VAR_8->Path[VAR_14].PhysDiskID = VAR_12->Path[VAR_14].PhysDiskID;
  VAR_8->Path[VAR_14].PhysDiskBus = VAR_12->Path[VAR_14].PhysDiskBus;
  VAR_8->Path[VAR_14].OwnerIdentifier =
    VAR_12->Path[VAR_14].OwnerIdentifier;
  VAR_8->Path[VAR_14].Flags = FUNC_0(VAR_12->Path[VAR_14].Flags);
  FUNC_2(&VAR_15, &VAR_12->Path[VAR_14].WWID, sizeof(__le64));
  VAR_15 = FUNC_1(VAR_15);
  FUNC_2(&VAR_8->Path[VAR_14].WWID, &VAR_15, sizeof(__le64));
  FUNC_2(&VAR_15,
    &VAR_12->Path[VAR_14].OwnerWWID, sizeof(__le64));
  VAR_15 = FUNC_1(VAR_15);
  FUNC_2(&VAR_8->Path[VAR_14].OwnerWWID,
    &VAR_15, sizeof(__le64));
 }

 out:

 if (VAR_12)
  FUNC_6(VAR_6->pcidev, VAR_10.PageLength * 4, VAR_12,
      VAR_11);

 return VAR_13;
}
