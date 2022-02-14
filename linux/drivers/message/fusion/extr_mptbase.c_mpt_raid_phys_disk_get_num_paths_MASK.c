
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
typedef TYPE_2__* pRaidPhysDiskPage1_t ;
typedef int dma_addr_t ;
struct TYPE_12__ {TYPE_4__* hdr; } ;
struct TYPE_15__ {int PageNumber; int physAddr; int PageLength; int pageAddr; int action; TYPE_1__ cfghdr; int PageType; int PageVersion; } ;
struct TYPE_14__ {int pcidev; } ;
struct TYPE_13__ {int NumPhysDiskPaths; } ;
typedef TYPE_3__ MPT_ADAPTER ;
typedef TYPE_4__ ConfigPageHeader_t ;
typedef TYPE_4__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 TYPE_2__* FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int ,int,TYPE_2__*,int) ;

int
FUNC_4(MPT_ADAPTER *VAR_4, u8 VAR_5)
{
 CONFIGPARMS VAR_6;
 ConfigPageHeader_t VAR_7;
 dma_addr_t VAR_8;
 pRaidPhysDiskPage1_t VAR_9 = ((void*)0);
 int VAR_10;

 FUNC_0(&VAR_6, 0 , sizeof(CONFIGPARMS));
 FUNC_0(&VAR_7, 0 , sizeof(ConfigPageHeader_t));

 VAR_7.PageVersion = VAR_3;
 VAR_7.PageType = VAR_2;
 VAR_7.PageNumber = 1;
 VAR_6.cfghdr.hdr = &VAR_7;
 VAR_6.physAddr = -1;
 VAR_6.action = VAR_0;

 if (FUNC_1(VAR_4, &VAR_6) != 0) {
  VAR_10 = 0;
  goto out;
 }

 if (!VAR_7.PageLength) {
  VAR_10 = 0;
  goto out;
 }

 VAR_9 = FUNC_2(VAR_4->pcidev, VAR_7.PageLength * 4,
     &VAR_8);

 if (!VAR_9) {
  VAR_10 = 0;
  goto out;
 }

 VAR_6.physAddr = VAR_8;
 VAR_6.action = VAR_1;
 VAR_6.pageAddr = VAR_5;

 if (FUNC_1(VAR_4, &VAR_6) != 0) {
  VAR_10 = 0;
  goto out;
 }

 VAR_10 = VAR_9->NumPhysDiskPaths;
 out:

 if (VAR_9)
  FUNC_3(VAR_4->pcidev, VAR_7.PageLength * 4, VAR_9,
      VAR_8);

 return VAR_10;
}
