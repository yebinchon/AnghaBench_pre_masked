
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {int ForceEDCCA; void* IGI_LowerBound; void* AdapEn_RSSI; void* IGI_Base; void* TH_EDCCA_HL_diff; void* TH_L2H_ini; } ;
struct hal_com_data {TYPE_1__ odmpriv; } ;
struct adapter {int dummy; } ;
typedef void* s8 ;
typedef TYPE_1__ DM_ODM_T ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;

void FUNC_1(struct adapter *VAR_0, s8 VAR_1,
     s8 VAR_2, s8 VAR_3,
     bool VAR_4, u8 VAR_5,
     u8 VAR_6)
{
 struct hal_com_data *VAR_7 = FUNC_0(VAR_0);
 DM_ODM_T *VAR_8 = &VAR_7->odmpriv;

 VAR_8->TH_L2H_ini = VAR_1;
 VAR_8->TH_EDCCA_HL_diff = VAR_2;
 VAR_8->IGI_Base = VAR_3;
 VAR_8->ForceEDCCA = VAR_4;
 VAR_8->AdapEn_RSSI = VAR_5;
 VAR_8->IGI_LowerBound = VAR_6;
}
