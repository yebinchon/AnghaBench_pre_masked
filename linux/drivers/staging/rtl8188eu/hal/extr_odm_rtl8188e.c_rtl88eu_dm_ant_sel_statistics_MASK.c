
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct fast_ant_train {int * AuxAnt_Cnt; int * AuxAnt_Sum; int * MainAnt_Cnt; int * MainAnt_Sum; } ;
struct odm_dm_struct {scalar_t__ AntDivType; struct fast_ant_train DM_FatTable; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_0(struct odm_dm_struct *VAR_4,
       u8 VAR_5, u32 VAR_6, u8 VAR_7)
{
 struct fast_ant_train *VAR_8 = &VAR_4->DM_FatTable;

 if (VAR_4->AntDivType == VAR_1) {
  if (VAR_5 == VAR_3) {
   VAR_8->MainAnt_Sum[VAR_6] += VAR_7;
   VAR_8->MainAnt_Cnt[VAR_6]++;
  } else {
   VAR_8->AuxAnt_Sum[VAR_6] += VAR_7;
   VAR_8->AuxAnt_Cnt[VAR_6]++;
  }
 } else if (VAR_4->AntDivType == VAR_0) {
  if (VAR_5 == VAR_2) {
   VAR_8->MainAnt_Sum[VAR_6] += VAR_7;
   VAR_8->MainAnt_Cnt[VAR_6]++;
  } else {
   VAR_8->AuxAnt_Sum[VAR_6] += VAR_7;
   VAR_8->AuxAnt_Cnt[VAR_6]++;
  }
 }
}
