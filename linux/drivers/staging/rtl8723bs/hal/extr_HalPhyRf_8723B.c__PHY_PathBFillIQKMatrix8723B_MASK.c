
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
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;

__attribute__((used)) static void FUNC_5(
 struct adapter *VAR_19,
 bool VAR_20,
 s32 VAR_21[][8],
 u8 VAR_22,
 bool VAR_23
)
{
 u32 VAR_24, VAR_25, VAR_26, VAR_27;
 s32 VAR_28, VAR_29;
 struct hal_com_data *VAR_30 = FUNC_1(VAR_19);
 PDM_ODM_T VAR_31 = &VAR_30->odmpriv;

 PODM_RF_CAL_T VAR_32 = &(VAR_31->RFCalibrateInfo);

 FUNC_2(VAR_31, VAR_6, VAR_7, ("Path B IQ Calibration %s !\n", (VAR_20)?"Success":"Failed"));

 if (VAR_22 == 0xFF)
  return;

 else if (VAR_20) {
  VAR_24 = (FUNC_3(VAR_31->Adapter, VAR_16, VAR_10) >> 22) & 0x3FF;

  VAR_25 = VAR_21[VAR_22][4];
  if ((VAR_25 & 0x00000200) != 0)
   VAR_25 = VAR_25 | 0xFFFFFC00;
  VAR_26 = (VAR_25 * VAR_24) >> 8;
  FUNC_2(VAR_31, VAR_6, VAR_7, ("X = 0x%x, TX1_A = 0x%x\n", VAR_25, VAR_26));

  FUNC_4(VAR_31->Adapter, VAR_16, 0x3FF, VAR_26);

  FUNC_4(VAR_31->Adapter, VAR_11, FUNC_0(27), ((VAR_25*VAR_24>>7) & 0x1));

  VAR_28 = VAR_21[VAR_22][5];
  if ((VAR_28 & 0x00000200) != 0)
   VAR_28 = VAR_28 | 0xFFFFFC00;

  VAR_29 = (VAR_28 * VAR_24) >> 8;
  FUNC_2(VAR_31, VAR_6, VAR_7, ("Y = 0x%x, TX1_C = 0x%x\n", VAR_28, VAR_29));


  FUNC_4(VAR_31->Adapter, VAR_18, 0xF0000000, ((VAR_29&0x3C0)>>6));


  VAR_32->TxIQC_8723B[VAR_8][VAR_3][VAR_5] = VAR_17;
  VAR_32->TxIQC_8723B[VAR_8][VAR_3][VAR_9] = FUNC_3(VAR_31->Adapter, VAR_18, VAR_10);

  FUNC_4(VAR_31->Adapter, VAR_16, 0x003F0000, (VAR_29&0x3F));
  VAR_32->TxIQC_8723B[VAR_8][VAR_2][VAR_5] = VAR_14;
  VAR_32->TxIQC_8723B[VAR_8][VAR_2][VAR_9] = FUNC_3(VAR_31->Adapter, VAR_16, VAR_10);

  FUNC_4(VAR_31->Adapter, VAR_11, FUNC_0(25), ((VAR_28*VAR_24>>7) & 0x1));
  VAR_32->TxIQC_8723B[VAR_8][VAR_1][VAR_5] = VAR_11;
  VAR_32->TxIQC_8723B[VAR_8][VAR_1][VAR_9] = FUNC_3(VAR_31->Adapter, VAR_11, VAR_10);

  if (VAR_23) {
   FUNC_2(VAR_31, VAR_6, VAR_7, ("_PHY_PathBFillIQKMatrix8723B only Tx OK\n"));

   VAR_32->RxIQC_8723B[VAR_8][VAR_0][VAR_5] = VAR_13;

   VAR_32->RxIQC_8723B[VAR_8][VAR_0][VAR_9] = 0x40000100;
   VAR_32->RxIQC_8723B[VAR_8][VAR_4][VAR_5] = VAR_12;
   VAR_32->RxIQC_8723B[VAR_8][VAR_4][VAR_9] = 0x0fffffff & FUNC_3(VAR_31->Adapter, VAR_12, VAR_10);
   return;
  }


  VAR_27 = VAR_21[VAR_22][6];
  FUNC_4(VAR_31->Adapter, VAR_15, 0x3FF, VAR_27);
  VAR_27 = VAR_21[VAR_22][7] & 0x3F;
  FUNC_4(VAR_31->Adapter, VAR_15, 0xFC00, VAR_27);
  VAR_32->RxIQC_8723B[VAR_8][VAR_0][VAR_5] = VAR_13;
  VAR_32->RxIQC_8723B[VAR_8][VAR_0][VAR_9] = FUNC_3(VAR_31->Adapter, VAR_15, VAR_10);

  VAR_27 = (VAR_21[VAR_22][7] >> 6) & 0xF;

  VAR_32->RxIQC_8723B[VAR_8][VAR_4][VAR_5] = VAR_12;
  VAR_32->RxIQC_8723B[VAR_8][VAR_4][VAR_9] = (VAR_27 << 28)|(FUNC_3(VAR_31->Adapter, VAR_12, VAR_10)&0x0fffffff);
 }
}
