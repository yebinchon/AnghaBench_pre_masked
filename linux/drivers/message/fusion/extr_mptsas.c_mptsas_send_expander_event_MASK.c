
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mptsas_portinfo {int num_phys; TYPE_2__* phy_info; } ;
struct fw_event_work {scalar_t__ event_data; int * ioc; } ;
typedef void* __le64 ;
struct TYPE_7__ {scalar_t__ ReasonCode; scalar_t__ NumPhys; int ParentDevHandle; int DevHandle; int SASAddress; } ;
struct TYPE_5__ {void* handle_parent; void* sas_address; } ;
struct TYPE_6__ {TYPE_1__ identify; void* handle; struct mptsas_portinfo* portinfo; } ;
typedef TYPE_3__ MpiEventDataSasExpanderStatusChange_t ;
typedef int MPT_ADAPTER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (void**,int *,int) ;
 int FUNC_3 (int *,struct mptsas_portinfo*,int ) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,struct mptsas_portinfo*) ;
 struct mptsas_portinfo* FUNC_6 (int *,void*) ;
 int FUNC_7 (int *,struct fw_event_work*) ;

__attribute__((used)) static void
FUNC_8(struct fw_event_work *VAR_2)
{
 MPT_ADAPTER *VAR_3;
 MpiEventDataSasExpanderStatusChange_t *VAR_4;
 struct mptsas_portinfo *VAR_5;
 __le64 VAR_6;
 int VAR_7;

 VAR_3 = VAR_2->ioc;
 VAR_4 = (MpiEventDataSasExpanderStatusChange_t *)
     VAR_2->event_data;
 FUNC_2(&VAR_6, &VAR_4->SASAddress, sizeof(__le64));
 VAR_6 = FUNC_1(VAR_6);
 VAR_5 = FUNC_6(VAR_3, VAR_6);

 if (VAR_4->ReasonCode == VAR_0) {
  if (VAR_5) {
   for (VAR_7 = 0; VAR_7 < VAR_5->num_phys; VAR_7++) {
    VAR_5->phy_info[VAR_7].portinfo = VAR_5;
    VAR_5->phy_info[VAR_7].handle =
        FUNC_0(VAR_4->DevHandle);
    VAR_5->phy_info[VAR_7].identify.sas_address =
        FUNC_1(VAR_6);
    VAR_5->phy_info[VAR_7].identify.handle_parent =
        FUNC_0(VAR_4->ParentDevHandle);
   }
   FUNC_5(VAR_3, VAR_5);
  } else if (!VAR_5 && VAR_4->NumPhys)
   FUNC_4(VAR_3, VAR_4);
 } else if (VAR_4->ReasonCode ==
     VAR_1)
  FUNC_3(VAR_3, VAR_5, 0);

 FUNC_7(VAR_3, VAR_2);
}
