
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pwrctrl_priv {scalar_t__ cpwm; scalar_t__ rpwm; int lock; int alives; scalar_t__ bFwCurrentInPSMode; } ;
struct adapter {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pwrctrl_priv* FUNC_1 (struct adapter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pwrctrl_priv*,int ) ;
 int FUNC_5 (struct adapter*,scalar_t__) ;

s32 FUNC_6(struct adapter *VAR_6)
{
 s32 VAR_7;
 struct pwrctrl_priv *VAR_8;
 u8 VAR_9;

 VAR_7 = VAR_3;
 VAR_8 = FUNC_1(VAR_6);
 VAR_9 = VAR_1;

 FUNC_2(&VAR_8->lock);

 FUNC_4(VAR_8, VAR_0);

 if (VAR_8->bFwCurrentInPSMode) {
  FUNC_0(VAR_5, VAR_4,
     ("rtw_register_cmd_alive: cpwm = 0x%02x alives = 0x%08x\n",
      VAR_8->cpwm, VAR_8->alives));

  if (VAR_8->cpwm < VAR_9) {
   if (VAR_8->cpwm < VAR_1)
    VAR_7 = VAR_2;
   if (VAR_8->rpwm < VAR_9)
    FUNC_5(VAR_6, VAR_9);
  }
 }

 FUNC_3(&VAR_8->lock);

 if (VAR_2 == VAR_7)
  if (VAR_8->cpwm >= VAR_1)
   VAR_7 = VAR_3;

 return VAR_7;
}
