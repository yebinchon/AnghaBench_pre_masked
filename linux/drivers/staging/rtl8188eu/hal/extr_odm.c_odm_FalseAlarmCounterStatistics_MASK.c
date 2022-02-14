
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct false_alarm_stats {int Cnt_Fast_Fsync; int Cnt_SB_Search_fail; int Cnt_OFDM_CCA; int Cnt_Parity_Fail; int Cnt_Rate_Illegal; int Cnt_Crc8_fail; int Cnt_Mcs_fail; int Cnt_Ofdm_fail; int Cnt_BW_LSC; int Cnt_BW_USC; int Cnt_Cck_fail; int Cnt_CCK_CCA; int Cnt_all; int Cnt_CCA_all; } ;
struct odm_dm_struct {int SupportAbility; struct false_alarm_stats FalseAlmCnt; struct adapter* Adapter; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (struct odm_dm_struct*,int ,int ,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct adapter*,int ,int ) ;
 int FUNC_3 (struct adapter*,int ,int ,int) ;

void FUNC_4(struct odm_dm_struct *VAR_17)
{
 struct adapter *VAR_18 = VAR_17->Adapter;
 u32 VAR_19;
 struct false_alarm_stats *VAR_20 = &(VAR_17->FalseAlmCnt);

 if (!(VAR_17->SupportAbility & VAR_0))
  return;


 FUNC_3(VAR_18, VAR_7, FUNC_0(31), 1);
 FUNC_3(VAR_18, VAR_8, FUNC_0(31), 1);

 VAR_19 = FUNC_2(VAR_18, VAR_9, VAR_16);
 VAR_20->Cnt_Fast_Fsync = (VAR_19&0xffff);
 VAR_20->Cnt_SB_Search_fail = (VAR_19 & 0xffff0000)>>16;
 VAR_19 = FUNC_2(VAR_18, VAR_10, VAR_16);
 VAR_20->Cnt_OFDM_CCA = (VAR_19&0xffff);
 VAR_20->Cnt_Parity_Fail = (VAR_19 & 0xffff0000)>>16;
 VAR_19 = FUNC_2(VAR_18, VAR_11, VAR_16);
 VAR_20->Cnt_Rate_Illegal = (VAR_19&0xffff);
 VAR_20->Cnt_Crc8_fail = (VAR_19 & 0xffff0000)>>16;
 VAR_19 = FUNC_2(VAR_18, VAR_12, VAR_16);
 VAR_20->Cnt_Mcs_fail = (VAR_19&0xffff);

 VAR_20->Cnt_Ofdm_fail = VAR_20->Cnt_Parity_Fail + VAR_20->Cnt_Rate_Illegal +
         VAR_20->Cnt_Crc8_fail + VAR_20->Cnt_Mcs_fail +
         VAR_20->Cnt_Fast_Fsync + VAR_20->Cnt_SB_Search_fail;

 VAR_19 = FUNC_2(VAR_18, VAR_13, VAR_16);
 VAR_20->Cnt_BW_LSC = (VAR_19&0xffff);
 VAR_20->Cnt_BW_USC = (VAR_19 & 0xffff0000)>>16;


 FUNC_3(VAR_18, VAR_6, FUNC_0(12), 1);
 FUNC_3(VAR_18, VAR_6, FUNC_0(14), 1);

 VAR_19 = FUNC_2(VAR_18, VAR_4, VAR_14);
 VAR_20->Cnt_Cck_fail = VAR_19;
 VAR_19 = FUNC_2(VAR_18, VAR_5, VAR_15);
 VAR_20->Cnt_Cck_fail += (VAR_19 & 0xff)<<8;

 VAR_19 = FUNC_2(VAR_18, VAR_3, VAR_16);
 VAR_20->Cnt_CCK_CCA = ((VAR_19&0xFF)<<8) | ((VAR_19&0xFF00)>>8);

 VAR_20->Cnt_all = (VAR_20->Cnt_Fast_Fsync +
    VAR_20->Cnt_SB_Search_fail +
    VAR_20->Cnt_Parity_Fail +
    VAR_20->Cnt_Rate_Illegal +
    VAR_20->Cnt_Crc8_fail +
    VAR_20->Cnt_Mcs_fail +
    VAR_20->Cnt_Cck_fail);

 VAR_20->Cnt_CCA_all = VAR_20->Cnt_OFDM_CCA + VAR_20->Cnt_CCK_CCA;

 FUNC_1(VAR_17, VAR_1, VAR_2, ("Enter odm_FalseAlarmCounterStatistics\n"));
 FUNC_1(VAR_17, VAR_1, VAR_2,
       ("Cnt_Fast_Fsync=%d, Cnt_SB_Search_fail=%d\n",
       VAR_20->Cnt_Fast_Fsync, VAR_20->Cnt_SB_Search_fail));
 FUNC_1(VAR_17, VAR_1, VAR_2,
       ("Cnt_Parity_Fail=%d, Cnt_Rate_Illegal=%d\n",
       VAR_20->Cnt_Parity_Fail, VAR_20->Cnt_Rate_Illegal));
 FUNC_1(VAR_17, VAR_1, VAR_2,
       ("Cnt_Crc8_fail=%d, Cnt_Mcs_fail=%d\n",
       VAR_20->Cnt_Crc8_fail, VAR_20->Cnt_Mcs_fail));
 FUNC_1(VAR_17, VAR_1, VAR_2, ("Cnt_Cck_fail=%d\n", VAR_20->Cnt_Cck_fail));
 FUNC_1(VAR_17, VAR_1, VAR_2, ("Cnt_Ofdm_fail=%d\n", VAR_20->Cnt_Ofdm_fail));
 FUNC_1(VAR_17, VAR_1, VAR_2, ("Total False Alarm=%d\n", VAR_20->Cnt_all));
}
