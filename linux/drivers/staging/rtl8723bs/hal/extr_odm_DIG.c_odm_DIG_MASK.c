
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef TYPE_2__* pDIG_T ;
struct TYPE_10__ {int NumQryBeaconPkt; } ;
struct TYPE_12__ {scalar_t__ Cnt_all; } ;
struct TYPE_11__ {int CurIGValue; int DIG_Dynamic_MIN_0; int bMediaConnect_0; int rx_gain_range_max; int AntDiv_RSSI_max; int rx_gain_range_min; int ForbiddenIGI; int BT30_CurIGI; scalar_t__ LargeFAHit; } ;
struct TYPE_13__ {int adaptivity_flag; int Adaptivity_IGI_upper; int bLinked; int bBtLimitedDig; int RSSI_Min; int SupportAbility; scalar_t__ AntDivType; int IGI_LowerBound; scalar_t__ bBtConnectProcess; scalar_t__ bLinkInProcess; scalar_t__ bBtHsOperation; TYPE_1__ PhyDbgInfo; scalar_t__ bsta_state; int bOneEntryOnly; TYPE_3__ FalseAlmCnt; TYPE_2__ DM_DigTable; } ;
typedef TYPE_3__* Pfalse_ALARM_STATISTICS ;
typedef TYPE_4__* PDM_ODM_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_4__*,int ,int ,char*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int,int,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_4 (TYPE_4__*,int,int) ;

void FUNC_5(void *VAR_11)
{
 PDM_ODM_T VAR_12 = (PDM_ODM_T)VAR_11;


 pDIG_T VAR_13 = &VAR_12->DM_DigTable;
 Pfalse_ALARM_STATISTICS VAR_14 = &VAR_12->FalseAlmCnt;
 bool VAR_15, VAR_16;
 u8 VAR_17, VAR_18;
 u8 VAR_19, VAR_20;
 u8 VAR_21 = VAR_13->CurIGValue;
 u8 VAR_22;
 u32 VAR_23[3];
 u8 VAR_24 = 0;
 u32 VAR_25 = 0, VAR_26 = 0;
 bool VAR_27 = 0;
 bool VAR_28 = 1, VAR_29 = 0, VAR_30 = 0;

 if (FUNC_2(VAR_12))
  return;

 FUNC_0(VAR_12, VAR_8, VAR_9, ("odm_DIG() ===========================>\n\n"));

 if (VAR_12->adaptivity_flag == 1)
  VAR_24 = VAR_12->Adaptivity_IGI_upper;



 VAR_18 = VAR_13->DIG_Dynamic_MIN_0;
 VAR_15 = (VAR_12->bLinked) && (VAR_13->bMediaConnect_0 == 0);
 VAR_16 = (!VAR_12->bLinked) && (VAR_13->bMediaConnect_0 == 1);



 VAR_19 = 0x5A;
 VAR_20 = VAR_4;
 VAR_17 = VAR_3;

 FUNC_0(VAR_12, VAR_8, VAR_9, ("odm_DIG(): Absolutely upper bound = 0x%x, lower bound = 0x%x\n", VAR_19, VAR_20));


 if (VAR_12->bLinked && VAR_28) {


  if (VAR_12->bBtLimitedDig == 1) {
   VAR_22 = 10;
   FUNC_0(VAR_12, VAR_8, VAR_9, ("odm_DIG(): Coex. case: Force upper bound to RSSI + %d !!!!!!\n", VAR_22));
  } else
   VAR_22 = 15;

  if ((VAR_12->RSSI_Min + VAR_22) > VAR_19)
   VAR_13->rx_gain_range_max = VAR_19;
  else if ((VAR_12->RSSI_Min + VAR_22) < VAR_20)
   VAR_13->rx_gain_range_max = VAR_20;
  else
   VAR_13->rx_gain_range_max = VAR_12->RSSI_Min + VAR_22;



  {
   if (VAR_12->RSSI_Min < VAR_20)
    VAR_18 = VAR_20;
   else if (VAR_12->RSSI_Min > VAR_17)
    VAR_18 = VAR_17;
   else
    VAR_18 = VAR_12->RSSI_Min;
  }
 } else {
  VAR_13->rx_gain_range_max = VAR_19;
  VAR_18 = VAR_20;
 }


 if (VAR_12->bLinked && !VAR_12->bOneEntryOnly) {
  if (VAR_12->SupportAbility & VAR_6) {
   if (
    VAR_12->AntDivType == VAR_0 ||
    VAR_12->AntDivType == VAR_1 ||
    VAR_12->AntDivType == VAR_10
   ) {
    if (VAR_13->AntDiv_RSSI_max > VAR_17)
     VAR_18 = VAR_17;
    else
     VAR_18 = (u8) VAR_13->AntDiv_RSSI_max;
    FUNC_0(
     VAR_12,
     VAR_7,
     VAR_9,
     (
      "odm_DIG(): Antenna diversity case: Force lower bound to 0x%x !!!!!!\n",
      VAR_18
     )
    );
    FUNC_0(
     VAR_12,
     VAR_7,
     VAR_9,
     (
      "odm_DIG(): Antenna diversity case: RSSI_max = 0x%x !!!!!!\n",
      VAR_13->AntDiv_RSSI_max
     )
    );
   }
  }
 }
 FUNC_0(
  VAR_12,
  VAR_8,
  VAR_9,
  (
   "odm_DIG(): Adjust boundary by RSSI Upper bound = 0x%x, Lower bound = 0x%x\n",
   VAR_13->rx_gain_range_max,
   VAR_18
  )
 );
 FUNC_0(
  VAR_12,
  VAR_8,
  VAR_9,
  (
   "odm_DIG(): Link status: bLinked = %d, RSSI = %d, bFirstConnect = %d, bFirsrDisConnect = %d\n\n",
   VAR_12->bLinked,
   VAR_12->RSSI_Min,
   VAR_15,
   VAR_16
  )
 );



 if (VAR_16) {
  VAR_13->rx_gain_range_min = VAR_18;
  VAR_13->ForbiddenIGI = VAR_18;
 } else
  VAR_13->rx_gain_range_min =
   FUNC_4(VAR_12, VAR_18, VAR_21);

 if (VAR_12->bLinked && !VAR_15) {
  if (
   (VAR_12->PhyDbgInfo.NumQryBeaconPkt < 5) &&
   VAR_12->bsta_state
  ) {
   VAR_13->rx_gain_range_min = VAR_20;
   FUNC_0(
    VAR_12,
    VAR_8,
    VAR_9,
    (
     "odm_DIG(): Abnormal #beacon (%d) case in STA mode: Force lower bound to 0x%x !!!!!!\n\n",
     VAR_12->PhyDbgInfo.NumQryBeaconPkt,
     VAR_13->rx_gain_range_min
    )
   );
  }
 }


 if (VAR_13->rx_gain_range_min > VAR_13->rx_gain_range_max) {
  VAR_13->rx_gain_range_min = VAR_13->rx_gain_range_max;
  FUNC_0(
   VAR_12,
   VAR_8,
   VAR_9,
   (
    "odm_DIG(): Abnormal lower bound case: Force lower bound to 0x%x !!!!!!\n\n",
    VAR_13->rx_gain_range_min
   )
  );
 }



 FUNC_3(VAR_12, VAR_27, VAR_28, VAR_26, VAR_25, VAR_23);
 FUNC_0(VAR_12, VAR_8, VAR_9, ("odm_DIG(): False alarm threshold = %d, %d, %d\n\n", VAR_23[0], VAR_23[1], VAR_23[2]));


 if (VAR_12->bLinked && VAR_28) {

  FUNC_0(
   VAR_12,
   VAR_8,
   VAR_9,
   ("odm_DIG(): Adjust IGI after link\n")
  );

  if (VAR_29 || (VAR_15 && VAR_28)) {
   VAR_13->LargeFAHit = 0;

   if (VAR_12->RSSI_Min < VAR_17) {
    if (VAR_21 < VAR_12->RSSI_Min)
     VAR_21 = VAR_12->RSSI_Min;
   } else {
    if (VAR_21 < VAR_17)
     VAR_21 = VAR_17;
   }

   FUNC_0(
    VAR_12,
    VAR_8,
    VAR_9,
    (
     "odm_DIG(): First connect case: IGI does on-shot to 0x%x\n",
     VAR_21
    )
   );

  } else {
   if (VAR_14->Cnt_all > VAR_23[2])
    VAR_21 = VAR_21 + 4;
   else if (VAR_14->Cnt_all > VAR_23[1])
    VAR_21 = VAR_21 + 2;
   else if (VAR_14->Cnt_all < VAR_23[0])
    VAR_21 = VAR_21 - 2;

   if (
    (VAR_12->PhyDbgInfo.NumQryBeaconPkt < 5) &&
    (VAR_14->Cnt_all < VAR_2) &&
    (VAR_12->bsta_state)
   ) {
    VAR_21 = VAR_13->rx_gain_range_min;
    FUNC_0(
     VAR_12,
     VAR_8,
     VAR_9,
     (
      "odm_DIG(): Abnormal #beacon (%d) case: IGI does one-shot to 0x%x\n",
      VAR_12->PhyDbgInfo.NumQryBeaconPkt,
      VAR_21
     )
    );
   }
  }
 } else {

  FUNC_0(
   VAR_12,
   VAR_8,
   VAR_9,
   ("odm_DIG(): Adjust IGI before link\n")
  );

  if (VAR_16 || VAR_30) {
   VAR_21 = VAR_20;
   FUNC_0(
    VAR_12,
    VAR_8,
    VAR_9,
    ("odm_DIG(): First disconnect case: IGI does on-shot to lower bound\n")
   );
  } else {
   if (VAR_14->Cnt_all > VAR_23[2])
    VAR_21 = VAR_21 + 4;
   else if (VAR_14->Cnt_all > VAR_23[1])
    VAR_21 = VAR_21 + 2;
   else if (VAR_14->Cnt_all < VAR_23[0])
    VAR_21 = VAR_21 - 2;
  }
 }


 if (VAR_21 < VAR_13->rx_gain_range_min)
  VAR_21 = VAR_13->rx_gain_range_min;

 if (VAR_21 > VAR_13->rx_gain_range_max)
  VAR_21 = VAR_13->rx_gain_range_max;

 FUNC_0(
  VAR_12,
  VAR_8,
  VAR_9,
  (
   "odm_DIG(): CurIGValue = 0x%x, TotalFA = %d\n\n",
   VAR_21,
   VAR_14->Cnt_all
  )
 );


 if (
  VAR_12->SupportAbility & VAR_5 &&
  VAR_12->adaptivity_flag == 1
 ) {
  if (VAR_21 > VAR_24)
   VAR_21 = VAR_24;

  if (VAR_12->IGI_LowerBound != 0) {
   if (VAR_21 < VAR_12->IGI_LowerBound)
    VAR_21 = VAR_12->IGI_LowerBound;
  }
  FUNC_0(VAR_12, VAR_8, VAR_9, ("odm_DIG(): Adaptivity case: Force upper bound to 0x%x !!!!!!\n", VAR_24));
  FUNC_0(VAR_12, VAR_8, VAR_9, ("odm_DIG(): Adaptivity case: Force lower bound to 0x%x !!!!!!\n\n", VAR_12->IGI_LowerBound));
 }



 if (VAR_12->bBtHsOperation) {
  if (VAR_12->bLinked) {
   if (VAR_13->BT30_CurIGI > (VAR_21))
    FUNC_1(VAR_12, VAR_21);
   else
    FUNC_1(VAR_12, VAR_13->BT30_CurIGI);

   VAR_13->bMediaConnect_0 = VAR_12->bLinked;
   VAR_13->DIG_Dynamic_MIN_0 = VAR_18;
  } else {
   if (VAR_12->bLinkInProcess)
    FUNC_1(VAR_12, 0x1c);
   else if (VAR_12->bBtConnectProcess)
    FUNC_1(VAR_12, 0x28);
   else
    FUNC_1(VAR_12, VAR_13->BT30_CurIGI);
  }
 } else {
  FUNC_1(VAR_12, VAR_21);
  VAR_13->bMediaConnect_0 = VAR_12->bLinked;
  VAR_13->DIG_Dynamic_MIN_0 = VAR_18;
 }
}
