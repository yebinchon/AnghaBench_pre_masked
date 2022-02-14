
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Carrier_Sense_enable; int TH_L2H_ini; int AdapEn_RSSI; int TH_EDCCA_HL_diff; int IGI_Base; int IGI_target; int NHM_disable; int TxHangFlg; int Adapter; scalar_t__ Adaptivity_IGI_upper; scalar_t__ L2H_lb; scalar_t__ H2L_lb; scalar_t__ txEdcca1; scalar_t__ txEdcca0; scalar_t__ ForceEDCCA; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(void *VAR_2)
{
 PDM_ODM_T VAR_3 = (PDM_ODM_T)VAR_2;

 if (VAR_3->Carrier_Sense_enable == 0)
  VAR_3->TH_L2H_ini = 0xf7;
 else
  VAR_3->TH_L2H_ini = 0xa;

 VAR_3->AdapEn_RSSI = 20;
 VAR_3->TH_EDCCA_HL_diff = 7;

 VAR_3->IGI_Base = 0x32;
 VAR_3->IGI_target = 0x1c;
 VAR_3->ForceEDCCA = 0;
 VAR_3->NHM_disable = 0;
 VAR_3->TxHangFlg = 1;
 VAR_3->txEdcca0 = 0;
 VAR_3->txEdcca1 = 0;
 VAR_3->H2L_lb = 0;
 VAR_3->L2H_lb = 0;
 VAR_3->Adaptivity_IGI_upper = 0;
 FUNC_1(VAR_3);

 FUNC_0(VAR_3->Adapter, VAR_1, VAR_0, 1);
}
