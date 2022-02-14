
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hal_com_data {int CurrentChannel; } ;
struct adapter {int dummy; } ;
struct TYPE_4__ {int* DeltaSwingTableIdx_2GCCKA_P; int* DeltaSwingTableIdx_2GCCKA_N; int* DeltaSwingTableIdx_2GCCKB_P; int* DeltaSwingTableIdx_2GCCKB_N; int* DeltaSwingTableIdx_2GA_P; int* DeltaSwingTableIdx_2GA_N; int* DeltaSwingTableIdx_2GB_P; int* DeltaSwingTableIdx_2GB_N; } ;
struct TYPE_5__ {int * pForcedDataRate; TYPE_1__ RFCalibrateInfo; struct adapter* Adapter; } ;
typedef TYPE_1__* PODM_RF_CAL_T ;
typedef TYPE_2__* PDM_ODM_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(
 PDM_ODM_T VAR_2,
 u8 **VAR_3,
 u8 **VAR_4,
 u8 **VAR_5,
 u8 **VAR_6
)
{
 struct adapter *VAR_7 = VAR_2->Adapter;
 PODM_RF_CAL_T VAR_8 = &(VAR_2->RFCalibrateInfo);
 struct hal_com_data *VAR_9 = FUNC_0(VAR_7);
 u16 VAR_10 = *(VAR_2->pForcedDataRate);
 u8 VAR_11 = VAR_9->CurrentChannel;

 if (1 <= VAR_11 && VAR_11 <= 14) {
  if (FUNC_1(VAR_10)) {
   *VAR_3 = VAR_8->DeltaSwingTableIdx_2GCCKA_P;
   *VAR_4 = VAR_8->DeltaSwingTableIdx_2GCCKA_N;
   *VAR_5 = VAR_8->DeltaSwingTableIdx_2GCCKB_P;
   *VAR_6 = VAR_8->DeltaSwingTableIdx_2GCCKB_N;
  } else {
   *VAR_3 = VAR_8->DeltaSwingTableIdx_2GA_P;
   *VAR_4 = VAR_8->DeltaSwingTableIdx_2GA_N;
   *VAR_5 = VAR_8->DeltaSwingTableIdx_2GB_P;
   *VAR_6 = VAR_8->DeltaSwingTableIdx_2GB_N;
  }
 } else {
  *VAR_3 = (u8 *)VAR_1;
  *VAR_4 = (u8 *)VAR_0;
  *VAR_5 = (u8 *)VAR_1;
  *VAR_6 = (u8 *)VAR_0;
 }

 return;
}
