
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int cnt_cck_fail; } ;
struct TYPE_3__ {scalar_t__ link_state; } ;
struct dig_t {int rssi_val_min; int cur_cck_cca_thres; int pre_cck_cca_thres; } ;
struct rtl_priv {TYPE_2__ falsealm_cnt; TYPE_1__ mac80211; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_5);
 struct dig_t *VAR_7 = &VAR_6->dm_digtable;
 u8 VAR_8;

 if (VAR_6->mac80211.link_state >= VAR_2) {
  if (VAR_7->rssi_val_min > 25) {
   VAR_8 = 0xcd;
  } else if ((VAR_7->rssi_val_min <= 25) &&
      (VAR_7->rssi_val_min > 10)) {
   VAR_8 = 0x83;
  } else {
   if (VAR_6->falsealm_cnt.cnt_cck_fail > 1000)
    VAR_8 = 0x83;
   else
    VAR_8 = 0x40;
  }
 } else {
  if (VAR_6->falsealm_cnt.cnt_cck_fail > 1000)
   VAR_8 = 0x83;
  else
   VAR_8 = 0x40;
 }

 if (VAR_7->cur_cck_cca_thres != VAR_8)
  FUNC_2(VAR_5, VAR_4, VAR_3, VAR_8);

 VAR_7->pre_cck_cca_thres = VAR_7->cur_cck_cca_thres;
 VAR_7->cur_cck_cca_thres = VAR_8;
 FUNC_0(VAR_6, VAR_0, VAR_1,
   "CCK cca thresh hold =%x\n", VAR_7->cur_cck_cca_thres);
}
