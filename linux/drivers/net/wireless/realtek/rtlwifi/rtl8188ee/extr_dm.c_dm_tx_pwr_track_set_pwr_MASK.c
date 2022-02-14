
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct rtl_phy {TYPE_1__* iqk_matrix; int current_channel; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_dm {int swing_flag_ofdm; int swing_flag_cck; size_t swing_idx_cck; int * swing_idx_ofdm; int cck_inch14; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum pwr_track_control_method { ____Placeholder_pwr_track_control_method } pwr_track_control_method ;
struct TYPE_2__ {int ** value; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int ** VAR_4 ;
 int ** VAR_5 ;
 int FUNC_0 (struct ieee80211_hw*,int ) ;
 int FUNC_1 (struct ieee80211_hw*,int ,size_t,int ,int ) ;
 struct rtl_dm* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_6,
        enum pwr_track_control_method VAR_7,
        u8 VAR_8, u8 VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_3(VAR_6);
 struct rtl_phy *VAR_11 = &VAR_10->phy;
 struct rtl_dm *VAR_12 = FUNC_2(FUNC_3(VAR_6));

 if (VAR_7 == VAR_3) {
  if (VAR_12->swing_flag_ofdm ||
      VAR_12->swing_flag_cck) {
   FUNC_0(VAR_6,
           VAR_11->current_channel);
   VAR_12->swing_flag_ofdm = 0;
   VAR_12->swing_flag_cck = 0;
  }
 } else if (VAR_7 == VAR_0) {
  if (!VAR_12->cck_inch14) {
   FUNC_4(VAR_10, 0xa22,
           VAR_5[VAR_12->swing_idx_cck][0]);
   FUNC_4(VAR_10, 0xa23,
           VAR_5[VAR_12->swing_idx_cck][1]);
   FUNC_4(VAR_10, 0xa24,
           VAR_5[VAR_12->swing_idx_cck][2]);
   FUNC_4(VAR_10, 0xa25,
           VAR_5[VAR_12->swing_idx_cck][3]);
   FUNC_4(VAR_10, 0xa26,
           VAR_5[VAR_12->swing_idx_cck][4]);
   FUNC_4(VAR_10, 0xa27,
           VAR_5[VAR_12->swing_idx_cck][5]);
   FUNC_4(VAR_10, 0xa28,
           VAR_5[VAR_12->swing_idx_cck][6]);
   FUNC_4(VAR_10, 0xa29,
           VAR_5[VAR_12->swing_idx_cck][7]);
  } else {
   FUNC_4(VAR_10, 0xa22,
           VAR_4[VAR_12->swing_idx_cck][0]);
   FUNC_4(VAR_10, 0xa23,
           VAR_4[VAR_12->swing_idx_cck][1]);
   FUNC_4(VAR_10, 0xa24,
           VAR_4[VAR_12->swing_idx_cck][2]);
   FUNC_4(VAR_10, 0xa25,
           VAR_4[VAR_12->swing_idx_cck][3]);
   FUNC_4(VAR_10, 0xa26,
           VAR_4[VAR_12->swing_idx_cck][4]);
   FUNC_4(VAR_10, 0xa27,
           VAR_4[VAR_12->swing_idx_cck][5]);
   FUNC_4(VAR_10, 0xa28,
           VAR_4[VAR_12->swing_idx_cck][6]);
   FUNC_4(VAR_10, 0xa29,
           VAR_4[VAR_12->swing_idx_cck][7]);
  }

  if (VAR_8 == VAR_1) {
   FUNC_1(VAR_6, VAR_12->swing_idx_ofdm[VAR_8],
           VAR_8, VAR_11->iqk_matrix
           [VAR_9].
           value[0][0],
           VAR_11->iqk_matrix
           [VAR_9].
           value[0][1]);
  } else if (VAR_8 == VAR_2) {
   FUNC_1(VAR_6, VAR_12->swing_idx_ofdm[VAR_8],
           VAR_8, VAR_11->iqk_matrix
           [VAR_9].
           value[0][4],
           VAR_11->iqk_matrix
           [VAR_9].
           value[0][5]);
  }
 } else {
  return;
 }
}
