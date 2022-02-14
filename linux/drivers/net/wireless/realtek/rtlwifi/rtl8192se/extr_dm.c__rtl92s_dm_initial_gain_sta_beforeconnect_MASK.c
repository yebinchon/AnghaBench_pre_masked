
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int* default_initialgain; } ;
struct TYPE_3__ {scalar_t__ rfpwr_state; } ;
struct false_alarm_statistics {int cnt_all; } ;
struct dig_t {scalar_t__ pre_sta_cstate; scalar_t__ cur_sta_cstate; scalar_t__ back_val; scalar_t__ rssi_val; scalar_t__ rx_gain_max; scalar_t__ cur_igvalue; scalar_t__ rx_gain_min; int pre_igvalue; int dig_ext_port_stage; scalar_t__ backoff_enable_flag; } ;
struct rtl_priv {TYPE_2__ phy; TYPE_1__ psc; struct false_alarm_statistics falsealm_cnt; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,int ) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_3(VAR_9);
 struct dig_t *VAR_11 = &VAR_10->dm_digtable;
 struct false_alarm_statistics *VAR_12 = &(VAR_10->falsealm_cnt);
 static u8 VAR_13, VAR_14;
 u8 VAR_15 = 0;

 if ((VAR_11->pre_sta_cstate == VAR_11->cur_sta_cstate) ||
     (VAR_11->cur_sta_cstate == VAR_1)) {
  if (VAR_11->cur_sta_cstate == VAR_1) {
   if (VAR_10->psc.rfpwr_state != VAR_3)
    return;

   if (VAR_11->backoff_enable_flag)
    FUNC_0(VAR_9);
   else
    VAR_11->back_val = VAR_2;

   if ((VAR_11->rssi_val + 10 - VAR_11->back_val) >
    VAR_11->rx_gain_max)
    VAR_11->cur_igvalue =
      VAR_11->rx_gain_max;
   else if ((VAR_11->rssi_val + 10 - VAR_11->back_val)
     < VAR_11->rx_gain_min)
    VAR_11->cur_igvalue =
      VAR_11->rx_gain_min;
   else
    VAR_11->cur_igvalue = VAR_11->rssi_val + 10
     - VAR_11->back_val;

   if (VAR_12->cnt_all > 10000)
    VAR_11->cur_igvalue =
      (VAR_11->cur_igvalue > 0x33) ?
      VAR_11->cur_igvalue : 0x33;

   if (VAR_12->cnt_all > 16000)
    VAR_11->cur_igvalue =
       VAR_11->rx_gain_max;

  } else {

   return;
  }


 } else {

  VAR_11->dig_ext_port_stage = VAR_0;
  FUNC_1(VAR_9, VAR_5);

  VAR_11->back_val = VAR_2;
  VAR_11->cur_igvalue = VAR_10->phy.default_initialgain[0];
  VAR_11->pre_igvalue = 0;
  return;
 }


 if (VAR_11->pre_igvalue != FUNC_2(VAR_9, VAR_7,
        VAR_6))
  VAR_14 = 1;

 if ((VAR_11->pre_igvalue != VAR_11->cur_igvalue) ||
     !VAR_13 || VAR_14) {

  FUNC_1(VAR_9, VAR_4);

  VAR_15 = (u8)VAR_11->cur_igvalue;


  FUNC_4(VAR_9, VAR_7, VAR_6, VAR_15);
  FUNC_4(VAR_9, VAR_8, VAR_6, VAR_15);
  VAR_11->pre_igvalue = VAR_11->cur_igvalue;
  VAR_13 = 1;
  VAR_14 = 0;
 }
}
