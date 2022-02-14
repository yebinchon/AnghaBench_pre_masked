
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;
struct TYPE_2__ {int cur_dac_swing_on; int pre_dac_swing_on; int cur_dac_swing_lvl; int pre_dac_swing_lvl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct btc_coexist*,int,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct btc_coexist *VAR_3,
       bool VAR_4, bool VAR_5,
       u32 VAR_6)
{
 struct rtl_priv *VAR_7 = VAR_3->adapter;

 FUNC_0(VAR_7, VAR_0, VAR_1,
   "[BTCoex], %s turn DacSwing=%s, dac_swing_lvl=0x%x\n",
   (VAR_4 ? "force to" : ""),
   (VAR_5 ? "ON" : "OFF"), VAR_6);
 VAR_2->cur_dac_swing_on = VAR_5;
 VAR_2->cur_dac_swing_lvl = VAR_6;

 if (!VAR_4) {
  FUNC_0(VAR_7, VAR_0, VAR_1,
    "[BTCoex], bPreDacSwingOn=%d, preDacSwingLvl=0x%x, bCurDacSwingOn=%d, curDacSwingLvl=0x%x\n",
    VAR_2->pre_dac_swing_on,
    VAR_2->pre_dac_swing_lvl,
    VAR_2->cur_dac_swing_on,
    VAR_2->cur_dac_swing_lvl);

  if ((VAR_2->pre_dac_swing_on == VAR_2->cur_dac_swing_on) &&
      (VAR_2->pre_dac_swing_lvl == VAR_2->cur_dac_swing_lvl))
   return;
 }
 FUNC_2(30);
 FUNC_1(VAR_3, VAR_5,
            VAR_6);

 VAR_2->pre_dac_swing_on = VAR_2->cur_dac_swing_on;
 VAR_2->pre_dac_swing_lvl = VAR_2->cur_dac_swing_lvl;
}
