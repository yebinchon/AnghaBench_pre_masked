
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct false_alarm_stats {int Cnt_Cck_fail; } ;
struct odm_dm_struct {int SupportAbility; int RSSI_Min; scalar_t__ bLinked; scalar_t__ ExtLNA; struct false_alarm_stats FalseAlmCnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct odm_dm_struct*,int) ;

void FUNC_1(struct odm_dm_struct *VAR_2)
{
 u8 VAR_3;
 struct false_alarm_stats *VAR_4 = &(VAR_2->FalseAlmCnt);

 if (!(VAR_2->SupportAbility & (VAR_0|VAR_1)))
  return;
 if (VAR_2->ExtLNA)
  return;
 if (VAR_2->bLinked) {
  if (VAR_2->RSSI_Min > 25) {
   VAR_3 = 0xcd;
  } else if ((VAR_2->RSSI_Min <= 25) && (VAR_2->RSSI_Min > 10)) {
   VAR_3 = 0x83;
  } else {
   if (VAR_4->Cnt_Cck_fail > 1000)
    VAR_3 = 0x83;
   else
    VAR_3 = 0x40;
  }
 } else {
  if (VAR_4->Cnt_Cck_fail > 1000)
   VAR_3 = 0x83;
  else
   VAR_3 = 0x40;
 }
 FUNC_0(VAR_2, VAR_3);
}
