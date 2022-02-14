
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int supported; int active; } ;
struct TYPE_4__ {TYPE_1__ qos_data; } ;
struct rtllib_device {scalar_t__ iw_mode; int HTHighestOperaRate; int HTCurrentOperaRate; int dot11HTOperationalRateSet; int Regdot11TxHTOperationalRateSet; TYPE_2__ current_network; struct rt_hi_throughput* pHTInfo; } ;
struct rt_hi_throughput {int bCurrentHTSupport; int CurrentMPDUDensity; int AMPDU_Factor; int CurrentAMPDUFactor; int bAMPDUEnable; int bCurrentAMPDUEnable; int nAMSDU_MaxSize; int nCurrent_AMSDU_MaxSize; int bAMSDU_Support; int bCurrent_AMSDU_Support; int bRegShortGI40MHz; int bCurShortGI40MHz; int bRegShortGI20MHz; int bCurShortGI20MHz; int bRegBW40MHz; int bCurBW40MHz; int bRegSuppCCK; int bCurSuppCCK; scalar_t__ bEnableHT; } ;


 int FUNC_0 (struct rtllib_device*,int ,int ) ;
 int FUNC_1 (struct rtllib_device*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct rtllib_device *VAR_2)
{
 struct rt_hi_throughput *VAR_3 = VAR_2->pHTInfo;

 if (VAR_3->bEnableHT) {
  VAR_3->bCurrentHTSupport = 1;
  VAR_3->bCurSuppCCK = VAR_3->bRegSuppCCK;

  VAR_3->bCurBW40MHz = VAR_3->bRegBW40MHz;
  VAR_3->bCurShortGI20MHz = VAR_3->bRegShortGI20MHz;

  VAR_3->bCurShortGI40MHz = VAR_3->bRegShortGI40MHz;

  if (VAR_2->iw_mode == VAR_0)
   VAR_2->current_network.qos_data.active =
     VAR_2->current_network.qos_data.supported;
  VAR_3->bCurrent_AMSDU_Support = VAR_3->bAMSDU_Support;
  VAR_3->nCurrent_AMSDU_MaxSize = VAR_3->nAMSDU_MaxSize;

  VAR_3->bCurrentAMPDUEnable = VAR_3->bAMPDUEnable;
  VAR_3->CurrentAMPDUFactor = VAR_3->AMPDU_Factor;

  VAR_3->CurrentMPDUDensity = VAR_3->CurrentMPDUDensity;

  FUNC_0(VAR_2, VAR_2->Regdot11TxHTOperationalRateSet,
    VAR_2->dot11HTOperationalRateSet);
  VAR_2->HTHighestOperaRate = FUNC_1(VAR_2,
        VAR_2->dot11HTOperationalRateSet,
        VAR_1);
  VAR_2->HTCurrentOperaRate = VAR_2->HTHighestOperaRate;

 } else {
  VAR_3->bCurrentHTSupport = 0;
 }
}
