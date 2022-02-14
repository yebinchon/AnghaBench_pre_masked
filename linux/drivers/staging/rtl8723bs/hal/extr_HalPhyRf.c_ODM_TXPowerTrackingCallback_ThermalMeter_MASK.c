
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct TYPE_11__ {int bTXPowerTrackingInit; size_t* ThermalValue_AVG; size_t ThermalValue_AVG_index; size_t ThermalValue; size_t ThermalValue_LCK; size_t ThermalValue_IQK; size_t* DeltaPowerIndexLast; size_t* DeltaPowerIndex; scalar_t__* PowerIndexOffset; int* OFDM_index; int CCK_index; int bTxPowerChanged; scalar_t__ TXPowercount; scalar_t__ TxPowerTrackControl; scalar_t__ bReloadtxpowerindex; int TXPowerTrackingCallbackCnt; } ;
struct TYPE_13__ {int BbSwingIdxCckBase; int* BbSwingIdxOfdmBase; size_t* Absolute_OFDMSwingIdx; int BbSwingIdxCck; int* BbSwingIdxOfdm; TYPE_1__ RFCalibrateInfo; int Adapter; int DefaultOfdmIndex; } ;
struct hal_com_data {int EEPROMThermalMeter; TYPE_3__ odmpriv; } ;
struct adapter {int dummy; } ;
struct TYPE_12__ {size_t AverageThermalNum; size_t Threshold_IQK; int RfPathCount; int SwingTableSize_OFDM; int SwingTableSize_CCK; int (* ODM_TxPwrTrackSetPwr ) (TYPE_3__*,int ,size_t,size_t) ;int (* PHY_LCCalibrate ) (TYPE_3__*) ;int ThermalRegAddr; int (* GetDeltaSwingTable ) (TYPE_3__*,size_t**,size_t**,size_t**,size_t**) ;} ;
typedef TYPE_2__ TXPWRTRACK_CFG ;
typedef TYPE_3__* PDM_ODM_T ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (TYPE_3__*,int ,int ,char*) ;
 scalar_t__ FUNC_3 (int ,size_t,int ,int) ;
 size_t VAR_5 ;
 int FUNC_4 (TYPE_3__*,size_t**,size_t**,size_t**,size_t**) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,size_t,size_t) ;
 int FUNC_7 (TYPE_3__*,int ,size_t,size_t) ;

void FUNC_8(struct adapter *VAR_6)
{

 struct hal_com_data *VAR_7 = FUNC_1(VAR_6);
 PDM_ODM_T VAR_8 = &VAR_7->odmpriv;

 u8 VAR_9 = 0, VAR_10, VAR_11, VAR_12, VAR_13 = 0, VAR_14 = 0;
 u8 VAR_15 = 0;
 u32 VAR_16 = 0;

 u8 VAR_17 = 0;
 u8 VAR_18 = 0;

 TXPWRTRACK_CFG VAR_19;



 u8 *VAR_20;
 u8 *VAR_21;
 u8 *VAR_22;
 u8 *VAR_23;



 FUNC_0(VAR_8, &VAR_19);

 (*VAR_19.GetDeltaSwingTable)(
  VAR_8,
  (u8 **)&VAR_20,
  (u8 **)&VAR_21,
  (u8 **)&VAR_22,
  (u8 **)&VAR_23
 );


 VAR_8->RFCalibrateInfo.TXPowerTrackingCallbackCnt++;
 VAR_8->RFCalibrateInfo.bTXPowerTrackingInit = 1;

 FUNC_2(
  VAR_8,
  VAR_1,
  VAR_2,
  (
   "===>ODM_TXPowerTrackingCallback_ThermalMeter,\npDM_Odm->BbSwingIdxCckBase: %d, pDM_Odm->BbSwingIdxOfdmBase[A]: %d, pDM_Odm->DefaultOfdmIndex: %d\n",
   VAR_8->BbSwingIdxCckBase,
   VAR_8->BbSwingIdxOfdmBase[VAR_3],
   VAR_8->DefaultOfdmIndex
  )
 );

 VAR_9 = (u8)FUNC_3(VAR_8->Adapter, VAR_3, VAR_19.ThermalRegAddr, 0xfc00);
 if (
  !VAR_8->RFCalibrateInfo.TxPowerTrackControl ||
  VAR_7->EEPROMThermalMeter == 0 ||
  VAR_7->EEPROMThermalMeter == 0xFF
 )
  return;



 if (VAR_8->RFCalibrateInfo.bReloadtxpowerindex)
  FUNC_2(
   VAR_8,
   VAR_1, VAR_2,
   ("reload ofdm index for band switch\n")
  );



 VAR_8->RFCalibrateInfo.ThermalValue_AVG[VAR_8->RFCalibrateInfo.ThermalValue_AVG_index] = VAR_9;
 VAR_8->RFCalibrateInfo.ThermalValue_AVG_index++;
 if (VAR_8->RFCalibrateInfo.ThermalValue_AVG_index == VAR_19.AverageThermalNum)
  VAR_8->RFCalibrateInfo.ThermalValue_AVG_index = 0;

 for (VAR_14 = 0; VAR_14 < VAR_19.AverageThermalNum; VAR_14++) {
  if (VAR_8->RFCalibrateInfo.ThermalValue_AVG[VAR_14]) {
   VAR_16 += VAR_8->RFCalibrateInfo.ThermalValue_AVG[VAR_14];
   VAR_15++;
  }
 }


 if (VAR_15) {
  VAR_9 = (u8)(VAR_16 / VAR_15);
  FUNC_2(
   VAR_8,
   VAR_1,
   VAR_2,
   (
    "AVG Thermal Meter = 0x%X, EFUSE Thermal Base = 0x%X\n",
    VAR_9,
    VAR_7->EEPROMThermalMeter
   )
  );
 }



 VAR_10 =
  (VAR_9 > VAR_8->RFCalibrateInfo.ThermalValue) ?
  (VAR_9 - VAR_8->RFCalibrateInfo.ThermalValue) :
  (VAR_8->RFCalibrateInfo.ThermalValue - VAR_9);
 VAR_11 =
  (VAR_9 > VAR_8->RFCalibrateInfo.ThermalValue_LCK) ?
  (VAR_9 - VAR_8->RFCalibrateInfo.ThermalValue_LCK) :
  (VAR_8->RFCalibrateInfo.ThermalValue_LCK - VAR_9);
 VAR_12 =
  (VAR_9 > VAR_8->RFCalibrateInfo.ThermalValue_IQK) ?
  (VAR_9 - VAR_8->RFCalibrateInfo.ThermalValue_IQK) :
  (VAR_8->RFCalibrateInfo.ThermalValue_IQK - VAR_9);

 FUNC_2(
  VAR_8,
  VAR_1,
  VAR_2,
  (
   "(delta, delta_LCK, delta_IQK) = (%d, %d, %d)\n",
   VAR_10,
   VAR_11,
   VAR_12
  )
 );



 if (VAR_11 >= VAR_19.Threshold_IQK) {
  FUNC_2(
   VAR_8,
   VAR_1,
   VAR_2,
   (
    "delta_LCK(%d) >= Threshold_IQK(%d)\n",
    VAR_11,
    VAR_19.Threshold_IQK
   )
  );
  VAR_8->RFCalibrateInfo.ThermalValue_LCK = VAR_9;
  if (VAR_19.PHY_LCCalibrate)
   (*VAR_19.PHY_LCCalibrate)(VAR_8);
 }


 if (VAR_10 > 0 && VAR_8->RFCalibrateInfo.TxPowerTrackControl) {

  VAR_10 =
   VAR_9 > VAR_7->EEPROMThermalMeter ?
   (VAR_9 - VAR_7->EEPROMThermalMeter) :
   (VAR_7->EEPROMThermalMeter - VAR_9);

  if (VAR_10 >= VAR_5)
   VAR_10 = VAR_5 - 1;


  if (VAR_9 > VAR_7->EEPROMThermalMeter) {
   FUNC_2(
    VAR_8,
    VAR_1,
    VAR_2,
    (
     "deltaSwingTableIdx_TUP_A[%d] = %d\n",
     VAR_10,
     VAR_20[VAR_10]
    )
   );
   VAR_8->RFCalibrateInfo.DeltaPowerIndexLast[VAR_3] =
    VAR_8->RFCalibrateInfo.DeltaPowerIndex[VAR_3];
   VAR_8->RFCalibrateInfo.DeltaPowerIndex[VAR_3] =
    VAR_20[VAR_10];


   VAR_8->Absolute_OFDMSwingIdx[VAR_3] =
    VAR_20[VAR_10];

   FUNC_2(
    VAR_8,
    VAR_1,
    VAR_2,
    (
     "******Temp is higher and pDM_Odm->Absolute_OFDMSwingIdx[ODM_RF_PATH_A] = %d\n",
     VAR_8->Absolute_OFDMSwingIdx[VAR_3]
    )
   );

   if (VAR_19.RfPathCount > 1) {
    FUNC_2(
     VAR_8,
     VAR_1,
     VAR_2,
     (
      "deltaSwingTableIdx_TUP_B[%d] = %d\n",
      VAR_10,
      VAR_22[VAR_10]
     )
    );
    VAR_8->RFCalibrateInfo.DeltaPowerIndexLast[VAR_4] =
     VAR_8->RFCalibrateInfo.DeltaPowerIndex[VAR_4];
    VAR_8->RFCalibrateInfo.DeltaPowerIndex[VAR_4] =
     VAR_22[VAR_10];


    VAR_8->Absolute_OFDMSwingIdx[VAR_4] =
     VAR_22[VAR_10];
    FUNC_2(
     VAR_8,
     VAR_1,
     VAR_2,
     (
      "******Temp is higher and pDM_Odm->Absolute_OFDMSwingIdx[ODM_RF_PATH_B] = %d\n",
      VAR_8->Absolute_OFDMSwingIdx[VAR_4]
     )
    );
   }

  } else {
   FUNC_2(
    VAR_8,
    VAR_1,
    VAR_2,
    (
     "deltaSwingTableIdx_TDOWN_A[%d] = %d\n",
     VAR_10,
     VAR_21[VAR_10]
    )
   );

   VAR_8->RFCalibrateInfo.DeltaPowerIndexLast[VAR_3] =
    VAR_8->RFCalibrateInfo.DeltaPowerIndex[VAR_3];
   VAR_8->RFCalibrateInfo.DeltaPowerIndex[VAR_3] =
    -1 * VAR_21[VAR_10];


   VAR_8->Absolute_OFDMSwingIdx[VAR_3] =
    -1 * VAR_21[VAR_10];

   FUNC_2(
    VAR_8,
    VAR_1,
    VAR_2,
    (
     "******Temp is lower and pDM_Odm->Absolute_OFDMSwingIdx[ODM_RF_PATH_A] = %d\n",
     VAR_8->Absolute_OFDMSwingIdx[VAR_3]
    )
   );

   if (VAR_19.RfPathCount > 1) {
    FUNC_2(
     VAR_8,
     VAR_1,
     VAR_2,
     (
      "deltaSwingTableIdx_TDOWN_B[%d] = %d\n",
      VAR_10,
      VAR_23[VAR_10]
     )
    );

    VAR_8->RFCalibrateInfo.DeltaPowerIndexLast[VAR_4] =
     VAR_8->RFCalibrateInfo.DeltaPowerIndex[VAR_4];
    VAR_8->RFCalibrateInfo.DeltaPowerIndex[VAR_4] =
     -1 * VAR_23[VAR_10];


    VAR_8->Absolute_OFDMSwingIdx[VAR_4] =
     -1 * VAR_23[VAR_10];

    FUNC_2(
     VAR_8,
     VAR_1,
     VAR_2,
     (
      "******Temp is lower and pDM_Odm->Absolute_OFDMSwingIdx[ODM_RF_PATH_B] = %d\n",
      VAR_8->Absolute_OFDMSwingIdx[VAR_4]
     )
    );
   }
  }

  for (VAR_13 = VAR_3; VAR_13 < VAR_19.RfPathCount; VAR_13++) {
   FUNC_2(
    VAR_8,
    VAR_1,
    VAR_2,
    (
     "\n\n ================================ [Path-%c] Calculating PowerIndexOffset ================================\n",
     (VAR_13 == VAR_3 ? 'A' : 'B')
    )
   );

   if (
    VAR_8->RFCalibrateInfo.DeltaPowerIndex[VAR_13] ==
    VAR_8->RFCalibrateInfo.DeltaPowerIndexLast[VAR_13]
   )
    VAR_8->RFCalibrateInfo.PowerIndexOffset[VAR_13] = 0;
   else
    VAR_8->RFCalibrateInfo.PowerIndexOffset[VAR_13] = VAR_8->RFCalibrateInfo.DeltaPowerIndex[VAR_13] - VAR_8->RFCalibrateInfo.DeltaPowerIndexLast[VAR_13];

   FUNC_2(
    VAR_8,
    VAR_1,
    VAR_2,
    (
     "[Path-%c] PowerIndexOffset(%d) = DeltaPowerIndex(%d) - DeltaPowerIndexLast(%d)\n",
     (
      VAR_13 == VAR_3 ? 'A' : 'B'),
      VAR_8->RFCalibrateInfo.PowerIndexOffset[VAR_13],
      VAR_8->RFCalibrateInfo.DeltaPowerIndex[VAR_13],
      VAR_8->RFCalibrateInfo.DeltaPowerIndexLast[VAR_13]
     )
    );

   VAR_8->RFCalibrateInfo.OFDM_index[VAR_13] =
    VAR_8->BbSwingIdxOfdmBase[VAR_13] +
    VAR_8->RFCalibrateInfo.PowerIndexOffset[VAR_13];

   VAR_8->RFCalibrateInfo.CCK_index =
    VAR_8->BbSwingIdxCckBase +
    VAR_8->RFCalibrateInfo.PowerIndexOffset[VAR_13];

   VAR_8->BbSwingIdxCck =
    VAR_8->RFCalibrateInfo.CCK_index;

   VAR_8->BbSwingIdxOfdm[VAR_13] =
    VAR_8->RFCalibrateInfo.OFDM_index[VAR_13];


   FUNC_2(
    VAR_8,
    VAR_1,
    VAR_2,
    (
     "The 'CCK' final index(%d) = BaseIndex(%d) + PowerIndexOffset(%d)\n",
     VAR_8->BbSwingIdxCck,
     VAR_8->BbSwingIdxCckBase,
     VAR_8->RFCalibrateInfo.PowerIndexOffset[VAR_13]
    )
   );
   FUNC_2(
    VAR_8,
    VAR_1,
    VAR_2,
    (
     "The 'OFDM' final index(%d) = BaseIndex[%c](%d) + PowerIndexOffset(%d)\n",
     VAR_8->BbSwingIdxOfdm[VAR_13],
     (VAR_13 == VAR_3 ? 'A' : 'B'),
     VAR_8->BbSwingIdxOfdmBase[VAR_13],
     VAR_8->RFCalibrateInfo.PowerIndexOffset[VAR_13]
    )
   );


   if (VAR_8->RFCalibrateInfo.OFDM_index[VAR_13] > VAR_19.SwingTableSize_OFDM-1)
    VAR_8->RFCalibrateInfo.OFDM_index[VAR_13] = VAR_19.SwingTableSize_OFDM-1;
   else if (VAR_8->RFCalibrateInfo.OFDM_index[VAR_13] < VAR_17)
    VAR_8->RFCalibrateInfo.OFDM_index[VAR_13] = VAR_17;
  }
  FUNC_2(
   VAR_8,
   VAR_1,
   VAR_2,
   ("\n\n ========================================================================================================\n")
  );
  if (VAR_8->RFCalibrateInfo.CCK_index > VAR_19.SwingTableSize_CCK-1)
   VAR_8->RFCalibrateInfo.CCK_index = VAR_19.SwingTableSize_CCK-1;


 } else {
  FUNC_2(
   VAR_8,
   VAR_1,
   VAR_2,
   (
    "The thermal meter is unchanged or TxPowerTracking OFF(%d): ThermalValue: %d , pDM_Odm->RFCalibrateInfo.ThermalValue: %d\n",
    VAR_8->RFCalibrateInfo.TxPowerTrackControl,
    VAR_9,
    VAR_8->RFCalibrateInfo.ThermalValue
   )
  );

   for (VAR_13 = VAR_3; VAR_13 < VAR_19.RfPathCount; VAR_13++)
    VAR_8->RFCalibrateInfo.PowerIndexOffset[VAR_13] = 0;
 }
 FUNC_2(
  VAR_8,
  VAR_1,
  VAR_2,
  (
   "TxPowerTracking: [CCK] Swing Current Index: %d, Swing Base Index: %d\n",
   VAR_8->RFCalibrateInfo.CCK_index,
   VAR_8->BbSwingIdxCckBase
  )
 );


 for (VAR_13 = VAR_3; VAR_13 < VAR_19.RfPathCount; VAR_13++) {
  FUNC_2(
   VAR_8,
   VAR_1,
   VAR_2,
   (
    "TxPowerTracking: [OFDM] Swing Current Index: %d, Swing Base Index[%c]: %d\n",
    VAR_8->RFCalibrateInfo.OFDM_index[VAR_13],
    (VAR_13 == VAR_3 ? 'A' : 'B'),
    VAR_8->BbSwingIdxOfdmBase[VAR_13]
   )
  );
 }

 if (
  (VAR_8->RFCalibrateInfo.PowerIndexOffset[VAR_3] != 0 ||
   VAR_8->RFCalibrateInfo.PowerIndexOffset[VAR_4] != 0) &&
   VAR_8->RFCalibrateInfo.TxPowerTrackControl
  ) {


  VAR_8->RFCalibrateInfo.bTxPowerChanged = 1;





  if (VAR_9 > VAR_8->RFCalibrateInfo.ThermalValue) {
   FUNC_2(
    VAR_8,
    VAR_1,
    VAR_2,
    (
     "Temperature Increasing(A): delta_pi: %d , delta_t: %d, Now_t: %d, EFUSE_t: %d, Last_t: %d\n",
     VAR_8->RFCalibrateInfo.PowerIndexOffset[VAR_3],
     VAR_10,
     VAR_9,
     VAR_7->EEPROMThermalMeter,
     VAR_8->RFCalibrateInfo.ThermalValue
    )
   );

   if (VAR_19.RfPathCount > 1)
    FUNC_2(
     VAR_8,
     VAR_1,
     VAR_2,
     (
      "Temperature Increasing(B): delta_pi: %d , delta_t: %d, Now_t: %d, EFUSE_t: %d, Last_t: %d\n",
      VAR_8->RFCalibrateInfo.PowerIndexOffset[VAR_4],
      VAR_10,
      VAR_9,
      VAR_7->EEPROMThermalMeter,
      VAR_8->RFCalibrateInfo.ThermalValue
     )
    );

  } else if (VAR_9 < VAR_8->RFCalibrateInfo.ThermalValue) {
   FUNC_2(
    VAR_8,
    VAR_1,
    VAR_2,
    (
     "Temperature Decreasing(A): delta_pi: %d , delta_t: %d, Now_t: %d, EFUSE_t: %d, Last_t: %d\n",
     VAR_8->RFCalibrateInfo.PowerIndexOffset[VAR_3],
     VAR_10,
     VAR_9,
     VAR_7->EEPROMThermalMeter,
     VAR_8->RFCalibrateInfo.ThermalValue
    )
   );

   if (VAR_19.RfPathCount > 1)
    FUNC_2(
     VAR_8,
     VAR_1,
     VAR_2,
     (
      "Temperature Decreasing(B): delta_pi: %d , delta_t: %d, Now_t: %d, EFUSE_t: %d, Last_t: %d\n",
      VAR_8->RFCalibrateInfo.PowerIndexOffset[VAR_4],
      VAR_10,
      VAR_9,
      VAR_7->EEPROMThermalMeter,
      VAR_8->RFCalibrateInfo.ThermalValue
     )
    );

  }

  if (VAR_9 > VAR_7->EEPROMThermalMeter) {
   FUNC_2(
    VAR_8,
    VAR_1,
    VAR_2,
    (
     "Temperature(%d) higher than PG value(%d)\n",
     VAR_9,
     VAR_7->EEPROMThermalMeter
    )
   );

   FUNC_2(
    VAR_8,
    VAR_1,
    VAR_2,
    ("**********Enter POWER Tracking MIX_MODE**********\n")
   );
   for (VAR_13 = VAR_3; VAR_13 < VAR_19.RfPathCount; VAR_13++)
     (*VAR_19.ODM_TxPwrTrackSetPwr)(VAR_8, VAR_0, VAR_13, 0);
  } else {
   FUNC_2(
    VAR_8,
    VAR_1,
    VAR_2,
    (
     "Temperature(%d) lower than PG value(%d)\n",
     VAR_9,
     VAR_7->EEPROMThermalMeter
    )
   );

   FUNC_2(
    VAR_8,
    VAR_1,
    VAR_2,
    ("**********Enter POWER Tracking MIX_MODE**********\n")
   );
   for (VAR_13 = VAR_3; VAR_13 < VAR_19.RfPathCount; VAR_13++)
    (*VAR_19.ODM_TxPwrTrackSetPwr)(VAR_8, VAR_0, VAR_13, VAR_18);
  }


  VAR_8->BbSwingIdxCckBase = VAR_8->BbSwingIdxCck;
  for (VAR_13 = VAR_3; VAR_13 < VAR_19.RfPathCount; VAR_13++)
   VAR_8->BbSwingIdxOfdmBase[VAR_13] = VAR_8->BbSwingIdxOfdm[VAR_13];

  FUNC_2(
   VAR_8,
   VAR_1, VAR_2,
   (
    "pDM_Odm->RFCalibrateInfo.ThermalValue = %d ThermalValue = %d\n",
    VAR_8->RFCalibrateInfo.ThermalValue,
    VAR_9
   )
  );


  VAR_8->RFCalibrateInfo.ThermalValue = VAR_9;
 }

 FUNC_2(
  VAR_8,
  VAR_1,
  VAR_2,
  ("<===ODM_TXPowerTrackingCallback_ThermalMeter\n")
 );

 VAR_8->RFCalibrateInfo.TXPowercount = 0;
}
