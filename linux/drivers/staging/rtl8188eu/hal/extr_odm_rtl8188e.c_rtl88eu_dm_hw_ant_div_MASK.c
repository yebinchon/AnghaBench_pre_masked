
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct sta_info {int dummy; } ;
struct rtw_dig {size_t AntDiv_RSSI_max; size_t RSSI_max; } ;
struct fast_ant_train {size_t* MainAnt_Cnt; size_t* MainAnt_Sum; size_t* AuxAnt_Cnt; size_t* AuxAnt_Sum; scalar_t__ RxIdleAnt; } ;
struct odm_dm_struct {scalar_t__ AntDivType; struct sta_info** pODM_StaInfo; struct rtw_dig DM_DigTable; struct fast_ant_train DM_FatTable; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sta_info*) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_1 (size_t,size_t) ;
 size_t FUNC_2 (size_t,size_t) ;
 int FUNC_3 (struct odm_dm_struct*,int) ;
 int FUNC_4 (struct odm_dm_struct*,int,size_t) ;

__attribute__((used)) static void FUNC_5(struct odm_dm_struct *VAR_4)
{
 struct fast_ant_train *VAR_5 = &VAR_4->DM_FatTable;
 struct rtw_dig *VAR_6 = &VAR_4->DM_DigTable;
 struct sta_info *VAR_7;
 u32 VAR_8, VAR_9 = 0xFF, VAR_10 = 0, VAR_11 = 0;
 u32 VAR_12, VAR_13;
 u32 VAR_14, VAR_15;
 u8 VAR_16 = 0, VAR_17 = 7;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7 = VAR_4->pODM_StaInfo[VAR_8];
  if (FUNC_0(VAR_7)) {

   VAR_14 = (VAR_5->MainAnt_Cnt[VAR_8] != 0) ?
         (VAR_5->MainAnt_Sum[VAR_8] /
          VAR_5->MainAnt_Cnt[VAR_8]) : 0;
   VAR_15 = (VAR_5->AuxAnt_Cnt[VAR_8] != 0) ?
        (VAR_5->AuxAnt_Sum[VAR_8] /
         VAR_5->AuxAnt_Cnt[VAR_8]) : 0;
   VAR_17 = (VAR_14 >= VAR_15) ? VAR_2 : VAR_0;

   VAR_13 = FUNC_1(VAR_14, VAR_15);
   if ((VAR_13 > VAR_10) &&
       (VAR_13 < 40))
    VAR_10 = VAR_13;
   if (VAR_13 > VAR_11)
    VAR_11 = VAR_13;


   if ((VAR_5->RxIdleAnt == VAR_2) &&
       (VAR_14 == 0))
    VAR_14 = VAR_15;
   else if ((VAR_5->RxIdleAnt == VAR_0) &&
     (VAR_15 == 0))
    VAR_15 = VAR_14;

   VAR_12 = FUNC_2(VAR_14, VAR_15);
   if (VAR_12 < VAR_9) {
    VAR_9 = VAR_12;
    VAR_16 = VAR_17;
   }

   if (VAR_4->AntDivType == VAR_1)
    FUNC_4(VAR_4, VAR_17, VAR_8);
  }
  VAR_5->MainAnt_Sum[VAR_8] = 0;
  VAR_5->AuxAnt_Sum[VAR_8] = 0;
  VAR_5->MainAnt_Cnt[VAR_8] = 0;
  VAR_5->AuxAnt_Cnt[VAR_8] = 0;
 }


 FUNC_3(VAR_4, VAR_16);

 VAR_6->AntDiv_RSSI_max = VAR_10;
 VAR_6->RSSI_max = VAR_11;
}
