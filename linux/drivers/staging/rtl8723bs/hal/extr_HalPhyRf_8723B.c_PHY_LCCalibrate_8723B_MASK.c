
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int s32 ;
struct TYPE_6__ {int bLCKInProgress; } ;
struct TYPE_7__ {int SupportAbility; int InterfaceIndex; TYPE_1__ RFCalibrateInfo; scalar_t__* pbScanInProcess; } ;
typedef TYPE_2__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int) ;

void FUNC_4(PDM_ODM_T VAR_4)
{
 bool VAR_5 = 0, VAR_6 = 0;
 u32 VAR_7 = 2000, VAR_8 = 0;
 u32 VAR_9;
 s32 VAR_10;





 if (!(VAR_4->SupportAbility & VAR_2))
  return;


 if (VAR_5 || VAR_6)
  return;

 VAR_9 = VAR_3;
 while (*(VAR_4->pbScanInProcess) && VAR_8 < VAR_7) {
  FUNC_2(50);
  VAR_8 += 50;
 }

 VAR_4->RFCalibrateInfo.bLCKInProgress = 1;


 FUNC_3(VAR_4, 0);


 VAR_4->RFCalibrateInfo.bLCKInProgress = 0;

 FUNC_0(VAR_4, VAR_0, VAR_1, ("LCK:Finish!!!interface %d\n", VAR_4->InterfaceIndex));
 VAR_10 = FUNC_1(VAR_3 - VAR_9);
 FUNC_0(VAR_4, VAR_0, VAR_1, ("LCK ProgressingTime = %d\n", VAR_10));
}
