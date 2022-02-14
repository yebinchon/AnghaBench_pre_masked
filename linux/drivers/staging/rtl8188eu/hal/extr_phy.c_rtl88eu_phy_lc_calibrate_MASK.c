
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int bLCKInProgress; } ;
struct odm_dm_struct {int SupportAbility; TYPE_1__ RFCalibrateInfo; scalar_t__* pbScanInProcess; } ;
struct adapter {TYPE_2__* HalData; } ;
struct TYPE_4__ {struct odm_dm_struct odmpriv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct adapter*,int) ;

void FUNC_2(struct adapter *VAR_1)
{
 bool VAR_2 = 0, VAR_3 = 0;
 u32 VAR_4 = 2000, VAR_5 = 0;
 struct odm_dm_struct *VAR_6 = &VAR_1->HalData->odmpriv;

 if (!(VAR_6->SupportAbility & VAR_0))
  return;
 if (VAR_2 || VAR_3)
  return;

 while (*(VAR_6->pbScanInProcess) && VAR_5 < VAR_4) {
  FUNC_0(50);
  VAR_5 += 50;
 }

 VAR_6->RFCalibrateInfo.bLCKInProgress = 1;

 FUNC_1(VAR_1, 0);

 VAR_6->RFCalibrateInfo.bLCKInProgress = 0;
}
