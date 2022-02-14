
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct odm_dm_struct {int bIsMPChip; int BbSwingIdxOfdm; int BbSwingIdxOfdmCurrent; int BbSwingFlagOfdm; int SupportAbility; int AntDivType; int bWIFITest; int PatchID; int CutVersion; int SupportICType; int SupportPlatform; struct adapter* Adapter; } ;
struct TYPE_3__ {scalar_t__ ChipType; } ;
struct dm_priv {int InitODMFlag; } ;
struct hal_data_8188e {int TRxAntDivType; int CustomerID; TYPE_1__ VersionID; struct odm_dm_struct odmpriv; struct dm_priv dmpriv; } ;
struct TYPE_4__ {int wifi_spec; } ;
struct adapter {TYPE_2__ registrypriv; struct hal_data_8188e* HalData; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct odm_dm_struct*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_6)
{
 struct hal_data_8188e *VAR_7 = VAR_6->HalData;
 struct dm_priv *VAR_8 = &VAR_7->dmpriv;
 struct odm_dm_struct *VAR_9 = &(VAR_7->odmpriv);


 FUNC_0(VAR_9, 0, sizeof(*VAR_9));

 VAR_9->Adapter = VAR_6;
 VAR_9->SupportPlatform = VAR_1;
 VAR_9->SupportICType = VAR_5;
 VAR_9->CutVersion = VAR_2;
 VAR_9->bIsMPChip = VAR_7->VersionID.ChipType == VAR_0;
 VAR_9->PatchID = VAR_7->CustomerID;
 VAR_9->bWIFITest = VAR_6->registrypriv.wifi_spec;

 VAR_9->AntDivType = VAR_7->TRxAntDivType;



 VAR_9->BbSwingIdxOfdm = 12;
 VAR_9->BbSwingIdxOfdmCurrent = 12;
 VAR_9->BbSwingFlagOfdm = 0;

 VAR_8->InitODMFlag = VAR_3 |
    VAR_4;

 VAR_9->SupportAbility = VAR_8->InitODMFlag;
}
