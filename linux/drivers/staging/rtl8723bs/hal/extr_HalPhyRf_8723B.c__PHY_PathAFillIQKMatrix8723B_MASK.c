
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int*** TxIQC_8723B; int*** RxIQC_8723B; } ;
struct TYPE_5__ {int Adapter; TYPE_1__ RFCalibrateInfo; } ;
struct hal_com_data {TYPE_2__ odmpriv; } ;
struct adapter {int dummy; } ;
typedef int s32 ;
typedef TYPE_1__* PODM_RF_CAL_T ;
typedef TYPE_2__* PDM_ODM_T ;


 int FUNC_0 (int) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,int ,int ,char*) ;
 size_t VAR_8 ;
 int FUNC_3 (int ,void*,int ) ;
 int FUNC_4 (int ,void*,int,int) ;
 size_t VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;

__attribute__((used)) static void FUNC_5(
 struct adapter *VAR_16,
 bool VAR_17,
 s32 VAR_18[][8],
 u8 VAR_19,
 bool VAR_20
)
{
 u32 VAR_21, VAR_22, VAR_23, VAR_24;
 s32 VAR_25, VAR_26;
 struct hal_com_data *VAR_27 = FUNC_1(VAR_16);
 PDM_ODM_T VAR_28 = &VAR_27->odmpriv;

 PODM_RF_CAL_T VAR_29 = &(VAR_28->RFCalibrateInfo);

 FUNC_2(VAR_28, VAR_6, VAR_7, ("Path A IQ Calibration %s !\n", (VAR_17)?"Success":"Failed"));

 if (VAR_19 == 0xFF)
  return;

 else if (VAR_17) {
  VAR_21 = (FUNC_3(VAR_28->Adapter, VAR_14, VAR_10) >> 22) & 0x3FF;

  VAR_22 = VAR_18[VAR_19][0];
  if ((VAR_22 & 0x00000200) != 0)
   VAR_22 = VAR_22 | 0xFFFFFC00;
  VAR_23 = (VAR_22 * VAR_21) >> 8;
  FUNC_2(VAR_28, VAR_6, VAR_7, ("X = 0x%x, TX0_A = 0x%x, Oldval_0 0x%x\n", VAR_22, VAR_23, VAR_21));
  FUNC_4(VAR_28->Adapter, VAR_14, 0x3FF, VAR_23);

  FUNC_4(VAR_28->Adapter, VAR_11, FUNC_0(31), ((VAR_22*VAR_21>>7) & 0x1));

  VAR_25 = VAR_18[VAR_19][1];
  if ((VAR_25 & 0x00000200) != 0)
   VAR_25 = VAR_25 | 0xFFFFFC00;


  VAR_26 = (VAR_25 * VAR_21) >> 8;
  FUNC_2(VAR_28, VAR_6, VAR_7, ("Y = 0x%x, TX = 0x%x\n", VAR_25, VAR_26));
  FUNC_4(VAR_28->Adapter, VAR_15, 0xF0000000, ((VAR_26&0x3C0)>>6));
  VAR_29->TxIQC_8723B[VAR_8][VAR_3][VAR_5] = VAR_15;
  VAR_29->TxIQC_8723B[VAR_8][VAR_3][VAR_9] = FUNC_3(VAR_28->Adapter, VAR_15, VAR_10);

  FUNC_4(VAR_28->Adapter, VAR_14, 0x003F0000, (VAR_26&0x3F));
  VAR_29->TxIQC_8723B[VAR_8][VAR_2][VAR_5] = VAR_14;
  VAR_29->TxIQC_8723B[VAR_8][VAR_2][VAR_9] = FUNC_3(VAR_28->Adapter, VAR_14, VAR_10);

  FUNC_4(VAR_28->Adapter, VAR_11, FUNC_0(29), ((VAR_25*VAR_21>>7) & 0x1));
  VAR_29->TxIQC_8723B[VAR_8][VAR_1][VAR_5] = VAR_11;
  VAR_29->TxIQC_8723B[VAR_8][VAR_1][VAR_9] = FUNC_3(VAR_28->Adapter, VAR_11, VAR_10);

  if (VAR_20) {
   FUNC_2(VAR_28, VAR_6, VAR_7, ("_PHY_PathAFillIQKMatrix8723B only Tx OK\n"));


   VAR_29->RxIQC_8723B[VAR_8][VAR_4][VAR_5] = VAR_12;
   VAR_29->RxIQC_8723B[VAR_8][VAR_4][VAR_9] = 0xfffffff & FUNC_3(VAR_28->Adapter, VAR_12, VAR_10);
   VAR_29->RxIQC_8723B[VAR_8][VAR_0][VAR_5] = VAR_13;

   VAR_29->RxIQC_8723B[VAR_8][VAR_0][VAR_9] = 0x40000100;
   return;
  }

  VAR_24 = VAR_18[VAR_19][2];


  FUNC_4(VAR_28->Adapter, VAR_13, 0x3FF, VAR_24);
  VAR_24 = VAR_18[VAR_19][3] & 0x3F;
  FUNC_4(VAR_28->Adapter, VAR_13, 0xFC00, VAR_24);
  VAR_29->RxIQC_8723B[VAR_8][VAR_0][VAR_5] = VAR_13;
  VAR_29->RxIQC_8723B[VAR_8][VAR_0][VAR_9] = FUNC_3(VAR_28->Adapter, VAR_13, VAR_10);

  VAR_24 = (VAR_18[VAR_19][3] >> 6) & 0xF;
  FUNC_4(VAR_28->Adapter, VAR_12, 0xF0000000, VAR_24);
  VAR_29->RxIQC_8723B[VAR_8][VAR_4][VAR_5] = VAR_12;
  VAR_29->RxIQC_8723B[VAR_8][VAR_4][VAR_9] = FUNC_3(VAR_28->Adapter, VAR_12, VAR_10);

 }
}
