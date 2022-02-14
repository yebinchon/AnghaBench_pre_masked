
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
struct TYPE_13__ {int physAddr; int action; scalar_t__ timeout; scalar_t__ pageAddr; scalar_t__ dir; TYPE_1__ cfghdr; } ;
struct TYPE_12__ {int PageLength; int PageNumber; int PageType; scalar_t__ PageVersion; } ;
struct TYPE_11__ {int BiosVersion; } ;
struct TYPE_10__ {int pcidev; int biosVersion; } ;
typedef TYPE_2__ MPT_ADAPTER ;
typedef TYPE_3__ IOUnitPage2_t ;
typedef TYPE_4__ ConfigPageHeader_t ;
typedef TYPE_5__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_5__*) ;
 scalar_t__ FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,int,int *,int) ;

__attribute__((used)) static int
FUNC_5(MPT_ADAPTER *VAR_4)
{
 ConfigPageHeader_t VAR_5;
 CONFIGPARMS VAR_6;
 IOUnitPage2_t *VAR_7;
 dma_addr_t VAR_8;
 int VAR_9;
 int VAR_10;


 VAR_5.PageVersion = 0;
 VAR_5.PageLength = 0;
 VAR_5.PageNumber = 2;
 VAR_5.PageType = VAR_3;
 VAR_6.cfghdr.hdr = &VAR_5;
 VAR_6.physAddr = -1;
 VAR_6.action = VAR_1;
 VAR_6.dir = 0;
 VAR_6.pageAddr = 0;
 VAR_6.timeout = 0;

 if ((VAR_10 = FUNC_2(VAR_4, &VAR_6)) != 0)
  return VAR_10;

 if (VAR_5.PageLength == 0)
  return 0;


 VAR_9 = VAR_5.PageLength * 4;
 VAR_10 = -VAR_0;
 VAR_7 = (IOUnitPage2_t *) FUNC_3(VAR_4->pcidev, VAR_9, &VAR_8);
 if (VAR_7) {
  FUNC_1((u8 *)VAR_7, 0, VAR_9);
  VAR_6.physAddr = VAR_8;
  VAR_6.action = VAR_2;


  if ((VAR_10 = FUNC_2(VAR_4, &VAR_6)) == 0)
   VAR_4->biosVersion = FUNC_0(VAR_7->BiosVersion);

  FUNC_4(VAR_4->pcidev, VAR_9, (u8 *) VAR_7, VAR_8);
 }

 return VAR_10;
}
