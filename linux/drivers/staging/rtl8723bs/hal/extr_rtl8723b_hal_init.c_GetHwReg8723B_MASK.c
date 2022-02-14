
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int BTEfuseUsedPercentage; int BTEfuseUsedBytes; } ;
struct hal_com_data {int EfuseUsedPercentage; int EfuseUsedBytes; int bMacPwrCtrlOn; TYPE_1__ EfuseHal; } ;
struct adapter {int bSurpriseRemoved; } ;
struct TYPE_4__ {int rf_pwrstate; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,int,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_3 (struct adapter*) ;
 int VAR_10 ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct adapter*,int) ;

void FUNC_7(struct adapter *VAR_11, u8 VAR_12, u8 *VAR_13)
{
 struct hal_com_data *VAR_14 = FUNC_1(VAR_11);
 u8 VAR_15;
 u16 VAR_16;

 switch (VAR_12) {
 case 129:
  *VAR_13 = FUNC_6(VAR_11, VAR_5);
  break;

 case 138:
  {

   VAR_15 = FUNC_6(VAR_11, VAR_4+2);
   *VAR_13 = (FUNC_0(0) & VAR_15) ? 1 : 0;
  }
  break;

 case 132:
  {

   u32 VAR_17;

   if (
    VAR_11->bSurpriseRemoved ||
    (FUNC_3(VAR_11)->rf_pwrstate == VAR_10)
   ) {


    *VAR_13 = 1;
   } else {
    VAR_17 = FUNC_5(VAR_11, VAR_2);
    VAR_17 &= 0x00070000;
    if (VAR_17)
     *VAR_13 = 0;
    else
     *VAR_13 = 1;
   }
  }
  break;

 case 133:
  *VAR_13 = VAR_14->EfuseUsedPercentage;
  break;

 case 134:
  *((u16 *)VAR_13) = VAR_14->EfuseUsedBytes;
  break;

 case 135:



  break;

 case 136:



  *((u16 *)VAR_13) = VAR_1;

  break;

 case 139:
  *VAR_13 = VAR_14->bMacPwrCtrlOn;
  break;
 case 137:
  VAR_16 = FUNC_4(VAR_11, VAR_6);
  *VAR_13 = (VAR_16 & FUNC_0(10)) ? 1:0;
  break;
 default:
  FUNC_2(VAR_11, VAR_12, VAR_13);
  break;
 }
}
