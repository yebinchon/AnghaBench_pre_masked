
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int TM_Trigger; } ;
struct odm_dm_struct {int SupportAbility; TYPE_1__ RFCalibrateInfo; struct adapter* Adapter; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct adapter*,int ,int ,int,int) ;
 int FUNC_2 (struct adapter*) ;

void FUNC_3(struct odm_dm_struct *VAR_3)
{



 struct adapter *VAR_4 = VAR_3->Adapter;

 if (!(VAR_3->SupportAbility & VAR_0))
  return;

 if (!VAR_3->RFCalibrateInfo.TM_Trigger) {
  FUNC_1(VAR_4, VAR_1, VAR_2, FUNC_0(17) | FUNC_0(16), 0x03);

  VAR_3->RFCalibrateInfo.TM_Trigger = 1;
  return;
 } else {
  FUNC_2(VAR_4);
  VAR_3->RFCalibrateInfo.TM_Trigger = 0;
 }
}
