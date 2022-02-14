
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; } ;
struct dig_t {scalar_t__ cursta_cstate; scalar_t__ pre_cck_pd_state; int min_undec_pwdb_for_dm; scalar_t__ cur_cck_pd_state; } ;
struct rtl_priv {TYPE_1__ rtlhal; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,char*) ;
 int FUNC_2 (struct ieee80211_hw*,unsigned long*) ;
 int FUNC_3 (struct ieee80211_hw*,unsigned long*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_4(VAR_7);
 struct dig_t *VAR_9 = &VAR_8->dm_digtable;
 unsigned long VAR_10 = 0;

 if (VAR_9->cursta_cstate == VAR_4) {
  if (VAR_9->pre_cck_pd_state == VAR_1) {
   if (VAR_9->min_undec_pwdb_for_dm <= 25)
    VAR_9->cur_cck_pd_state =
        VAR_1;
   else
    VAR_9->cur_cck_pd_state =
        VAR_0;
  } else {
   if (VAR_9->min_undec_pwdb_for_dm <= 20)
    VAR_9->cur_cck_pd_state =
        VAR_1;
   else
    VAR_9->cur_cck_pd_state =
        VAR_0;
  }
 } else {
  VAR_9->cur_cck_pd_state = VAR_1;
 }
 if (VAR_9->pre_cck_pd_state != VAR_9->cur_cck_pd_state) {
  if (VAR_9->cur_cck_pd_state == VAR_1) {
   FUNC_2(VAR_7, &VAR_10);
   FUNC_5(VAR_7, VAR_6, VAR_5, 0x83);
   FUNC_3(VAR_7, &VAR_10);
  } else {
   FUNC_2(VAR_7, &VAR_10);
   FUNC_5(VAR_7, VAR_6, VAR_5, 0xcd);
   FUNC_3(VAR_7, &VAR_10);
  }
  VAR_9->pre_cck_pd_state = VAR_9->cur_cck_pd_state;
 }
 FUNC_1(VAR_8, VAR_2, VAR_3, "CurSTAConnectState=%s\n",
   VAR_9->cursta_cstate == VAR_4 ?
   "DIG_STA_CONNECT " : "DIG_STA_DISCONNECT");
 FUNC_1(VAR_8, VAR_2, VAR_3, "CCKPDStage=%s\n",
   VAR_9->cur_cck_pd_state == VAR_1 ?
   "Low RSSI " : "High RSSI ");
 FUNC_1(VAR_8, VAR_2, VAR_3, "is92d single phy =%x\n",
   FUNC_0(VAR_8->rtlhal.version));

}
