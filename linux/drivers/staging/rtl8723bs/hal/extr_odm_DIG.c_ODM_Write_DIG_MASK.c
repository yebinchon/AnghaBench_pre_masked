
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef TYPE_1__* pDIG_T ;
struct TYPE_6__ {scalar_t__ CurIGValue; scalar_t__ rx_gain_range_max; int bPSDInProgress; scalar_t__ bStopDIG; } ;
struct TYPE_7__ {scalar_t__ RFType; int Adapter; TYPE_1__ DM_DigTable; } ;
typedef TYPE_2__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;

void FUNC_4(void *VAR_7, u8 VAR_8)
{
 PDM_ODM_T VAR_9 = (PDM_ODM_T)VAR_7;
 pDIG_T VAR_10 = &VAR_9->DM_DigTable;

 if (VAR_10->bStopDIG) {
  FUNC_2(VAR_9, VAR_4, VAR_5, ("Stop Writing IGI\n"));
  return;
 }

 FUNC_2(VAR_9, VAR_4, VAR_6, ("ODM_REG(IGI_A, pDM_Odm) = 0x%x, ODM_BIT(IGI, pDM_Odm) = 0x%x\n",
  FUNC_1(VAR_1, VAR_9), FUNC_0(VAR_0, VAR_9)));

 if (VAR_10->CurIGValue != VAR_8) {

  if (!VAR_10->bPSDInProgress) {
   if (VAR_8 > VAR_10->rx_gain_range_max) {
    FUNC_2(VAR_9, VAR_4, VAR_6, ("CurrentIGI(0x%02x) is larger than upper bound !!\n", VAR_10->rx_gain_range_max));
    VAR_8 = VAR_10->rx_gain_range_max;
   }

  }


  FUNC_3(VAR_9->Adapter, FUNC_1(VAR_1, VAR_9), FUNC_0(VAR_0, VAR_9), VAR_8);

  if (VAR_9->RFType > VAR_3)
   FUNC_3(VAR_9->Adapter, FUNC_1(VAR_2, VAR_9), FUNC_0(VAR_0, VAR_9), VAR_8);

  VAR_10->CurIGValue = VAR_8;
 }

 FUNC_2(VAR_9, VAR_4, VAR_6, ("CurrentIGI(0x%02x).\n", VAR_8));

}
