
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int*** TxIQC_8723B; int*** RxIQC_8723B; } ;
struct TYPE_5__ {int Adapter; TYPE_1__ RFCalibrateInfo; } ;
typedef TYPE_1__* PODM_RF_CAL_T ;
typedef TYPE_2__* PDM_ODM_T ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ,int,int ,int) ;
 size_t VAR_8 ;
 int VAR_9 ;

void FUNC_1(PDM_ODM_T VAR_10, u32 VAR_11)
{

 PODM_RF_CAL_T VAR_12 = &(VAR_10->RFCalibrateInfo);

 if (
  (VAR_12->TxIQC_8723B[VAR_6][VAR_2][VAR_8] != 0x0) &&
  (VAR_12->RxIQC_8723B[VAR_6][VAR_0][VAR_8] != 0x0) &&
  (VAR_12->TxIQC_8723B[VAR_7][VAR_2][VAR_8] != 0x0) &&
  (VAR_12->RxIQC_8723B[VAR_7][VAR_0][VAR_8] != 0x0)
 ) {
  if (VAR_11) {

   FUNC_0(VAR_10->Adapter, VAR_12->TxIQC_8723B[VAR_6][VAR_3][VAR_5], VAR_9, VAR_12->TxIQC_8723B[VAR_6][VAR_3][VAR_8]);
   FUNC_0(VAR_10->Adapter, VAR_12->TxIQC_8723B[VAR_6][VAR_2][VAR_5], VAR_9, VAR_12->TxIQC_8723B[VAR_6][VAR_2][VAR_8]);
   FUNC_0(VAR_10->Adapter, VAR_12->TxIQC_8723B[VAR_6][VAR_1][VAR_5], VAR_9, VAR_12->TxIQC_8723B[VAR_6][VAR_1][VAR_8]);

   FUNC_0(VAR_10->Adapter, VAR_12->RxIQC_8723B[VAR_6][VAR_0][VAR_5], VAR_9, VAR_12->RxIQC_8723B[VAR_6][VAR_0][VAR_8]);
   FUNC_0(VAR_10->Adapter, VAR_12->RxIQC_8723B[VAR_6][VAR_4][VAR_5], VAR_9, VAR_12->RxIQC_8723B[VAR_6][VAR_4][VAR_8]);
  } else {

   FUNC_0(VAR_10->Adapter, VAR_12->TxIQC_8723B[VAR_7][VAR_3][VAR_5], VAR_9, VAR_12->TxIQC_8723B[VAR_7][VAR_3][VAR_8]);
   FUNC_0(VAR_10->Adapter, VAR_12->TxIQC_8723B[VAR_7][VAR_2][VAR_5], VAR_9, VAR_12->TxIQC_8723B[VAR_7][VAR_2][VAR_8]);
   FUNC_0(VAR_10->Adapter, VAR_12->TxIQC_8723B[VAR_7][VAR_1][VAR_5], VAR_9, VAR_12->TxIQC_8723B[VAR_7][VAR_1][VAR_8]);

   FUNC_0(VAR_10->Adapter, VAR_12->RxIQC_8723B[VAR_7][VAR_0][VAR_5], VAR_9, VAR_12->RxIQC_8723B[VAR_7][VAR_0][VAR_8]);
   FUNC_0(VAR_10->Adapter, VAR_12->RxIQC_8723B[VAR_7][VAR_4][VAR_5], VAR_9, VAR_12->RxIQC_8723B[VAR_7][VAR_4][VAR_8]);
  }
 }
}
