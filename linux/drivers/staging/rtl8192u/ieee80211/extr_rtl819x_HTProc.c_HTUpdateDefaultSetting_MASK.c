
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_device {scalar_t__ bTxUseDriverAssingedRate; scalar_t__ bTxDisableRateFallBack; TYPE_1__* pHTInfo; } ;
struct TYPE_2__ {int bRegShortGI20MHz; int bRegShortGI40MHz; int bRegBW40MHz; int bRegSuppCCK; unsigned long nAMSDU_MaxSize; int bAMPDUEnable; int AMPDU_Factor; int SelfMimoPs; int bRegRT2RTAggregation; int bRegRxReorderEnable; int RxReorderWinSize; int RxReorderPendingTime; int UsbTxAggrNum; int UsbRxFwAggrEn; int UsbRxFwAggrPageNum; int UsbRxFwAggrPacketNum; int UsbRxFwAggrTimeout; scalar_t__ MPDU_Density; scalar_t__ bAMSDU_Support; } ;
typedef TYPE_1__* PRT_HIGH_THROUGHPUT ;



void FUNC_0(struct ieee80211_device *VAR_0)
{
 PRT_HIGH_THROUGHPUT VAR_1 = VAR_0->pHTInfo;





 VAR_1->bRegShortGI20MHz = 1;
 VAR_1->bRegShortGI40MHz = 1;


 VAR_1->bRegBW40MHz = 1;


 if (VAR_1->bRegBW40MHz)
  VAR_1->bRegSuppCCK = 1;
 else
  VAR_1->bRegSuppCCK = 1;


 VAR_1->nAMSDU_MaxSize = 7935UL;
 VAR_1->bAMSDU_Support = 0;


 VAR_1->bAMPDUEnable = 1;
 VAR_1->AMPDU_Factor = 2;
 VAR_1->MPDU_Density = 0;


 VAR_1->SelfMimoPs = 3;
 if (VAR_1->SelfMimoPs == 2)
  VAR_1->SelfMimoPs = 3;

 VAR_0->bTxDisableRateFallBack = 0;
 VAR_0->bTxUseDriverAssingedRate = 0;





 VAR_1->bRegRT2RTAggregation = 1;


 VAR_1->bRegRxReorderEnable = 1;
 VAR_1->RxReorderWinSize = 64;
 VAR_1->RxReorderPendingTime = 30;
}
