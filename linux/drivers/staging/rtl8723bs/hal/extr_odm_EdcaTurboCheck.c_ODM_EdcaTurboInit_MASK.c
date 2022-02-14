
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bIsAnyNonBEPkts; } ;
struct adapter {TYPE_2__ recvpriv; } ;
struct TYPE_5__ {int bCurrentTurboEDCA; int bIsCurRDLState; } ;
struct TYPE_7__ {struct adapter* Adapter; TYPE_1__ DM_EDCA_Table; } ;
typedef TYPE_3__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ,int ,char*) ;
 int FUNC_1 (struct adapter*,int ) ;

void FUNC_2(void *VAR_6)
{
 PDM_ODM_T VAR_7 = (PDM_ODM_T)VAR_6;
 struct adapter *VAR_8 = VAR_7->Adapter;

 VAR_7->DM_EDCA_Table.bCurrentTurboEDCA = 0;
 VAR_7->DM_EDCA_Table.bIsCurRDLState = 0;
 VAR_8->recvpriv.bIsAnyNonBEPkts = 0;

 FUNC_0(VAR_7, VAR_0, VAR_1,
       ("Original VO PARAM: 0x%x\n",
        FUNC_1(VAR_7->Adapter, VAR_5)));
 FUNC_0(VAR_7, VAR_0, VAR_1,
       ("Original VI PARAM: 0x%x\n",
        FUNC_1(VAR_7->Adapter, VAR_4)));
 FUNC_0(VAR_7, VAR_0, VAR_1,
       ("Original BE PARAM: 0x%x\n",
        FUNC_1(VAR_7->Adapter, VAR_2)));
 FUNC_0(VAR_7, VAR_0, VAR_1,
       ("Original BK PARAM: 0x%x\n",
        FUNC_1(VAR_7->Adapter, VAR_3)));
}
