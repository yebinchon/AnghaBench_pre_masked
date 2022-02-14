
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int u8 ;
typedef int dma_addr_t ;
struct TYPE_18__ {TYPE_6__* hdr; } ;
struct TYPE_24__ {int physAddr; int action; scalar_t__ timeout; scalar_t__ dir; scalar_t__ pageAddr; TYPE_1__ cfghdr; } ;
struct TYPE_23__ {int PageLength; int PageNumber; int PageType; scalar_t__ PageVersion; } ;
struct TYPE_22__ {int NumActiveVolumes; TYPE_3__* RaidVolume; } ;
struct TYPE_19__ {TYPE_5__* pIocPg2; } ;
struct TYPE_21__ {int pcidev; TYPE_2__ raid_data; int ir_firmware; } ;
struct TYPE_20__ {int VolumeID; int VolumeBus; } ;
typedef TYPE_4__ MPT_ADAPTER ;
typedef TYPE_5__ IOCPage2_t ;
typedef TYPE_6__ ConfigPageHeader_t ;
typedef TYPE_7__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*) ;
 int * FUNC_1 (TYPE_5__*,int,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_5__* FUNC_6 (int ,int,int*) ;
 int FUNC_7 (int ,int,TYPE_5__*,int) ;

int
FUNC_8(MPT_ADAPTER *VAR_6)
{
 IOCPage2_t *VAR_7;
 u8 *VAR_8;
 dma_addr_t VAR_9;
 CONFIGPARMS VAR_10;
 ConfigPageHeader_t VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 if (!VAR_6->ir_firmware)
  return 0;



 FUNC_0(VAR_6->raid_data.pIocPg2);
 VAR_6->raid_data.pIocPg2 = ((void*)0);
 FUNC_3(VAR_6);



 VAR_11.PageVersion = 0;
 VAR_11.PageLength = 0;
 VAR_11.PageNumber = 2;
 VAR_11.PageType = VAR_5;
 VAR_10.cfghdr.hdr = &VAR_11;
 VAR_10.physAddr = -1;
 VAR_10.pageAddr = 0;
 VAR_10.action = VAR_3;
 VAR_10.dir = 0;
 VAR_10.timeout = 0;
 if (FUNC_2(VAR_6, &VAR_10) != 0)
   return -VAR_0;

 if (VAR_11.PageLength == 0)
  return -VAR_0;

 VAR_13 = VAR_11.PageLength * 4;
 VAR_7 = FUNC_6(VAR_6->pcidev, VAR_13, &VAR_9);
 if (!VAR_7)
  return -VAR_1;

 VAR_10.action = VAR_4;
 VAR_10.physAddr = VAR_9;
 if (FUNC_2(VAR_6, &VAR_10) != 0)
  goto out;

 VAR_8 = FUNC_1(VAR_7, VAR_13, VAR_2);
 if (!VAR_8) {
  VAR_12 = -VAR_1;
  goto out;
 }

 VAR_6->raid_data.pIocPg2 = (IOCPage2_t *) VAR_8;

 FUNC_5(VAR_6);

 for (VAR_14 = 0; VAR_14 < VAR_7->NumActiveVolumes ; VAR_14++)
  FUNC_4(VAR_6,
      VAR_7->RaidVolume[VAR_14].VolumeBus,
      VAR_7->RaidVolume[VAR_14].VolumeID);

 out:
 FUNC_7(VAR_6->pcidev, VAR_13, VAR_7, VAR_9);

 return VAR_12;
}
