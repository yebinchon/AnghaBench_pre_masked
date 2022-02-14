
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct hal_com_data {int CurrentChannel; } ;
struct adapter {int dummy; } ;
struct TYPE_8__ {TYPE_2__* IQKMatrixRegSetting; } ;
struct TYPE_10__ {int TxRate; int DefaultOfdmIndex; int* Remnant_OFDMSwingIdx; int* Absolute_OFDMSwingIdx; int Modify_TxAGC_Flag_PathA; int Modify_TxAGC_Flag_PathA_CCK; int DefaultCckIndex; scalar_t__ BbSwingIdxCck; int Remnant_CCKSwingIdx; TYPE_1__ RFCalibrateInfo; int * pChannel; struct adapter* Adapter; scalar_t__* pForcedDataRate; } ;
struct TYPE_9__ {int ** Value; } ;
typedef scalar_t__ PWRTRACK_METHOD ;
typedef TYPE_3__* PDM_ODM_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (TYPE_3__*,int ,int ,char*) ;
 int VAR_18 ;
 int FUNC_3 (struct adapter*,int,int ,int ) ;
 scalar_t__ VAR_19 ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int,int,int ,int ) ;

void FUNC_6(
 PDM_ODM_T VAR_20,
 PWRTRACK_METHOD VAR_21,
 u8 VAR_22,
 u8 VAR_23
)
{
 struct adapter *VAR_24 = VAR_20->Adapter;
 struct hal_com_data *VAR_25 = FUNC_0(VAR_24);
 u8 VAR_26 = 34;
 u8 VAR_27 = 28;
 u8 VAR_28 = 0xFF;
 u8 VAR_29 = 0;
 u8 VAR_30 = 0;

 {
  u16 VAR_31 = *(VAR_20->pForcedDataRate);

  if (!VAR_31) {
   if (VAR_20->TxRate != 0xFF)
    VAR_28 = FUNC_1(VAR_20->TxRate);
  } else
   VAR_28 = (u8)VAR_31;

 }

 FUNC_2(VAR_20, VAR_16, VAR_17, ("===>ODM_TxPwrTrackSetPwr8723B\n"));

 if (VAR_28 != 0xFF) {

  if ((VAR_28 >= VAR_5) && (VAR_28 <= VAR_4))
   VAR_27 = 28;

  else if ((VAR_28 >= VAR_8) && (VAR_28 <= VAR_6))
   VAR_26 = 36;
  else if (VAR_28 == VAR_7)
   VAR_26 = 34;


  else if ((VAR_28 >= VAR_9) && (VAR_28 <= VAR_10))
   VAR_26 = 38;
  else if ((VAR_28 >= VAR_11) && (VAR_28 <= VAR_12))
   VAR_26 = 36;
  else if ((VAR_28 >= VAR_13) && (VAR_28 <= VAR_14))
   VAR_26 = 34;

  else
   VAR_26 = VAR_20->DefaultOfdmIndex;
 }
 FUNC_2(VAR_20, VAR_16, VAR_17, ("TxRate = 0x%x, PwrTrackingLimit =%d\n", VAR_28, VAR_26));

 if (VAR_21 == VAR_19) {
  struct adapter *VAR_32 = VAR_20->Adapter;

  FUNC_2(VAR_20, VAR_16, VAR_17, ("odm_TxPwrTrackSetPwr8723B CH =%d\n", *(VAR_20->pChannel)));

  VAR_20->Remnant_OFDMSwingIdx[VAR_22] = VAR_20->Absolute_OFDMSwingIdx[VAR_22];

  VAR_20->Modify_TxAGC_Flag_PathA = 1;
  VAR_20->Modify_TxAGC_Flag_PathA_CCK = 1;

  FUNC_3(VAR_32, VAR_22, VAR_25->CurrentChannel, VAR_1);
  FUNC_3(VAR_32, VAR_22, VAR_25->CurrentChannel, VAR_18);
  FUNC_3(VAR_32, VAR_22, VAR_25->CurrentChannel, VAR_3);
 } else if (VAR_21 == VAR_0) {
  VAR_29 = VAR_20->DefaultOfdmIndex + VAR_20->Absolute_OFDMSwingIdx[VAR_22];
  VAR_30 = VAR_20->DefaultCckIndex + VAR_20->Absolute_OFDMSwingIdx[VAR_22];


  if (VAR_29 >= VAR_26)
   VAR_29 = VAR_26;
  else if (VAR_29 <= 0)
   VAR_29 = 0;

  if (VAR_30 >= VAR_2)
   VAR_30 = VAR_2-1;
  else if (VAR_20->BbSwingIdxCck <= 0)
   VAR_30 = 0;

  FUNC_5(VAR_20, VAR_29, VAR_22,
   VAR_20->RFCalibrateInfo.IQKMatrixRegSetting[VAR_23].Value[0][0],
   VAR_20->RFCalibrateInfo.IQKMatrixRegSetting[VAR_23].Value[0][1]);

  FUNC_4(VAR_20, VAR_30);

 } else if (VAR_21 == VAR_15) {
  FUNC_2(VAR_20, VAR_16, VAR_17,
   ("pDM_Odm->DefaultOfdmIndex =%d,  pDM_Odm->DefaultCCKIndex =%d, pDM_Odm->Absolute_OFDMSwingIdx[RFPath]=%d, RF_Path = %d\n",
   VAR_20->DefaultOfdmIndex, VAR_20->DefaultCckIndex, VAR_20->Absolute_OFDMSwingIdx[VAR_22], VAR_22));

  VAR_29 = VAR_20->DefaultOfdmIndex + VAR_20->Absolute_OFDMSwingIdx[VAR_22];
  VAR_30 = VAR_20->DefaultCckIndex + VAR_20->Absolute_OFDMSwingIdx[VAR_22];

  if (VAR_29 > VAR_26) {
   VAR_20->Remnant_OFDMSwingIdx[VAR_22] = VAR_29 - VAR_26;

   FUNC_5(VAR_20, VAR_26, VAR_22,
    VAR_20->RFCalibrateInfo.IQKMatrixRegSetting[VAR_23].Value[0][0],
    VAR_20->RFCalibrateInfo.IQKMatrixRegSetting[VAR_23].Value[0][1]);

   VAR_20->Modify_TxAGC_Flag_PathA = 1;
   FUNC_3(VAR_24, VAR_22, VAR_25->CurrentChannel, VAR_18);
   FUNC_3(VAR_24, VAR_22, VAR_25->CurrentChannel, VAR_3);

   FUNC_2(VAR_20, VAR_16, VAR_17,
    ("******Path_A Over BBSwing Limit , PwrTrackingLimit = %d , Remnant TxAGC Value = %d\n",
    VAR_26, VAR_20->Remnant_OFDMSwingIdx[VAR_22]));
  } else if (VAR_29 <= 0) {
   VAR_20->Remnant_OFDMSwingIdx[VAR_22] = VAR_29;

   FUNC_5(VAR_20, 0, VAR_22,
    VAR_20->RFCalibrateInfo.IQKMatrixRegSetting[VAR_23].Value[0][0],
    VAR_20->RFCalibrateInfo.IQKMatrixRegSetting[VAR_23].Value[0][1]);

   VAR_20->Modify_TxAGC_Flag_PathA = 1;
   FUNC_3(VAR_24, VAR_22, VAR_25->CurrentChannel, VAR_18);
   FUNC_3(VAR_24, VAR_22, VAR_25->CurrentChannel, VAR_3);

   FUNC_2(VAR_20, VAR_16, VAR_17,
    ("******Path_A Lower then BBSwing lower bound  0 , Remnant TxAGC Value = %d\n",
    VAR_20->Remnant_OFDMSwingIdx[VAR_22]));
  } else {
   FUNC_5(VAR_20, VAR_29, VAR_22,
    VAR_20->RFCalibrateInfo.IQKMatrixRegSetting[VAR_23].Value[0][0],
    VAR_20->RFCalibrateInfo.IQKMatrixRegSetting[VAR_23].Value[0][1]);

   FUNC_2(VAR_20, VAR_16, VAR_17,
    ("******Path_A Compensate with BBSwing , Final_OFDM_Swing_Index = %d\n", VAR_29));

   if (VAR_20->Modify_TxAGC_Flag_PathA) {
    VAR_20->Remnant_OFDMSwingIdx[VAR_22] = 0;
    FUNC_3(VAR_24, VAR_22, VAR_25->CurrentChannel, VAR_18);
    FUNC_3(VAR_24, VAR_22, VAR_25->CurrentChannel, VAR_3);
    VAR_20->Modify_TxAGC_Flag_PathA = 0;

    FUNC_2(VAR_20, VAR_16, VAR_17,
     ("******Path_A pDM_Odm->Modify_TxAGC_Flag = false\n"));
   }
  }

  if (VAR_30 > VAR_27) {
   VAR_20->Remnant_CCKSwingIdx = VAR_30 - VAR_27;
   FUNC_4(VAR_20, VAR_27);
   VAR_20->Modify_TxAGC_Flag_PathA_CCK = 1;
   FUNC_3(VAR_24, VAR_22, VAR_25->CurrentChannel, VAR_1);

   FUNC_2(VAR_20, VAR_16, VAR_17,
    ("******Path_A CCK Over Limit , PwrTrackingLimit_CCK = %d , pDM_Odm->Remnant_CCKSwingIdx  = %d\n", VAR_27, VAR_20->Remnant_CCKSwingIdx));
  } else if (VAR_30 <= 0) {
   VAR_20->Remnant_CCKSwingIdx = VAR_30;
   FUNC_4(VAR_20, 0);
   VAR_20->Modify_TxAGC_Flag_PathA_CCK = 1;
   FUNC_3(VAR_24, VAR_22, VAR_25->CurrentChannel, VAR_1);

   FUNC_2(VAR_20, VAR_16, VAR_17,
    ("******Path_A CCK Under Limit , PwrTrackingLimit_CCK = %d , pDM_Odm->Remnant_CCKSwingIdx  = %d\n", 0, VAR_20->Remnant_CCKSwingIdx));
  } else {
   FUNC_4(VAR_20, VAR_30);

   FUNC_2(VAR_20, VAR_16, VAR_17,
    ("******Path_A CCK Compensate with BBSwing , Final_CCK_Swing_Index = %d\n", VAR_30));

   if (VAR_20->Modify_TxAGC_Flag_PathA_CCK) {
    VAR_20->Remnant_CCKSwingIdx = 0;
    FUNC_3(VAR_24, VAR_22, VAR_25->CurrentChannel, VAR_1);
    VAR_20->Modify_TxAGC_Flag_PathA_CCK = 0;

    FUNC_2(VAR_20, VAR_16, VAR_17,
     ("******Path_A pDM_Odm->Modify_TxAGC_Flag_CCK = false\n"));
   }
  }
 } else
  return;
}
