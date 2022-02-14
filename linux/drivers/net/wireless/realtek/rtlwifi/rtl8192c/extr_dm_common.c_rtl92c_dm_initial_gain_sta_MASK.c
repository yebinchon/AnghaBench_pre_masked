
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dig_t {scalar_t__ presta_cstate; scalar_t__ cursta_cstate; int rssi_val_min; int cur_igvalue; scalar_t__ pre_igvalue; int back_val; int dig_ext_port_stage; } ;
struct rtl_priv {struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_4(VAR_7);
 struct dig_t *VAR_9 = &VAR_8->dm_digtable;

 FUNC_0(VAR_8, VAR_0, VAR_1,
   "presta_cstate = %x, cursta_cstate = %x\n",
   VAR_9->presta_cstate, VAR_9->cursta_cstate);
 if (VAR_9->presta_cstate == VAR_9->cursta_cstate ||
     VAR_9->cursta_cstate == VAR_3 ||
     VAR_9->cursta_cstate == VAR_4) {
  if (VAR_9->cursta_cstate != VAR_5) {
   VAR_9->rssi_val_min =
       FUNC_2(VAR_7);
   if (VAR_9->rssi_val_min > 100)
    VAR_9->rssi_val_min = 100;
   FUNC_1(VAR_7);
  }
 } else {
  VAR_9->rssi_val_min = 0;
  VAR_9->dig_ext_port_stage = VAR_2;
  VAR_9->back_val = VAR_6;
  VAR_9->cur_igvalue = 0x20;
  VAR_9->pre_igvalue = 0;
  FUNC_3(VAR_7);
 }
}
