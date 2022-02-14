
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bTXPowerTracking; int TxPowerTrackControl; scalar_t__ TXPowercount; } ;
struct odm_dm_struct {int* mp_mode; TYPE_1__ RFCalibrateInfo; } ;


 int FUNC_0 (char*,int) ;

void FUNC_1(struct odm_dm_struct *VAR_0)
{
 VAR_0->RFCalibrateInfo.bTXPowerTracking = 1;
 VAR_0->RFCalibrateInfo.TXPowercount = 0;
 if (*(VAR_0->mp_mode) != 1)
  VAR_0->RFCalibrateInfo.TxPowerTrackControl = 1;
 FUNC_0("pDM_Odm TxPowerTrackControl = %d\n", VAR_0->RFCalibrateInfo.TxPowerTrackControl);

 VAR_0->RFCalibrateInfo.TxPowerTrackControl = 1;
}
