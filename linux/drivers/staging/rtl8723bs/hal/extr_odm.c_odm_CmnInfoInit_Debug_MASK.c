
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bDualMacSmartConcurrent; int bWIFITest; int bInHctTest; int PatchID; int ExtTRSW; int ExtPA; int ExtLNA; int BoardType; int RFType; int FabVersion; int CutVersion; int SupportICType; int SupportInterface; int SupportAbility; int SupportPlatform; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;

void FUNC_1(PDM_ODM_T VAR_2)
{
 FUNC_0(VAR_2, VAR_0, VAR_1, ("odm_CmnInfoInit_Debug ==>\n"));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("SupportPlatform =%d\n", VAR_2->SupportPlatform));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("SupportAbility = 0x%x\n", VAR_2->SupportAbility));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("SupportInterface =%d\n", VAR_2->SupportInterface));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("SupportICType = 0x%x\n", VAR_2->SupportICType));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("CutVersion =%d\n", VAR_2->CutVersion));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("FabVersion =%d\n", VAR_2->FabVersion));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("RFType =%d\n", VAR_2->RFType));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("BoardType =%d\n", VAR_2->BoardType));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("ExtLNA =%d\n", VAR_2->ExtLNA));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("ExtPA =%d\n", VAR_2->ExtPA));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("ExtTRSW =%d\n", VAR_2->ExtTRSW));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("PatchID =%d\n", VAR_2->PatchID));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("bInHctTest =%d\n", VAR_2->bInHctTest));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("bWIFITest =%d\n", VAR_2->bWIFITest));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("bDualMacSmartConcurrent =%d\n", VAR_2->bDualMacSmartConcurrent));

}
