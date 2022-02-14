
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dig_t {scalar_t__ cursta_cstate; int rssi_val_min; scalar_t__ pre_cck_pd_state; scalar_t__ cur_cck_pd_state; } ;
struct rtl_priv {struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_6);
 struct dig_t *VAR_8 = &VAR_7->dm_digtable;

 if (VAR_8->cursta_cstate == VAR_3) {
  VAR_8->rssi_val_min = FUNC_0(VAR_6);
  if (VAR_8->rssi_val_min > 100)
   VAR_8->rssi_val_min = 100;

  if (VAR_8->pre_cck_pd_state == VAR_1) {
   if (VAR_8->rssi_val_min <= 25)
    VAR_8->cur_cck_pd_state =
        VAR_1;
   else
    VAR_8->cur_cck_pd_state =
        VAR_0;
  } else {
   if (VAR_8->rssi_val_min <= 20)
    VAR_8->cur_cck_pd_state =
        VAR_1;
   else
    VAR_8->cur_cck_pd_state =
        VAR_0;
  }
 } else {
  VAR_8->cur_cck_pd_state = VAR_2;
 }

 if (VAR_8->pre_cck_pd_state != VAR_8->cur_cck_pd_state) {
  if ((VAR_8->cur_cck_pd_state == VAR_1) ||
      (VAR_8->cur_cck_pd_state == VAR_2))
   FUNC_2(VAR_6, VAR_5, VAR_4, 0x83);
  else
   FUNC_2(VAR_6, VAR_5, VAR_4, 0xcd);

  VAR_8->pre_cck_pd_state = VAR_8->cur_cck_pd_state;
 }
}
