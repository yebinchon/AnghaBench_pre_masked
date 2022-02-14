
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct dm_priv {int bTXPowerTracking; int bTXPowerTrackingInit; int TxPowerTrackControl; scalar_t__ TXPowercount; } ;
struct hal_com_data {int EEPROMThermalMeter; struct dm_priv dmpriv; } ;
struct adapter {int dummy; } ;
struct TYPE_5__ {int CCK_index; int* OFDM_index; scalar_t__* PowerIndexOffset; scalar_t__* DeltaPowerIndexLast; scalar_t__* DeltaPowerIndex; int ThermalValue_LCK; int ThermalValue_IQK; int ThermalValue; } ;
struct TYPE_6__ {int* mp_mode; int DefaultOfdmIndex; int DefaultCckIndex; int BbSwingIdxCckBase; int* BbSwingIdxOfdmBase; TYPE_1__ RFCalibrateInfo; struct adapter* Adapter; } ;
typedef TYPE_2__* PDM_ODM_T ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(PDM_ODM_T VAR_3)
{
 u8 VAR_4 = FUNC_1(VAR_3);
 u8 VAR_5 = 0;
 struct adapter *VAR_6 = VAR_3->Adapter;
 struct hal_com_data *VAR_7 = FUNC_0(VAR_6);


 struct dm_priv *VAR_8 = &VAR_7->dmpriv;

 VAR_8->bTXPowerTracking = 1;
 VAR_8->TXPowercount = 0;
 VAR_8->bTXPowerTrackingInit = 0;

 if (*(VAR_3->mp_mode) != 1)
  VAR_8->TxPowerTrackControl = 1;
 else
  VAR_8->TxPowerTrackControl = 0;





 VAR_3->RFCalibrateInfo.ThermalValue = VAR_7->EEPROMThermalMeter;
 VAR_3->RFCalibrateInfo.ThermalValue_IQK = VAR_7->EEPROMThermalMeter;
 VAR_3->RFCalibrateInfo.ThermalValue_LCK = VAR_7->EEPROMThermalMeter;


 VAR_3->DefaultOfdmIndex = (VAR_4 >= VAR_2) ? 30 : VAR_4;
 VAR_3->DefaultCckIndex = 20;

 VAR_3->BbSwingIdxCckBase = VAR_3->DefaultCckIndex;
 VAR_3->RFCalibrateInfo.CCK_index = VAR_3->DefaultCckIndex;

 for (VAR_5 = VAR_1; VAR_5 < VAR_0; ++VAR_5) {
  VAR_3->BbSwingIdxOfdmBase[VAR_5] = VAR_3->DefaultOfdmIndex;
  VAR_3->RFCalibrateInfo.OFDM_index[VAR_5] = VAR_3->DefaultOfdmIndex;
  VAR_3->RFCalibrateInfo.DeltaPowerIndex[VAR_5] = 0;
  VAR_3->RFCalibrateInfo.DeltaPowerIndexLast[VAR_5] = 0;
  VAR_3->RFCalibrateInfo.PowerIndexOffset[VAR_5] = 0;
 }

}
