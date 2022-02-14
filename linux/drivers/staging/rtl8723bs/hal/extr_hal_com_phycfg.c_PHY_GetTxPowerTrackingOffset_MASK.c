
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {int TxPowerTrackControl; } ;
struct TYPE_4__ {int * Remnant_OFDMSwingIdx; int Remnant_CCKSwingIdx; TYPE_1__ RFCalibrateInfo; } ;
struct hal_com_data {TYPE_2__ odmpriv; } ;
struct adapter {int dummy; } ;
typedef int s8 ;
typedef TYPE_2__* PDM_ODM_T ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

s8 FUNC_1(struct adapter *VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct hal_com_data *VAR_7 = FUNC_0(VAR_4);
 PDM_ODM_T VAR_8 = &VAR_7->odmpriv;
 s8 VAR_9 = 0;

 if (VAR_8->RFCalibrateInfo.TxPowerTrackControl == 0)
  return VAR_9;

 if ((VAR_6 == VAR_1) || (VAR_6 == VAR_2) || (VAR_6 == VAR_3) || (VAR_6 == VAR_0)) {
  VAR_9 = VAR_8->Remnant_CCKSwingIdx;

 } else {
  VAR_9 = VAR_8->Remnant_OFDMSwingIdx[VAR_5];


 }

 return VAR_9;
}
