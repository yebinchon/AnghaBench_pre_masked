
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int Cnt_Fast_Fsync; int Cnt_SB_Search_fail; int Cnt_OFDM_CCA; int Cnt_Parity_Fail; int Cnt_Rate_Illegal; int Cnt_Crc8_fail; int Cnt_Mcs_fail; int Cnt_Ofdm_fail; int Cnt_Cck_fail; int Cnt_CCK_CCA; int Cnt_all; int Cnt_CCA_all; } ;
struct TYPE_5__ {int SupportAbility; int Adapter; TYPE_1__ FalseAlmCnt; } ;
typedef TYPE_1__* Pfalse_ALARM_STATISTICS ;
typedef TYPE_2__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int VAR_15 ;
 int FUNC_0 (TYPE_2__*,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void FUNC_3(void *VAR_19)
{
 PDM_ODM_T VAR_20 = (PDM_ODM_T)VAR_19;
 Pfalse_ALARM_STATISTICS VAR_21 = &(VAR_20->FalseAlmCnt);
 u32 VAR_22;

 if (!(VAR_20->SupportAbility & VAR_3))
  return;



 FUNC_2(VAR_20->Adapter, VAR_10, VAR_2, 1);

 FUNC_2(VAR_20->Adapter, VAR_11, VAR_2, 1);

 VAR_22 = FUNC_1(
  VAR_20->Adapter, VAR_12, VAR_18
 );
 VAR_21->Cnt_Fast_Fsync = (VAR_22&0xffff);
 VAR_21->Cnt_SB_Search_fail = ((VAR_22&0xffff0000)>>16);

 VAR_22 = FUNC_1(
  VAR_20->Adapter, VAR_13, VAR_18
 );
 VAR_21->Cnt_OFDM_CCA = (VAR_22&0xffff);
 VAR_21->Cnt_Parity_Fail = ((VAR_22&0xffff0000)>>16);

 VAR_22 = FUNC_1(
  VAR_20->Adapter, VAR_14, VAR_18
 );
 VAR_21->Cnt_Rate_Illegal = (VAR_22&0xffff);
 VAR_21->Cnt_Crc8_fail = ((VAR_22&0xffff0000)>>16);

 VAR_22 = FUNC_1(
  VAR_20->Adapter, VAR_15, VAR_18
 );
 VAR_21->Cnt_Mcs_fail = (VAR_22&0xffff);

 VAR_21->Cnt_Ofdm_fail =
  VAR_21->Cnt_Parity_Fail +
  VAR_21->Cnt_Rate_Illegal +
  VAR_21->Cnt_Crc8_fail +
  VAR_21->Cnt_Mcs_fail +
  VAR_21->Cnt_Fast_Fsync +
  VAR_21->Cnt_SB_Search_fail;

 {

  FUNC_2(VAR_20->Adapter, VAR_9, VAR_0, 1);
  FUNC_2(VAR_20->Adapter, VAR_9, VAR_1, 1);

  VAR_22 = FUNC_1(
   VAR_20->Adapter, VAR_7, VAR_16
  );
  VAR_21->Cnt_Cck_fail = VAR_22;

  VAR_22 = FUNC_1(
   VAR_20->Adapter, VAR_8, VAR_17
  );
  VAR_21->Cnt_Cck_fail += (VAR_22&0xff)<<8;

  VAR_22 = FUNC_1(
   VAR_20->Adapter, VAR_6, VAR_18
  );
  VAR_21->Cnt_CCK_CCA =
   ((VAR_22&0xFF)<<8) | ((VAR_22&0xFF00)>>8);
 }

 VAR_21->Cnt_all = (
  VAR_21->Cnt_Fast_Fsync +
  VAR_21->Cnt_SB_Search_fail +
  VAR_21->Cnt_Parity_Fail +
  VAR_21->Cnt_Rate_Illegal +
  VAR_21->Cnt_Crc8_fail +
  VAR_21->Cnt_Mcs_fail +
  VAR_21->Cnt_Cck_fail
 );

 VAR_21->Cnt_CCA_all =
  VAR_21->Cnt_OFDM_CCA + VAR_21->Cnt_CCK_CCA;

 FUNC_0(
  VAR_20,
  VAR_4,
  VAR_5,
  ("Enter odm_FalseAlarmCounterStatistics\n")
 );
 FUNC_0(
  VAR_20,
  VAR_4,
  VAR_5,
  (
   "Cnt_Fast_Fsync =%d, Cnt_SB_Search_fail =%d\n",
   VAR_21->Cnt_Fast_Fsync,
   VAR_21->Cnt_SB_Search_fail
  )
 );
 FUNC_0(
  VAR_20,
  VAR_4,
  VAR_5,
  (
   "Cnt_Parity_Fail =%d, Cnt_Rate_Illegal =%d\n",
   VAR_21->Cnt_Parity_Fail,
   VAR_21->Cnt_Rate_Illegal
  )
 );
 FUNC_0(
  VAR_20,
  VAR_4,
  VAR_5,
  (
   "Cnt_Crc8_fail =%d, Cnt_Mcs_fail =%d\n",
   VAR_21->Cnt_Crc8_fail,
   VAR_21->Cnt_Mcs_fail
  )
 );

 FUNC_0(
  VAR_20,
  VAR_4,
  VAR_5,
  ("Cnt_OFDM_CCA =%d\n", VAR_21->Cnt_OFDM_CCA)
 );
 FUNC_0(
  VAR_20,
  VAR_4,
  VAR_5,
  ("Cnt_CCK_CCA =%d\n", VAR_21->Cnt_CCK_CCA)
 );
 FUNC_0(
  VAR_20,
  VAR_4,
  VAR_5,
  ("Cnt_CCA_all =%d\n", VAR_21->Cnt_CCA_all)
 );
 FUNC_0(
  VAR_20,
  VAR_4,
  VAR_5,
  ("Cnt_Ofdm_fail =%d\n", VAR_21->Cnt_Ofdm_fail)
 );
 FUNC_0(
  VAR_20,
  VAR_4,
  VAR_5,
  ("Cnt_Cck_fail =%d\n", VAR_21->Cnt_Cck_fail)
 );
 FUNC_0(
  VAR_20,
  VAR_4,
  VAR_5,
  ("Cnt_Ofdm_fail =%d\n", VAR_21->Cnt_Ofdm_fail)
 );
 FUNC_0(
  VAR_20,
  VAR_4,
  VAR_5,
  ("Total False Alarm =%d\n", VAR_21->Cnt_all)
 );
}
