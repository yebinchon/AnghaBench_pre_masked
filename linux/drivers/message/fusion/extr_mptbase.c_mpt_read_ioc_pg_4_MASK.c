
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* dma_addr_t ;
struct TYPE_9__ {TYPE_4__* hdr; } ;
struct TYPE_13__ {int physAddr; int action; scalar_t__ timeout; scalar_t__ dir; scalar_t__ pageAddr; TYPE_1__ cfghdr; } ;
struct TYPE_12__ {int PageLength; int PageNumber; int PageType; scalar_t__ PageVersion; } ;
struct TYPE_10__ {int IocPg4Sz; int * pIocPg4; void* IocPg4_dma; } ;
struct TYPE_11__ {int alloc_total; TYPE_2__ spi_data; int pcidev; } ;
typedef TYPE_3__ MPT_ADAPTER ;
typedef int IOCPage4_t ;
typedef TYPE_4__ ConfigPageHeader_t ;
typedef TYPE_5__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_5__*) ;
 int * FUNC_1 (int ,int,void**) ;
 int FUNC_2 (int ,int,int *,void*) ;

__attribute__((used)) static void
FUNC_3(MPT_ADAPTER *VAR_3)
{
 IOCPage4_t *VAR_4;
 CONFIGPARMS VAR_5;
 ConfigPageHeader_t VAR_6;
 dma_addr_t VAR_7;
 int VAR_8;



 VAR_6.PageVersion = 0;
 VAR_6.PageLength = 0;
 VAR_6.PageNumber = 4;
 VAR_6.PageType = VAR_2;
 VAR_5.cfghdr.hdr = &VAR_6;
 VAR_5.physAddr = -1;
 VAR_5.pageAddr = 0;
 VAR_5.action = VAR_0;
 VAR_5.dir = 0;
 VAR_5.timeout = 0;
 if (FUNC_0(VAR_3, &VAR_5) != 0)
  return;

 if (VAR_6.PageLength == 0)
  return;

 if ( (VAR_4 = VAR_3->spi_data.pIocPg4) == ((void*)0) ) {
  VAR_8 = (VAR_6.PageLength + 4) * 4;
  VAR_4 = FUNC_1(VAR_3->pcidev, VAR_8, &VAR_7);
  if (!VAR_4)
   return;
  VAR_3->alloc_total += VAR_8;
 } else {
  VAR_7 = VAR_3->spi_data.IocPg4_dma;
  VAR_8 = VAR_3->spi_data.IocPg4Sz;
 }



 VAR_5.physAddr = VAR_7;
 VAR_5.action = VAR_1;
 if (FUNC_0(VAR_3, &VAR_5) == 0) {
  VAR_3->spi_data.pIocPg4 = (IOCPage4_t *) VAR_4;
  VAR_3->spi_data.IocPg4_dma = VAR_7;
  VAR_3->spi_data.IocPg4Sz = VAR_8;
 } else {
  FUNC_2(VAR_3->pcidev, VAR_8, VAR_4, VAR_7);
  VAR_3->spi_data.pIocPg4 = ((void*)0);
  VAR_3->alloc_total -= VAR_8;
 }
}
