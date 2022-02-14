
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int s8 ;
struct TYPE_4__ {int TH_L2H_ini; int TH_EDCCA_HL_diff; int txEdcca1; int TxHangFlg; int H2L_lb; int L2H_lb; int Adaptivity_IGI_upper; scalar_t__ txEdcca0; int Adapter; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int VAR_8 ;

void FUNC_5(void *VAR_9, u8 VAR_10)
{
 PDM_ODM_T VAR_11 = (PDM_ODM_T)VAR_9;
 u32 VAR_12 = 0;
 u8 VAR_13, VAR_14;
 bool VAR_15 = 1;
 s8 VAR_16, VAR_17;
 s8 VAR_18;

 VAR_14 = 0x50;
 FUNC_1(VAR_11, VAR_14);


 VAR_18 = VAR_10-(s8)VAR_14;
 VAR_16 = VAR_11->TH_L2H_ini + VAR_18;
 if (VAR_16 > 10)
  VAR_16 = 10;
 VAR_17 = VAR_16 - VAR_11->TH_EDCCA_HL_diff;
 FUNC_3(VAR_11->Adapter, VAR_8, VAR_5, (u8)VAR_16);
 FUNC_3(VAR_11->Adapter, VAR_8, VAR_6, (u8)VAR_17);

 FUNC_4(5);

 while (VAR_15) {
  for (VAR_13 = 0; VAR_13 < 20; VAR_13++) {
   VAR_12 = FUNC_2(VAR_11->Adapter, VAR_4, VAR_7);

   if (VAR_12 & VAR_1)
    VAR_11->txEdcca1 = VAR_11->txEdcca1 + 1;
   else if (VAR_12 & VAR_0)
    VAR_11->txEdcca1 = VAR_11->txEdcca1 + 1;
   else
    VAR_11->txEdcca0 = VAR_11->txEdcca0 + 1;
  }


  if (VAR_11->txEdcca1 > 5) {
   VAR_14 = VAR_14-1;
   VAR_16 = VAR_16 + 1;
   if (VAR_16 > 10)
    VAR_16 = 10;
   VAR_17 = VAR_16 - VAR_11->TH_EDCCA_HL_diff;
   FUNC_3(VAR_11->Adapter, VAR_8, VAR_5, (u8)VAR_16);
   FUNC_3(VAR_11->Adapter, VAR_8, VAR_6, (u8)VAR_17);

   VAR_11->TxHangFlg = 1;
   VAR_11->txEdcca1 = 0;
   VAR_11->txEdcca0 = 0;

   if (VAR_16 == 10) {
    VAR_15 = 0;
    VAR_11->TxHangFlg = 0;
    VAR_11->txEdcca1 = 0;
    VAR_11->txEdcca0 = 0;
    VAR_11->H2L_lb = VAR_17;
    VAR_11->L2H_lb = VAR_16;
    VAR_11->Adaptivity_IGI_upper = VAR_14;
   }
  } else {
   VAR_15 = 0;
   VAR_11->TxHangFlg = 0;
   VAR_11->txEdcca1 = 0;
   VAR_11->txEdcca0 = 0;
   VAR_11->H2L_lb = VAR_17;
   VAR_11->L2H_lb = VAR_16;
   VAR_11->Adaptivity_IGI_upper = VAR_14;
  }
 }

 FUNC_0(VAR_11, VAR_2, VAR_3, ("IGI = 0x%x, H2L_lb = 0x%x, L2H_lb = 0x%x\n", VAR_14, VAR_11->H2L_lb, VAR_11->L2H_lb));
}
