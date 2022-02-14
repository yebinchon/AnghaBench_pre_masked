
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int rf_pwrstate; } ;
struct adapter {TYPE_2__* HalData; TYPE_1__ pwrctrlpriv; } ;
struct TYPE_4__ {int CurAntenna; int bMacPwrCtrlOn; int EfuseUsedBytes; int BasicRateSet; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ) ;

void FUNC_3(struct adapter *VAR_5, u8 VAR_6, u8 *VAR_7)
{
 switch (VAR_6) {
 case 134:
  *((u16 *)(VAR_7)) = VAR_5->HalData->BasicRateSet;

 case 128:
  VAR_7[0] = FUNC_2(VAR_5, VAR_3);
  break;
 case 133:

  VAR_7[0] = (FUNC_0(0) & FUNC_2(VAR_5, VAR_2 + 2)) ? 1 : 0;
  break;
 case 129:
  {

   if (VAR_5->pwrctrlpriv.rf_pwrstate == VAR_4) {


    VAR_7[0] = 1;
   } else {
    u32 VAR_8;

    VAR_8 = FUNC_1(VAR_5, VAR_1);
    VAR_8 &= 0x00070000;
    if (VAR_8)
     VAR_7[0] = 0;
    else
     VAR_7[0] = 1;
   }
  }
  break;
 case 131:
  VAR_7[0] = VAR_5->HalData->CurAntenna;
  break;
 case 130:
  *((u16 *)(VAR_7)) = VAR_5->HalData->EfuseUsedBytes;
  break;
 case 135:
  *VAR_7 = VAR_5->HalData->bMacPwrCtrlOn;
  break;
 case 132:
  *VAR_7 = ((FUNC_1(VAR_5, VAR_0) & 0x0000ff00) == 0) ? 1 : 0;
  break;
 default:
  break;
 }
}
