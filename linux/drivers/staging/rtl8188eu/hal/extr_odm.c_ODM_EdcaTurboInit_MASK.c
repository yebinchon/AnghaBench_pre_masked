
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bCurrentTurboEDCA; int bIsCurRDLState; } ;
struct odm_dm_struct {TYPE_1__ DM_EDCA_Table; struct adapter* Adapter; } ;
struct TYPE_4__ {int bIsAnyNonBEPkts; } ;
struct adapter {TYPE_2__ recvpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct odm_dm_struct*,int ,int ,char*) ;
 int FUNC_1 (struct adapter*,int ) ;

void FUNC_2(struct odm_dm_struct *VAR_6)
{
 struct adapter *VAR_7 = VAR_6->Adapter;

 VAR_6->DM_EDCA_Table.bCurrentTurboEDCA = 0;
 VAR_6->DM_EDCA_Table.bIsCurRDLState = 0;
 VAR_7->recvpriv.bIsAnyNonBEPkts = 0;

 FUNC_0(VAR_6, VAR_0, VAR_1, ("Original VO PARAM: 0x%x\n", FUNC_1(VAR_7, VAR_5)));
 FUNC_0(VAR_6, VAR_0, VAR_1, ("Original VI PARAM: 0x%x\n", FUNC_1(VAR_7, VAR_4)));
 FUNC_0(VAR_6, VAR_0, VAR_1, ("Original BE PARAM: 0x%x\n", FUNC_1(VAR_7, VAR_2)));
 FUNC_0(VAR_6, VAR_0, VAR_1, ("Original BK PARAM: 0x%x\n", FUNC_1(VAR_7, VAR_3)));
}
