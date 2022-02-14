
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ bHWPowerdown; } ;
struct adapter {TYPE_1__ pwrctrlpriv; } ;
typedef enum rt_rf_power_state { ____Placeholder_rt_rf_power_state } rt_rf_power_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ,int) ;

enum rt_rf_power_state FUNC_4(struct adapter *VAR_5)
{
 u8 VAR_6;
 enum rt_rf_power_state VAR_7 = VAR_3;

 if (VAR_5->pwrctrlpriv.bHWPowerdown) {
  VAR_6 = FUNC_2(VAR_5, VAR_1);
  FUNC_1("pwrdown, 0x5c(BIT(7))=%02x\n", VAR_6);
  VAR_7 = (VAR_6 & FUNC_0(7)) ? VAR_3 : VAR_4;
 } else {
  FUNC_3(VAR_5, VAR_2, FUNC_2(VAR_5, VAR_2) & ~(FUNC_0(3)));
  VAR_6 = FUNC_2(VAR_5, VAR_0);
  FUNC_1("GPIO_IN=%02x\n", VAR_6);
  VAR_7 = (VAR_6 & FUNC_0(3)) ? VAR_4 : VAR_3;
 }
 return VAR_7;
}
