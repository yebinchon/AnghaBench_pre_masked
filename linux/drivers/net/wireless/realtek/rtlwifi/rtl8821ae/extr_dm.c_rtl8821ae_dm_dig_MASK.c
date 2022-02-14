
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int cnt_all; } ;
struct TYPE_4__ {int num_qry_beacon_pkt; } ;
struct TYPE_5__ {TYPE_1__ dbginfo; scalar_t__ one_entry_only; } ;
struct dig_t {int cur_igvalue; int dig_min_0; int media_connect_0; int rssi_val_min; int rx_gain_max; int large_fa_hit; int forbidden_igi; int rx_gain_min; int recover_cnt; } ;
struct rtl_priv {TYPE_3__ falsealm_cnt; TYPE_2__ dm; struct dig_t dm_digtable; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ act_scanning; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_4(VAR_9);
 struct dig_t *VAR_11 = &VAR_10->dm_digtable;
 struct rtl_mac *VAR_12 = FUNC_3(FUNC_4(VAR_9));
 struct rtl_hal *VAR_13 = FUNC_2(FUNC_4(VAR_9));
 u8 VAR_14;
 u8 VAR_15;
 bool VAR_16, VAR_17;
 u8 VAR_18, VAR_19, VAR_20;
 u8 VAR_21 = VAR_11->cur_igvalue;

 FUNC_0(VAR_10, VAR_0, VAR_1, "\n");

 if (VAR_12->act_scanning) {
  FUNC_0(VAR_10, VAR_0, VAR_1,
    "Return: In Scan Progress\n");
  return;
 }


 VAR_14 = VAR_11->dig_min_0;
 VAR_16 = (VAR_12->link_state >= VAR_8) &&
   (!VAR_11->media_connect_0);
 VAR_17 = (VAR_12->link_state < VAR_8) &&
   (VAR_11->media_connect_0);



 VAR_18 = 0x5A;

 if (VAR_13->hw_type != VAR_7)
  VAR_19 = VAR_6;
 else
  VAR_19 = 0x1C;

 VAR_15 = VAR_5;

 if (VAR_12->link_state >= VAR_8) {
  if (VAR_13->hw_type != VAR_7)
   VAR_20 = 20;
  else
   VAR_20 = 10;

  if ((VAR_11->rssi_val_min + VAR_20) > VAR_18)
   VAR_11->rx_gain_max = VAR_18;
  else if ((VAR_11->rssi_val_min + VAR_20) < VAR_19)
   VAR_11->rx_gain_max = VAR_19;
  else
   VAR_11->rx_gain_max =
    VAR_11->rssi_val_min + VAR_20;

  FUNC_0(VAR_10, VAR_0, VAR_1,
    "dm_digtable->rssi_val_min=0x%x,dm_digtable->rx_gain_max = 0x%x\n",
    VAR_11->rssi_val_min,
    VAR_11->rx_gain_max);
  if (VAR_10->dm.one_entry_only) {
   VAR_20 = 0;

   if (VAR_11->rssi_val_min - VAR_20 < VAR_19)
    VAR_14 = VAR_19;
   else if (VAR_11->rssi_val_min -
    VAR_20 > VAR_15)
    VAR_14 = VAR_15;
   else
    VAR_14 =
     VAR_11->rssi_val_min - VAR_20;

   FUNC_0(VAR_10, VAR_0, VAR_1,
     "bOneEntryOnly=TRUE, dig_min_0=0x%x\n",
     VAR_14);
  } else {
   VAR_14 = VAR_19;
  }
 } else {
  VAR_11->rx_gain_max = VAR_18;
  VAR_14 = VAR_19;
  FUNC_0(VAR_10, VAR_0, VAR_1,
    "No Link\n");
 }

 if (VAR_10->falsealm_cnt.cnt_all > 10000) {
  FUNC_0(VAR_10, VAR_0, VAR_1,
    "Abnormally false alarm case.\n");

  if (VAR_11->large_fa_hit != 3)
   VAR_11->large_fa_hit++;
  if (VAR_11->forbidden_igi < VAR_21) {
   VAR_11->forbidden_igi = VAR_21;
   VAR_11->large_fa_hit = 1;
  }

  if (VAR_11->large_fa_hit >= 3) {
   if ((VAR_11->forbidden_igi + 1) >
    VAR_11->rx_gain_max)
    VAR_11->rx_gain_min =
     VAR_11->rx_gain_max;
   else
    VAR_11->rx_gain_min =
     (VAR_11->forbidden_igi + 1);
   VAR_11->recover_cnt = 3600;
  }
 } else {

  if (VAR_11->recover_cnt != 0) {
   VAR_11->recover_cnt--;
  } else {
   if (VAR_11->large_fa_hit < 3) {
    if ((VAR_11->forbidden_igi - 1) <
        VAR_14) {
     VAR_11->forbidden_igi =
      VAR_14;
     VAR_11->rx_gain_min =
      VAR_14;
     FUNC_0(VAR_10, VAR_0, VAR_1,
       "Normal Case: At Lower Bound\n");
    } else {
     VAR_11->forbidden_igi--;
     VAR_11->rx_gain_min =
       (VAR_11->forbidden_igi + 1);
     FUNC_0(VAR_10, VAR_0, VAR_1,
       "Normal Case: Approach Lower Bound\n");
    }
   } else {
    VAR_11->large_fa_hit = 0;
   }
  }
 }
 FUNC_0(VAR_10, VAR_0, VAR_1,
   "pDM_DigTable->LargeFAHit=%d\n",
   VAR_11->large_fa_hit);

 if (VAR_10->dm.dbginfo.num_qry_beacon_pkt < 10)
  VAR_11->rx_gain_min = VAR_19;

 if (VAR_11->rx_gain_min > VAR_11->rx_gain_max)
  VAR_11->rx_gain_min = VAR_11->rx_gain_max;


 if (VAR_12->link_state >= VAR_8) {
  FUNC_0(VAR_10, VAR_0, VAR_1,
    "DIG AfterLink\n");
  if (VAR_16) {
   if (VAR_11->rssi_val_min <= VAR_15)
    VAR_21 = VAR_11->rssi_val_min;
   else
    VAR_21 = VAR_15;
   FUNC_0(VAR_10, VAR_0, VAR_1,
     "First Connect\n");
  } else {
   if (VAR_10->falsealm_cnt.cnt_all > VAR_4)
    VAR_21 = VAR_21 + 4;
   else if (VAR_10->falsealm_cnt.cnt_all > VAR_3)
    VAR_21 = VAR_21 + 2;
   else if (VAR_10->falsealm_cnt.cnt_all < VAR_2)
    VAR_21 = VAR_21 - 2;

   if ((VAR_10->dm.dbginfo.num_qry_beacon_pkt < 10) &&
       (VAR_10->falsealm_cnt.cnt_all < VAR_3)) {
    VAR_21 = VAR_11->rx_gain_min;
    FUNC_0(VAR_10, VAR_0, VAR_1,
      "Beacon is less than 10 and FA is less than 768, IGI GOES TO 0x1E!!!!!!!!!!!!\n");
   }
  }
 } else {
  FUNC_0(VAR_10, VAR_0, VAR_1,
    "DIG BeforeLink\n");
  if (VAR_17) {
   VAR_21 = VAR_11->rx_gain_min;
   FUNC_0(VAR_10, VAR_0, VAR_1,
     "First DisConnect\n");
  } else {



   if (VAR_10->falsealm_cnt.cnt_all > 2000)
    VAR_21 = VAR_21 + 4;
   else if (VAR_10->falsealm_cnt.cnt_all > 600)
    VAR_21 = VAR_21 + 2;
   else if (VAR_10->falsealm_cnt.cnt_all < 300)
    VAR_21 = VAR_21 - 2;

   if (VAR_21 >= 0x3e)
    VAR_21 = 0x3e;

   FUNC_0(VAR_10, VAR_0, VAR_1, "England DIG\n");
  }
 }
 FUNC_0(VAR_10, VAR_0, VAR_1,
   "DIG End Adjust IGI\n");


 if (VAR_21 > VAR_11->rx_gain_max)
  VAR_21 = VAR_11->rx_gain_max;
 if (VAR_21 < VAR_11->rx_gain_min)
  VAR_21 = VAR_11->rx_gain_min;

 FUNC_0(VAR_10, VAR_0, VAR_1,
   "rx_gain_max=0x%x, rx_gain_min=0x%x\n",
  VAR_11->rx_gain_max, VAR_11->rx_gain_min);
 FUNC_0(VAR_10, VAR_0, VAR_1,
   "TotalFA=%d\n", VAR_10->falsealm_cnt.cnt_all);
 FUNC_0(VAR_10, VAR_0, VAR_1,
   "CurIGValue=0x%x\n", VAR_21);

 FUNC_1(VAR_9, VAR_21);
 VAR_11->media_connect_0 =
  ((VAR_12->link_state >= VAR_8) ? 1 : 0);
 VAR_11->dig_min_0 = VAR_14;
}
