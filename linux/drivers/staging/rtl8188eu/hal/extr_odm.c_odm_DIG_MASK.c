
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_dig {scalar_t__ CurIGValue; scalar_t__ DIG_Dynamic_MIN_0; scalar_t__ rx_gain_range_max; int LargeFAHit; scalar_t__ ForbiddenIGI; int rx_gain_range_min; int Recover_cnt; scalar_t__ bMediaConnect_0; scalar_t__ AntDiv_RSSI_max; } ;
struct false_alarm_stats {int Cnt_all; } ;
struct odm_dm_struct {int SupportAbility; scalar_t__ RSSI_Min; scalar_t__ AntDivType; scalar_t__ bLinked; scalar_t__ bOneEntryOnly; int bDMInitialGainEnable; scalar_t__* pbScanInProcess; struct false_alarm_stats FalseAlmCnt; struct rtw_dig DM_DigTable; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct odm_dm_struct*,int ,int ,char*) ;
 int FUNC_1 (struct odm_dm_struct*,scalar_t__) ;

void FUNC_2(struct odm_dm_struct *VAR_13)
{
 struct rtw_dig *VAR_14 = &VAR_13->DM_DigTable;
 struct false_alarm_stats *VAR_15 = &VAR_13->FalseAlmCnt;
 u8 VAR_16;
 u8 VAR_17;
 bool VAR_18, VAR_19;
 u8 VAR_20, VAR_21;
 u8 VAR_22 = VAR_14->CurIGValue;

 FUNC_0(VAR_13, VAR_11, VAR_12, ("odm_DIG()==>\n"));
 if ((!(VAR_13->SupportAbility&VAR_8)) || (!(VAR_13->SupportAbility&VAR_9))) {
  FUNC_0(VAR_13, VAR_11, VAR_12,
        ("odm_DIG() Return: SupportAbility ODM_BB_DIG or ODM_BB_FA_CNT is disabled\n"));
  return;
 }

 if (*(VAR_13->pbScanInProcess)) {
  FUNC_0(VAR_13, VAR_11, VAR_12, ("odm_DIG() Return: In Scan Progress\n"));
  return;
 }


 if (!VAR_13->bDMInitialGainEnable) {
  FUNC_0(VAR_13, VAR_11, VAR_12, ("odm_DIG() Return: PSD is Processing\n"));
  return;
 }

 VAR_16 = VAR_14->DIG_Dynamic_MIN_0;
 VAR_18 = (VAR_13->bLinked) && (!VAR_14->bMediaConnect_0);
 VAR_19 = (!VAR_13->bLinked) && (VAR_14->bMediaConnect_0);


 VAR_20 = VAR_5;
 VAR_21 = VAR_6;
 VAR_17 = VAR_4;

 if (VAR_13->bLinked) {

  if ((VAR_13->RSSI_Min + 20) > VAR_20)
   VAR_14->rx_gain_range_max = VAR_20;
  else if ((VAR_13->RSSI_Min + 20) < VAR_21)
   VAR_14->rx_gain_range_max = VAR_21;
  else
   VAR_14->rx_gain_range_max = VAR_13->RSSI_Min + 20;

  if (VAR_13->bOneEntryOnly) {
   if (VAR_13->RSSI_Min < VAR_21)
    VAR_16 = VAR_21;
   else if (VAR_13->RSSI_Min > VAR_17)
    VAR_16 = VAR_17;
   else
    VAR_16 = VAR_13->RSSI_Min;
   FUNC_0(VAR_13, VAR_11, VAR_12,
         ("odm_DIG() : bOneEntryOnly=true,  DIG_Dynamic_MIN=0x%x\n",
         VAR_16));
   FUNC_0(VAR_13, VAR_11, VAR_12,
         ("odm_DIG() : pDM_Odm->RSSI_Min=%d\n",
         VAR_13->RSSI_Min));
  } else if (VAR_13->SupportAbility & VAR_7) {

   if (VAR_13->AntDivType == VAR_0) {
    VAR_16 = (u8)VAR_14->AntDiv_RSSI_max;
    FUNC_0(VAR_13, VAR_10, VAR_12,
          ("odm_DIG(): pDM_DigTable->AntDiv_RSSI_max=%d\n",
          VAR_14->AntDiv_RSSI_max));
   }
  } else {
   VAR_16 = VAR_21;
  }
 } else {
  VAR_14->rx_gain_range_max = VAR_20;
  VAR_16 = VAR_21;
  FUNC_0(VAR_13, VAR_11, VAR_12, ("odm_DIG() : No Link\n"));
 }


 if (VAR_15->Cnt_all > 10000) {
  FUNC_0(VAR_13, VAR_11, VAR_12, ("dm_DIG(): Abnormally false alarm case.\n"));

  if (VAR_14->LargeFAHit != 3)
   VAR_14->LargeFAHit++;
  if (VAR_14->ForbiddenIGI < VAR_22) {
   VAR_14->ForbiddenIGI = VAR_22;
   VAR_14->LargeFAHit = 1;
  }

  if (VAR_14->LargeFAHit >= 3) {
   if ((VAR_14->ForbiddenIGI+1) > VAR_14->rx_gain_range_max)
    VAR_14->rx_gain_range_min = VAR_14->rx_gain_range_max;
   else
    VAR_14->rx_gain_range_min = (VAR_14->ForbiddenIGI + 1);
   VAR_14->Recover_cnt = 3600;
  }

 } else {

  if (VAR_14->Recover_cnt != 0) {
   VAR_14->Recover_cnt--;
  } else {
   if (VAR_14->LargeFAHit < 3) {
    if ((VAR_14->ForbiddenIGI-1) < VAR_16) {
     VAR_14->ForbiddenIGI = VAR_16;
     VAR_14->rx_gain_range_min = VAR_16;
     FUNC_0(VAR_13, VAR_11, VAR_12, ("odm_DIG(): Normal Case: At Lower Bound\n"));
    } else {
     VAR_14->ForbiddenIGI--;
     VAR_14->rx_gain_range_min = (VAR_14->ForbiddenIGI + 1);
     FUNC_0(VAR_13, VAR_11, VAR_12, ("odm_DIG(): Normal Case: Approach Lower Bound\n"));
    }
   } else {
    VAR_14->LargeFAHit = 0;
   }
  }
 }
 FUNC_0(VAR_13, VAR_11, VAR_12,
       ("odm_DIG(): pDM_DigTable->LargeFAHit=%d\n",
       VAR_14->LargeFAHit));


 if (VAR_13->bLinked) {
  FUNC_0(VAR_13, VAR_11, VAR_12, ("odm_DIG(): DIG AfterLink\n"));
  if (VAR_18) {
   VAR_22 = VAR_13->RSSI_Min;
   FUNC_0(VAR_13, VAR_11, VAR_12, ("DIG: First Connect\n"));
  } else {
   if (VAR_15->Cnt_all > VAR_3)
    VAR_22 = VAR_22 + 4;
   else if (VAR_15->Cnt_all > VAR_2)
    VAR_22 = VAR_22 + 2;
   else if (VAR_15->Cnt_all < VAR_1)
    VAR_22 = VAR_22 - 2;
  }
 } else {
  FUNC_0(VAR_13, VAR_11, VAR_12, ("odm_DIG(): DIG BeforeLink\n"));
  if (VAR_19) {
   VAR_22 = VAR_14->rx_gain_range_min;
   FUNC_0(VAR_13, VAR_11, VAR_12, ("odm_DIG(): First DisConnect\n"));
  } else {

   if (VAR_15->Cnt_all > 10000)
    VAR_22 = VAR_22 + 2;
   else if (VAR_15->Cnt_all > 8000)
    VAR_22 = VAR_22 + 1;
   else if (VAR_15->Cnt_all < 500)
    VAR_22 = VAR_22 - 1;
   FUNC_0(VAR_13, VAR_11, VAR_12, ("odm_DIG(): England DIG\n"));
  }
 }
 FUNC_0(VAR_13, VAR_11, VAR_12, ("odm_DIG(): DIG End Adjust IGI\n"));

 if (VAR_22 > VAR_14->rx_gain_range_max)
  VAR_22 = VAR_14->rx_gain_range_max;
 if (VAR_22 < VAR_14->rx_gain_range_min)
  VAR_22 = VAR_14->rx_gain_range_min;

 FUNC_0(VAR_13, VAR_11, VAR_12,
       ("odm_DIG(): rx_gain_range_max=0x%x, rx_gain_range_min=0x%x\n",
       VAR_14->rx_gain_range_max, VAR_14->rx_gain_range_min));
 FUNC_0(VAR_13, VAR_11, VAR_12, ("odm_DIG(): TotalFA=%d\n", VAR_15->Cnt_all));
 FUNC_0(VAR_13, VAR_11, VAR_12, ("odm_DIG(): CurIGValue=0x%x\n", VAR_22));



 FUNC_1(VAR_13, VAR_22);
 VAR_14->bMediaConnect_0 = VAR_13->bLinked;
 VAR_14->DIG_Dynamic_MIN_0 = VAR_16;
}
