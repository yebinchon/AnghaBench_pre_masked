
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int dma_addr_t ;
struct TYPE_13__ {TYPE_5__* ehdr; } ;
struct TYPE_17__ {int ExtPageLength; int action; int physAddr; TYPE_1__ cfghdr; int ExtPageType; int PageType; int PageVersion; } ;
struct TYPE_16__ {int pcidev; } ;
struct TYPE_15__ {TYPE_2__* PhyData; } ;
struct TYPE_14__ {int PortFlags; } ;
typedef TYPE_3__ SasIOUnitPage0_t ;
typedef TYPE_4__ MPT_ADAPTER ;
typedef TYPE_5__ ConfigExtendedPageHeader_t ;
typedef TYPE_5__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_5__*) ;
 TYPE_3__* FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_4(MPT_ADAPTER *VAR_6)
{
 ConfigExtendedPageHeader_t VAR_7;
 CONFIGPARMS VAR_8;
 SasIOUnitPage0_t *VAR_9;
 dma_addr_t VAR_10;
 int VAR_11 = 0;

 FUNC_0(&VAR_7, 0, sizeof(ConfigExtendedPageHeader_t));
 FUNC_0(&VAR_8, 0, sizeof(CONFIGPARMS));
 VAR_7.PageVersion = VAR_4;
 VAR_7.PageType = VAR_3;
 VAR_7.ExtPageType = VAR_2;
 VAR_8.cfghdr.ehdr = &VAR_7;
 VAR_8.action = VAR_0;

 if ((FUNC_1(VAR_6, &VAR_8)))
  goto out;
 if (!VAR_7.ExtPageLength)
  goto out;

 VAR_9 = FUNC_2(VAR_6->pcidev, VAR_7.ExtPageLength * 4,
     &VAR_10);
 if (!VAR_9)
  goto out;

 VAR_8.physAddr = VAR_10;
 VAR_8.action = VAR_1;

 if ((FUNC_1(VAR_6, &VAR_8)))
  goto out_free_consistent;

 if (!(VAR_9->PhyData[0].PortFlags &
     VAR_5))
  VAR_11 = 1;

 out_free_consistent:
 FUNC_3(VAR_6->pcidev, VAR_7.ExtPageLength * 4,
     VAR_9, VAR_10);
 out:
 return VAR_11;
}
