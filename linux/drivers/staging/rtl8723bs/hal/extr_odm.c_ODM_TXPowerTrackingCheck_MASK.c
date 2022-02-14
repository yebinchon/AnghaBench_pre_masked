
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct adapter {int dummy; } ;
struct TYPE_4__ {int TM_Trigger; } ;
struct TYPE_5__ {int SupportAbility; TYPE_1__ RFCalibrateInfo; struct adapter* Adapter; } ;
typedef TYPE_2__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*,int ,int ,int,int) ;
 int VAR_4 ;

void FUNC_2(PDM_ODM_T VAR_5)
{
 struct adapter *VAR_6 = VAR_5->Adapter;

 if (!(VAR_5->SupportAbility & VAR_3))
  return;

 if (!VAR_5->RFCalibrateInfo.TM_Trigger) {
  FUNC_1(VAR_5->Adapter, VAR_2, VAR_4, (VAR_1 | VAR_0), 0x03);



  VAR_5->RFCalibrateInfo.TM_Trigger = 1;
  return;
 } else {

  FUNC_0(VAR_6);
  VAR_5->RFCalibrateInfo.TM_Trigger = 0;
 }
}
