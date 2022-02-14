
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct pwrctrl_priv {int bkeepfwalive; } ;
struct TYPE_3__ {int bIQKInitialized; scalar_t__* ThermalValue_HP; scalar_t__ ThermalValue_HP_index; scalar_t__ TM_Trigger; } ;
struct TYPE_4__ {TYPE_1__ RFCalibrateInfo; } ;
struct hal_data_8188e {int PGMaxGroup; TYPE_2__ odmpriv; scalar_t__ pwrGroupCnt; scalar_t__ LastHMEBoxNum; } ;
struct adapter {struct pwrctrl_priv pwrctrlpriv; struct hal_data_8188e* HalData; } ;


 size_t VAR_0 ;

void FUNC_0(struct adapter *VAR_1)
{
 struct hal_data_8188e *VAR_2 = VAR_1->HalData;
 struct pwrctrl_priv *VAR_3;
 u8 VAR_4;

 VAR_3 = &VAR_1->pwrctrlpriv;


 if (!VAR_3->bkeepfwalive)
  VAR_2->LastHMEBoxNum = 0;


 VAR_2->odmpriv.RFCalibrateInfo.bIQKInitialized = 0;
 VAR_2->odmpriv.RFCalibrateInfo.TM_Trigger = 0;
 VAR_2->pwrGroupCnt = 0;
 VAR_2->PGMaxGroup = 13;
 VAR_2->odmpriv.RFCalibrateInfo.ThermalValue_HP_index = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_2->odmpriv.RFCalibrateInfo.ThermalValue_HP[VAR_4] = 0;
}
