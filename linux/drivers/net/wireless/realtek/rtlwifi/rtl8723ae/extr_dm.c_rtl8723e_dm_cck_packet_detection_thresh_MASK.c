
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cnt_cck_fail; } ;
struct dig_t {scalar_t__ cursta_cstate; int rssi_val_min; scalar_t__ pre_cck_pd_state; scalar_t__ cur_cck_pd_state; scalar_t__ cur_cck_fa_state; scalar_t__ pre_cck_fa_state; } ;
struct rtl_priv {TYPE_1__ falsealm_cnt; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_2(VAR_12);
 struct dig_t *VAR_14 = &VAR_13->dm_digtable;

 if (VAR_14->cursta_cstate == VAR_7) {
  VAR_14->rssi_val_min = FUNC_1(VAR_12);

  if (VAR_14->pre_cck_pd_state == VAR_3) {
   if (VAR_14->rssi_val_min <= 25)
    VAR_14->cur_cck_pd_state =
        VAR_3;
   else
    VAR_14->cur_cck_pd_state =
        VAR_2;
  } else {
   if (VAR_14->rssi_val_min <= 20)
    VAR_14->cur_cck_pd_state =
        VAR_3;
   else
    VAR_14->cur_cck_pd_state =
        VAR_2;
  }
 } else {
  VAR_14->cur_cck_pd_state = VAR_4;
 }

 if (VAR_14->pre_cck_pd_state != VAR_14->cur_cck_pd_state) {
  if (VAR_14->cur_cck_pd_state == VAR_3) {
   if (VAR_13->falsealm_cnt.cnt_cck_fail > 800)
    VAR_14->cur_cck_fa_state =
        VAR_0;
   else
    VAR_14->cur_cck_fa_state =
        VAR_1;
   if (VAR_14->pre_cck_fa_state !=
       VAR_14->cur_cck_fa_state) {
    if (VAR_14->cur_cck_fa_state ==
        VAR_1)
     FUNC_3(VAR_12, VAR_10, VAR_9,
            0x83);
    else
     FUNC_3(VAR_12, VAR_10, VAR_9,
            0xcd);

    VAR_14->pre_cck_fa_state =
        VAR_14->cur_cck_fa_state;
   }

   FUNC_3(VAR_12, VAR_11, VAR_8, 0x40);

  } else {
   FUNC_3(VAR_12, VAR_10, VAR_9, 0xcd);
   FUNC_3(VAR_12, VAR_11, VAR_8, 0x47);
   VAR_14->pre_cck_fa_state = 0;
   VAR_14->cur_cck_fa_state = 0;

  }
  VAR_14->pre_cck_pd_state = VAR_14->cur_cck_pd_state;
 }

 FUNC_0(VAR_13, VAR_5, VAR_6,
   "CCKPDStage=%x\n", VAR_14->cur_cck_pd_state);

}
