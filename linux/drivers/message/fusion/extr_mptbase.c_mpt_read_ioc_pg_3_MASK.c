
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int dma_addr_t ;
struct TYPE_9__ {TYPE_4__* hdr; } ;
struct TYPE_13__ {int physAddr; int action; scalar_t__ timeout; scalar_t__ dir; scalar_t__ pageAddr; TYPE_1__ cfghdr; } ;
struct TYPE_12__ {int PageLength; int PageNumber; int PageType; scalar_t__ PageVersion; } ;
struct TYPE_10__ {int * pIocPg3; } ;
struct TYPE_11__ {int pcidev; TYPE_2__ raid_data; } ;
typedef TYPE_3__ MPT_ADAPTER ;
typedef int IOCPage3_t ;
typedef TYPE_4__ ConfigPageHeader_t ;
typedef TYPE_5__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_5__*) ;
 int * FUNC_4 (int ,int,int*) ;
 int FUNC_5 (int ,int,int *,int) ;

__attribute__((used)) static int
FUNC_6(MPT_ADAPTER *VAR_4)
{
 IOCPage3_t *VAR_5;
 u8 *VAR_6;
 CONFIGPARMS VAR_7;
 ConfigPageHeader_t VAR_8;
 dma_addr_t VAR_9;
 int VAR_10 = 0;



 FUNC_0(VAR_4->raid_data.pIocPg3);
 VAR_4->raid_data.pIocPg3 = ((void*)0);




 VAR_8.PageVersion = 0;
 VAR_8.PageLength = 0;
 VAR_8.PageNumber = 3;
 VAR_8.PageType = VAR_3;
 VAR_7.cfghdr.hdr = &VAR_8;
 VAR_7.physAddr = -1;
 VAR_7.pageAddr = 0;
 VAR_7.action = VAR_1;
 VAR_7.dir = 0;
 VAR_7.timeout = 0;
 if (FUNC_3(VAR_4, &VAR_7) != 0)
  return 0;

 if (VAR_8.PageLength == 0)
  return 0;



 VAR_10 = VAR_8.PageLength * 4;
 VAR_5 = FUNC_4(VAR_4->pcidev, VAR_10, &VAR_9);
 if (!VAR_5)
  return 0;




 VAR_7.physAddr = VAR_9;
 VAR_7.action = VAR_2;
 if (FUNC_3(VAR_4, &VAR_7) == 0) {
  VAR_6 = FUNC_1(VAR_10, VAR_0);
  if (VAR_6) {
   FUNC_2(VAR_6, (u8 *)VAR_5, VAR_10);
   VAR_4->raid_data.pIocPg3 = (IOCPage3_t *) VAR_6;
  }
 }

 FUNC_5(VAR_4->pcidev, VAR_10, VAR_5, VAR_9);

 return 0;
}
