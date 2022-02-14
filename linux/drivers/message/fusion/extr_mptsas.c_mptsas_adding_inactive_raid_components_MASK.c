
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int u8 ;
struct mptsas_phyinfo {int dummy; } ;
struct mptsas_devinfo {int flags; int sas_address; } ;
typedef TYPE_4__* pRaidVolumePage0_t ;
typedef int dma_addr_t ;
struct TYPE_20__ {TYPE_7__* hdr; } ;
struct TYPE_26__ {int pageAddr; int PageLength; int action; int physAddr; int timeout; TYPE_1__ cfghdr; int PageType; } ;
struct TYPE_25__ {int pcidev; } ;
struct TYPE_24__ {int PhysDiskBus; scalar_t__ PhysDiskID; } ;
struct TYPE_21__ {int Flags; } ;
struct TYPE_23__ {int NumPhysDisks; TYPE_3__* PhysDisk; TYPE_2__ VolumeStatus; } ;
struct TYPE_22__ {int PhysDiskNum; } ;
typedef TYPE_5__ RaidPhysDiskPage0_t ;
typedef TYPE_6__ MPT_ADAPTER ;
typedef TYPE_7__ ConfigPageHeader_t ;
typedef TYPE_7__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_7__*,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_6__*,int ,TYPE_5__*) ;
 int FUNC_3 (TYPE_6__*,struct mptsas_phyinfo*) ;
 struct mptsas_phyinfo* FUNC_4 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_6__*,struct mptsas_devinfo*,int,scalar_t__) ;
 TYPE_4__* FUNC_6 (int ,int,int *) ;
 int FUNC_7 (int ,int,TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_8(MPT_ADAPTER *VAR_9, u8 VAR_10, u8 VAR_11)
{
 CONFIGPARMS VAR_12;
 ConfigPageHeader_t VAR_13;
 dma_addr_t VAR_14;
 pRaidVolumePage0_t VAR_15 = ((void*)0);
 RaidPhysDiskPage0_t VAR_16;
 int VAR_17;
 struct mptsas_phyinfo *VAR_18;
 struct mptsas_devinfo VAR_19;

 FUNC_0(&VAR_12, 0 , sizeof(CONFIGPARMS));
 FUNC_0(&VAR_13, 0 , sizeof(ConfigPageHeader_t));
 VAR_13.PageType = VAR_2;
 VAR_12.pageAddr = (VAR_10 << 8) + VAR_11;
 VAR_12.cfghdr.hdr = &VAR_13;
 VAR_12.action = VAR_0;
 VAR_12.timeout = VAR_8;

 if (FUNC_1(VAR_9, &VAR_12) != 0)
  goto out;

 if (!VAR_13.PageLength)
  goto out;

 VAR_15 = FUNC_6(VAR_9->pcidev, VAR_13.PageLength * 4,
     &VAR_14);

 if (!VAR_15)
  goto out;

 VAR_12.physAddr = VAR_14;
 VAR_12.action = VAR_1;

 if (FUNC_1(VAR_9, &VAR_12) != 0)
  goto out;

 if (!(VAR_15->VolumeStatus.Flags &
     VAR_3))
  goto out;

 if (!VAR_15->NumPhysDisks)
  goto out;

 for (VAR_17 = 0; VAR_17 < VAR_15->NumPhysDisks; VAR_17++) {

  if (FUNC_2(VAR_9,
      VAR_15->PhysDisk[VAR_17].PhysDiskNum, &VAR_16) != 0)
   continue;

  if (FUNC_5(VAR_9, &VAR_19,
      (VAR_6 <<
       VAR_7),
   (VAR_16.PhysDiskBus << 8) +
   VAR_16.PhysDiskID))
   continue;



  if (!(VAR_19.flags & VAR_5)
   || !(VAR_19.flags &
   VAR_4))
   continue;


  VAR_18 = FUNC_4(VAR_9,
      VAR_19.sas_address);
  FUNC_3(VAR_9, VAR_18);
 }

 out:
 if (VAR_15)
  FUNC_7(VAR_9->pcidev, VAR_13.PageLength * 4, VAR_15,
      VAR_14);
}
