
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct hal_com_data {int EEPROMThermalMeter; } ;
struct TYPE_4__ {int ThermalValue_LCK; int ThermalValue_IQK; int ThermalValue; scalar_t__* PowerIndexOffset; scalar_t__* DeltaPowerIndexLast; scalar_t__* DeltaPowerIndex; int * OFDM_index; scalar_t__ CCK_index; } ;
struct TYPE_5__ {int Modify_TxAGC_Flag_PathA; int Modify_TxAGC_Flag_PathB; TYPE_1__ RFCalibrateInfo; scalar_t__ Remnant_CCKSwingIdx; scalar_t__* Remnant_OFDMSwingIdx; scalar_t__* Absolute_OFDMSwingIdx; int DefaultOfdmIndex; int * BbSwingIdxOfdm; int * BbSwingIdxOfdmBase; int DefaultCckIndex; int BbSwingIdxCck; int BbSwingIdxCckBase; int Adapter; } ;
typedef TYPE_2__* PDM_ODM_T ;


 struct hal_com_data* FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;

void FUNC_1(PDM_ODM_T VAR_2)
{
 struct hal_com_data *VAR_3 = FUNC_0(VAR_2->Adapter);
 u8 VAR_4 = 0;

 VAR_2->BbSwingIdxCckBase = VAR_2->DefaultCckIndex;
 VAR_2->BbSwingIdxCck = VAR_2->DefaultCckIndex;
 VAR_2->RFCalibrateInfo.CCK_index = 0;

 for (VAR_4 = VAR_1; VAR_4 < VAR_0; ++VAR_4) {
  VAR_2->BbSwingIdxOfdmBase[VAR_4] = VAR_2->DefaultOfdmIndex;
  VAR_2->BbSwingIdxOfdm[VAR_4] = VAR_2->DefaultOfdmIndex;
  VAR_2->RFCalibrateInfo.OFDM_index[VAR_4] = VAR_2->DefaultOfdmIndex;

  VAR_2->RFCalibrateInfo.PowerIndexOffset[VAR_4] = 0;
  VAR_2->RFCalibrateInfo.DeltaPowerIndex[VAR_4] = 0;
  VAR_2->RFCalibrateInfo.DeltaPowerIndexLast[VAR_4] = 0;
  VAR_2->RFCalibrateInfo.PowerIndexOffset[VAR_4] = 0;


  VAR_2->Absolute_OFDMSwingIdx[VAR_4] = 0;
  VAR_2->Remnant_OFDMSwingIdx[VAR_4] = 0;
 }


 VAR_2->Modify_TxAGC_Flag_PathA = 0;

 VAR_2->Modify_TxAGC_Flag_PathB = 0;
 VAR_2->Remnant_CCKSwingIdx = 0;
 VAR_2->RFCalibrateInfo.ThermalValue = VAR_3->EEPROMThermalMeter;
 VAR_2->RFCalibrateInfo.ThermalValue_IQK = VAR_3->EEPROMThermalMeter;
 VAR_2->RFCalibrateInfo.ThermalValue_LCK = VAR_3->EEPROMThermalMeter;
}
