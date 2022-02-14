
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int s8 ;
struct TYPE_5__ {int SupportAbility; int IGI_Base; int TH_L2H_ini; int TH_EDCCA_HL_diff; int AdapEn_RSSI; scalar_t__* pBandWidth; int IGI_target; int TxHangFlg; int* pChannel; int RSSI_Min; int Carrier_Sense_enable; int NHM_disable; int H2L_lb; int L2H_lb; int Adapter; scalar_t__ bLinked; int ForceEDCCA; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_10 ;

void FUNC_4(void *VAR_11, u8 VAR_12)
{
 PDM_ODM_T VAR_13 = (PDM_ODM_T)VAR_11;
 s8 VAR_14, VAR_15;
 s8 VAR_16, VAR_17;
 bool VAR_18 = 0;

 if (!(VAR_13->SupportAbility & VAR_0)) {
  FUNC_0(VAR_13, VAR_4, VAR_5, ("Go to odm_DynamicEDCCA()\n"));
  return;
 }
 FUNC_0(VAR_13, VAR_4, VAR_5, ("odm_Adaptivity() =====>\n"));
 FUNC_0(VAR_13, VAR_4, VAR_5, ("ForceEDCCA =%d, IGI_Base = 0x%x, TH_L2H_ini = %d, TH_EDCCA_HL_diff = %d, AdapEn_RSSI = %d\n",
  VAR_13->ForceEDCCA, VAR_13->IGI_Base, VAR_13->TH_L2H_ini, VAR_13->TH_EDCCA_HL_diff, VAR_13->AdapEn_RSSI));

 if (*VAR_13->pBandWidth == VAR_1)
  VAR_17 = VAR_13->IGI_Base;
 else if (*VAR_13->pBandWidth == VAR_2)
  VAR_17 = VAR_13->IGI_Base + 2;
 else if (*VAR_13->pBandWidth == VAR_3)
  VAR_17 = VAR_13->IGI_Base + 2;
 else
  VAR_17 = VAR_13->IGI_Base;
 VAR_13->IGI_target = (u8) VAR_17;


 if (VAR_13->TxHangFlg == 1) {
  FUNC_1(VAR_13->Adapter, VAR_6, VAR_9, 0x208);
  FUNC_3(VAR_13, VAR_13->IGI_target);
 }

 if ((!VAR_13->bLinked) || (*VAR_13->pChannel > 149)) {
  FUNC_1(VAR_13->Adapter, VAR_10, VAR_7, 0x7f);
  FUNC_1(VAR_13->Adapter, VAR_10, VAR_8, 0x7f);
  return;
 }

 if (!VAR_13->ForceEDCCA) {
  if (VAR_13->RSSI_Min > VAR_13->AdapEn_RSSI)
   VAR_18 = 1;
  else if (VAR_13->RSSI_Min < (VAR_13->AdapEn_RSSI - 5))
   VAR_18 = 0;
 } else
  VAR_18 = 1;

 if (
  VAR_13->bLinked &&
  VAR_13->Carrier_Sense_enable == 0 &&
  VAR_13->NHM_disable == 0 &&
  VAR_13->TxHangFlg == 0
 )
  FUNC_2(VAR_13);

 FUNC_0(
  VAR_13,
  VAR_4,
  VAR_5,
  (
   "BandWidth =%s, IGI_target = 0x%x, EDCCA_State =%d\n",
   (*VAR_13->pBandWidth == VAR_3) ? "80M" :
   ((*VAR_13->pBandWidth == VAR_2) ? "40M" : "20M"),
   VAR_17,
   VAR_18
  )
 );

 if (VAR_18) {
  VAR_16 = VAR_17-(s8)VAR_12;
  VAR_14 = VAR_13->TH_L2H_ini + VAR_16;
  if (VAR_14 > 10)
   VAR_14 = 10;

  VAR_15 = VAR_14 - VAR_13->TH_EDCCA_HL_diff;


  if (VAR_15 < VAR_13->H2L_lb)
   VAR_15 = VAR_13->H2L_lb;
  if (VAR_14 < VAR_13->L2H_lb)
   VAR_14 = VAR_13->L2H_lb;
 } else {
  VAR_14 = 0x7f;
  VAR_15 = 0x7f;
 }
 FUNC_0(VAR_13, VAR_4, VAR_5, ("IGI = 0x%x, TH_L2H_dmc = %d, TH_H2L_dmc = %d\n",
  VAR_12, VAR_14, VAR_15));
 FUNC_1(VAR_13->Adapter, VAR_10, VAR_7, (u8)VAR_14);
 FUNC_1(VAR_13->Adapter, VAR_10, VAR_8, (u8)VAR_15);
}
