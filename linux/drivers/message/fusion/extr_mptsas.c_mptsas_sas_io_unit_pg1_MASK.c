
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
typedef int dma_addr_t ;
struct TYPE_12__ {TYPE_4__* ehdr; } ;
struct TYPE_15__ {int PageNumber; int ExtPageLength; int action; int physAddr; TYPE_1__ cfghdr; int PageVersion; int ExtPageType; int PageType; int timeout; } ;
struct TYPE_14__ {int device_missing_delay; int pcidev; int io_missing_delay; } ;
struct TYPE_13__ {int ReportDeviceMissingDelay; int IODeviceMissingDelay; } ;
typedef TYPE_2__ SasIOUnitPage1_t ;
typedef TYPE_3__ MPT_ADAPTER ;
typedef TYPE_4__ ConfigExtendedPageHeader_t ;
typedef TYPE_4__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 TYPE_2__* FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int,TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_5(MPT_ADAPTER *VAR_10)
{
 ConfigExtendedPageHeader_t VAR_11;
 CONFIGPARMS VAR_12;
 SasIOUnitPage1_t *VAR_13;
 dma_addr_t VAR_14;
 int VAR_15;
 u8 VAR_16;

 FUNC_1(&VAR_11, 0, sizeof(ConfigExtendedPageHeader_t));
 FUNC_1(&VAR_12, 0, sizeof(CONFIGPARMS));

 VAR_12.cfghdr.ehdr = &VAR_11;
 VAR_12.action = VAR_2;
 VAR_12.timeout = VAR_9;
 VAR_12.cfghdr.ehdr->PageType = VAR_5;
 VAR_12.cfghdr.ehdr->ExtPageType = VAR_4;
 VAR_12.cfghdr.ehdr->PageVersion = VAR_6;
 VAR_12.cfghdr.ehdr->PageNumber = 1;

 VAR_15 = FUNC_2(VAR_10, &VAR_12);
 if (VAR_15)
  goto out;
 if (!VAR_11.ExtPageLength) {
  VAR_15 = -VAR_1;
  goto out;
 }

 VAR_13 = FUNC_3(VAR_10->pcidev, VAR_11.ExtPageLength * 4,
         &VAR_14);
 if (!VAR_13) {
  VAR_15 = -VAR_0;
  goto out;
 }

 VAR_12.physAddr = VAR_14;
 VAR_12.action = VAR_3;

 VAR_15 = FUNC_2(VAR_10, &VAR_12);
 if (VAR_15)
  goto out_free_consistent;

 VAR_10->io_missing_delay =
     FUNC_0(VAR_13->IODeviceMissingDelay);
 VAR_16 = VAR_13->ReportDeviceMissingDelay;
 VAR_10->device_missing_delay = (VAR_16 & VAR_8) ?
     (VAR_16 & VAR_7) * 16 :
     VAR_16 & VAR_7;

 out_free_consistent:
 FUNC_4(VAR_10->pcidev, VAR_11.ExtPageLength * 4,
       VAR_13, VAR_14);
 out:
 return VAR_15;
}
