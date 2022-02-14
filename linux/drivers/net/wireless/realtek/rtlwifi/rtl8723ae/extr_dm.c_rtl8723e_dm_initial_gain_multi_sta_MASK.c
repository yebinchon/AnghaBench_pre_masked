
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {long entry_min_undec_sm_pwdb; } ;
struct dig_t {scalar_t__ cursta_cstate; scalar_t__ dig_ext_port_stage; int cur_igvalue; scalar_t__ curmultista_cstate; long rssi_lowthresh; long rssi_highthresh; } ;
struct rtl_priv {TYPE_1__ dm; struct dig_t dm_digtable; } ;
struct rtl_mac {scalar_t__ opmode; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_9)
{
 static u8 VAR_10;
 struct rtl_priv *VAR_11 = FUNC_4(VAR_9);
 struct rtl_mac *VAR_12 = FUNC_3(FUNC_4(VAR_9));
 struct dig_t *VAR_13 = &VAR_11->dm_digtable;
 long VAR_14 = VAR_11->dm.entry_min_undec_sm_pwdb;
 bool VAR_15 = 0;

 if (VAR_12->opmode == VAR_8)
  VAR_15 = 1;

 if (!VAR_15 || (VAR_13->cursta_cstate != VAR_7)) {
  VAR_10 = 0;
  VAR_13->dig_ext_port_stage = VAR_5;
  return;
 } else if (!VAR_10) {
  VAR_10 = 1;
  VAR_13->dig_ext_port_stage = VAR_2;
  VAR_13->cur_igvalue = 0x20;
  FUNC_1(VAR_9);
 }

 if (VAR_13->curmultista_cstate == VAR_6) {
  if ((VAR_14 < VAR_13->rssi_lowthresh) &&
      (VAR_13->dig_ext_port_stage != VAR_3)) {

   if (VAR_13->dig_ext_port_stage ==
       VAR_4) {
    VAR_13->cur_igvalue = 0x20;
    FUNC_1(VAR_9);
   }

   VAR_13->dig_ext_port_stage = VAR_3;
  } else if (VAR_14 > VAR_13->rssi_highthresh) {
   VAR_13->dig_ext_port_stage = VAR_4;
   FUNC_2(VAR_9);
  }
 } else if (VAR_13->dig_ext_port_stage != VAR_2) {
  VAR_13->dig_ext_port_stage = VAR_2;
  VAR_13->cur_igvalue = 0x20;
  FUNC_1(VAR_9);
 }

 FUNC_0(VAR_11, VAR_0, VAR_1,
   "curmultista_cstate = %x dig_ext_port_stage %x\n",
   VAR_13->curmultista_cstate,
   VAR_13->dig_ext_port_stage);
}
