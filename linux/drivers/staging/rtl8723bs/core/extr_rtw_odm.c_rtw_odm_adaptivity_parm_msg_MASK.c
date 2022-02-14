
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* u8 ;
struct TYPE_2__ {char* TH_EDCCA_HL_diff; char* IGI_Base; char* ForceEDCCA; char* AdapEn_RSSI; char* IGI_LowerBound; scalar_t__ TH_L2H_ini; } ;
struct hal_com_data {TYPE_1__ odmpriv; } ;
struct adapter {int dummy; } ;
typedef TYPE_1__ DM_ODM_T ;


 int FUNC_0 (void*,char*,char*,char*,char*,char*,char*,char*) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;

void FUNC_2(void *VAR_0, struct adapter *VAR_1)
{
 struct hal_com_data *VAR_2 = FUNC_1(VAR_1);
 DM_ODM_T *VAR_3 = &VAR_2->odmpriv;

 FUNC_0(VAR_0, "%10s %16s %8s %10s %11s %14s\n",
   "TH_L2H_ini", "TH_EDCCA_HL_diff", "IGI_Base",
   "ForceEDCCA", "AdapEn_RSSI", "IGI_LowerBound");
 FUNC_0(VAR_0, "0x%-8x %-16d 0x%-6x %-10d %-11u %-14u\n",
   (u8)VAR_3->TH_L2H_ini,
   VAR_3->TH_EDCCA_HL_diff,
   VAR_3->IGI_Base,
   VAR_3->ForceEDCCA,
   VAR_3->AdapEn_RSSI,
   VAR_3->IGI_LowerBound
 );
}
