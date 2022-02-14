
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef scalar_t__ u32 ;
struct mptsas_portinfo {int num_phys; TYPE_12__* phy_info; } ;
struct mptsas_phyinfo {int dummy; } ;
typedef int dma_addr_t ;
typedef int __le64 ;
struct TYPE_14__ {TYPE_5__* ehdr; } ;
struct TYPE_19__ {int physAddr; int action; int timeout; scalar_t__ dir; scalar_t__ pageAddr; TYPE_1__ cfghdr; } ;
struct TYPE_18__ {int ExtPageLength; int ExtPageType; int PageType; scalar_t__ Reserved2; scalar_t__ Reserved1; scalar_t__ PageNumber; int PageVersion; } ;
struct TYPE_17__ {int pcidev; } ;
struct TYPE_16__ {int NumPhys; int ParentDevHandle; int DevHandle; int SASAddress; } ;
struct TYPE_15__ {void* handle_parent; int sas_address; } ;
struct TYPE_13__ {TYPE_2__ identify; void* handle; struct mptsas_portinfo* portinfo; } ;
typedef TYPE_3__ SasExpanderPage0_t ;
typedef TYPE_4__ MPT_ADAPTER ;
typedef TYPE_5__ ConfigExtendedPageHeader_t ;
typedef TYPE_6__ CONFIGPARMS ;


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
 int VAR_10 ;
 TYPE_12__* FUNC_0 (int,int,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct mptsas_portinfo*,int ,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_6__*) ;
 TYPE_3__* FUNC_6 (int ,int,int*) ;
 int FUNC_7 (int ,int,TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_8(MPT_ADAPTER *VAR_11, struct mptsas_portinfo *VAR_12,
  u32 VAR_13, u32 VAR_14)
{
 ConfigExtendedPageHeader_t VAR_15;
 CONFIGPARMS VAR_16;
 SasExpanderPage0_t *VAR_17;
 dma_addr_t VAR_18;
 int VAR_19, VAR_20;
 __le64 VAR_21;

 FUNC_4(VAR_12, 0, sizeof(struct mptsas_portinfo));
 VAR_15.PageVersion = VAR_9;
 VAR_15.ExtPageLength = 0;
 VAR_15.PageNumber = 0;
 VAR_15.Reserved1 = 0;
 VAR_15.Reserved2 = 0;
 VAR_15.PageType = VAR_7;
 VAR_15.ExtPageType = VAR_6;

 VAR_16.cfghdr.ehdr = &VAR_15;
 VAR_16.physAddr = -1;
 VAR_16.pageAddr = VAR_13 + VAR_14;
 VAR_16.action = VAR_4;
 VAR_16.dir = 0;
 VAR_16.timeout = VAR_10;

 FUNC_4(VAR_12, 0, sizeof(struct mptsas_portinfo));
 VAR_20 = FUNC_5(VAR_11, &VAR_16);
 if (VAR_20)
  goto out;

 if (!VAR_15.ExtPageLength) {
  VAR_20 = -VAR_2;
  goto out;
 }

 VAR_17 = FUNC_6(VAR_11->pcidev, VAR_15.ExtPageLength * 4,
          &VAR_18);
 if (!VAR_17) {
  VAR_20 = -VAR_1;
  goto out;
 }

 VAR_16.physAddr = VAR_18;
 VAR_16.action = VAR_5;

 VAR_20 = FUNC_5(VAR_11, &VAR_16);
 if (VAR_20 == VAR_8) {
  VAR_20 = -VAR_0;
  goto out_free_consistent;
 }

 if (VAR_20)
  goto out_free_consistent;


 VAR_12->num_phys = (VAR_17->NumPhys) ? VAR_17->NumPhys : 1;
 VAR_12->phy_info = FUNC_0(VAR_12->num_phys,
  sizeof(struct mptsas_phyinfo), VAR_3);
 if (!VAR_12->phy_info) {
  VAR_20 = -VAR_1;
  goto out_free_consistent;
 }

 FUNC_3(&VAR_21, &VAR_17->SASAddress, sizeof(__le64));
 for (VAR_19 = 0; VAR_19 < VAR_12->num_phys; VAR_19++) {
  VAR_12->phy_info[VAR_19].portinfo = VAR_12;
  VAR_12->phy_info[VAR_19].handle =
      FUNC_1(VAR_17->DevHandle);
  VAR_12->phy_info[VAR_19].identify.sas_address =
      FUNC_2(VAR_21);
  VAR_12->phy_info[VAR_19].identify.handle_parent =
      FUNC_1(VAR_17->ParentDevHandle);
 }

 out_free_consistent:
 FUNC_7(VAR_11->pcidev, VAR_15.ExtPageLength * 4,
       VAR_17, VAR_18);
 out:
 return VAR_20;
}
