
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef void* dma_addr_t ;
struct TYPE_10__ {TYPE_5__* hdr; } ;
struct TYPE_15__ {int physAddr; int pageAddr; int action; scalar_t__ timeout; scalar_t__ dir; TYPE_1__ cfghdr; } ;
struct TYPE_14__ {int PageLength; int PageNumber; int PageType; scalar_t__ PageVersion; } ;
struct TYPE_12__ {TYPE_2__* fc_port_page1; } ;
struct TYPE_13__ {int pcidev; TYPE_3__ fc_data; } ;
struct TYPE_11__ {int pg_sz; int * data; void* dma; } ;
typedef TYPE_4__ MPT_ADAPTER ;
typedef int FCPortPage1_t ;
typedef TYPE_5__ ConfigPageHeader_t ;
typedef TYPE_6__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_4__*,TYPE_6__*) ;
 scalar_t__ FUNC_2 (int ,int,void**) ;
 int FUNC_3 (int ,int,int *,void*) ;

__attribute__((used)) static int
FUNC_4(MPT_ADAPTER *VAR_6, int VAR_7)
{
 ConfigPageHeader_t VAR_8;
 CONFIGPARMS VAR_9;
 FCPortPage1_t *VAR_10;
 dma_addr_t VAR_11;
 int VAR_12;
 int VAR_13;

 if (VAR_7 > 1)
  return -VAR_0;


 VAR_8.PageVersion = 0;
 VAR_8.PageLength = 0;
 VAR_8.PageNumber = 1;
 VAR_8.PageType = VAR_5;
 VAR_9.cfghdr.hdr = &VAR_8;
 VAR_9.physAddr = -1;
 VAR_9.action = VAR_3;
 VAR_9.dir = 0;
 VAR_9.pageAddr = VAR_7;
 VAR_9.timeout = 0;

 if ((VAR_13 = FUNC_1(VAR_6, &VAR_9)) != 0)
  return VAR_13;

 if (VAR_8.PageLength == 0)
  return -VAR_1;

start_over:

 if (VAR_6->fc_data.fc_port_page1[VAR_7].data == ((void*)0)) {
  VAR_12 = VAR_8.PageLength * 4;
  if (VAR_12 < sizeof(FCPortPage1_t))
   VAR_12 = sizeof(FCPortPage1_t);

  VAR_10 = (FCPortPage1_t *) FUNC_2(VAR_6->pcidev,
      VAR_12,
      &VAR_11);
  if (!VAR_10)
   return -VAR_2;
 }
 else {
  VAR_10 = VAR_6->fc_data.fc_port_page1[VAR_7].data;
  VAR_11 = VAR_6->fc_data.fc_port_page1[VAR_7].dma;
  VAR_12 = VAR_6->fc_data.fc_port_page1[VAR_7].pg_sz;
  if (VAR_8.PageLength * 4 > VAR_12) {
   VAR_6->fc_data.fc_port_page1[VAR_7].data = ((void*)0);
   FUNC_3(VAR_6->pcidev, VAR_12, (u8 *)
    VAR_10, VAR_11);
   goto start_over;
  }
 }

 FUNC_0(VAR_10,0,VAR_12);

 VAR_9.physAddr = VAR_11;
 VAR_9.action = VAR_4;

 if ((VAR_13 = FUNC_1(VAR_6, &VAR_9)) == 0) {
  VAR_6->fc_data.fc_port_page1[VAR_7].data = VAR_10;
  VAR_6->fc_data.fc_port_page1[VAR_7].pg_sz = VAR_12;
  VAR_6->fc_data.fc_port_page1[VAR_7].dma = VAR_11;
 }
 else {
  VAR_6->fc_data.fc_port_page1[VAR_7].data = ((void*)0);
  FUNC_3(VAR_6->pcidev, VAR_12, (u8 *)
   VAR_10, VAR_11);
 }

 return VAR_13;
}
