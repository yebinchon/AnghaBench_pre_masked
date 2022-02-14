
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* mp_mode; void* pu1ForcedIgiLb; void* pForcedDataRate; void* pbNet_closed; void* pAntennaTest; void* pinit_adpt_in_progress; void* pbDriverIsGoingToPnpSetPowerSleep; void* pbDriverStopped; void* pOnePathCCA; void* pbPowerSaving; void* pbScanInProcess; void* pbMasterOfDMSP; void* pBuddyAdapter; void* pbGetValueFromOtherMac; void* pChannel; void* pBandWidth; void* pSecurity; void* pSecChOffset; void* pBandType; void* pwirelessmode; void* pNumRxBytesUnicast; void* pNumTxBytesUnicast; void* pMacPhyMode; } ;
typedef TYPE_1__* PDM_ODM_T ;
typedef int ODM_CMNINFO_E ;
void FUNC_0(PDM_ODM_T VAR_0, ODM_CMNINFO_E VAR_1, void *VAR_2)
{



 switch (VAR_1) {



 case 139:
  VAR_0->pMacPhyMode = VAR_2;
  break;

 case 129:
  VAR_0->pNumTxBytesUnicast = VAR_2;
  break;

 case 133:
  VAR_0->pNumRxBytesUnicast = VAR_2;
  break;

 case 128:
  VAR_0->pwirelessmode = VAR_2;
  break;

 case 149:
  VAR_0->pBandType = VAR_2;
  break;

 case 131:
  VAR_0->pSecChOffset = VAR_2;
  break;

 case 130:
  VAR_0->pSecurity = VAR_2;
  break;

 case 147:
  VAR_0->pBandWidth = VAR_2;
  break;

 case 146:
  VAR_0->pChannel = VAR_2;
  break;

 case 145:
  VAR_0->pbGetValueFromOtherMac = VAR_2;
  break;

 case 148:
  VAR_0->pBuddyAdapter = VAR_2;
  break;

 case 144:
  VAR_0->pbMasterOfDMSP = VAR_2;
  break;

 case 132:
  VAR_0->pbScanInProcess = VAR_2;
  break;

 case 134:
  VAR_0->pbPowerSaving = VAR_2;
  break;

 case 136:
  VAR_0->pOnePathCCA = VAR_2;
  break;

 case 143:
  VAR_0->pbDriverStopped = VAR_2;
  break;

 case 135:
  VAR_0->pbDriverIsGoingToPnpSetPowerSleep = VAR_2;
  break;

 case 140:
  VAR_0->pinit_adpt_in_progress = VAR_2;
  break;

 case 150:
  VAR_0->pAntennaTest = VAR_2;
  break;

 case 137:
  VAR_0->pbNet_closed = VAR_2;
  break;

 case 141:
  VAR_0->pForcedDataRate = VAR_2;
  break;

 case 142:
  VAR_0->pu1ForcedIgiLb = VAR_2;
  break;

 case 138:
  VAR_0->mp_mode = VAR_2;
  break;
 default:

  break;
 }

}
