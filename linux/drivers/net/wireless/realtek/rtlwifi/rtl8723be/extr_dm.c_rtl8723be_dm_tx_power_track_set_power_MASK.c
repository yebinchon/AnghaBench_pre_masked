
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct rtl_phy {TYPE_1__* iqk_matrix; int current_channel; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_dm {size_t swing_idx_cck; size_t* swing_idx_ofdm; int cck_inch14; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum pwr_track_control_method { ____Placeholder_pwr_track_control_method } pwr_track_control_method ;
struct TYPE_2__ {int ** value; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;
 int ** VAR_6 ;
 int FUNC_0 (struct ieee80211_hw*,int ) ;
 int FUNC_1 (struct ieee80211_hw*,size_t,size_t,int ,int ) ;
 struct rtl_dm* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_7,
     enum pwr_track_control_method VAR_8,
     u8 VAR_9, u8 VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_3(VAR_7);
 struct rtl_phy *VAR_12 = &VAR_11->phy;
 struct rtl_dm *VAR_13 = FUNC_2(FUNC_3(VAR_7));
 u8 VAR_14 = 36;

 if (VAR_8 == VAR_4) {
  FUNC_0(VAR_7, VAR_12->current_channel);
 } else if (VAR_8 == VAR_0) {
  if (VAR_13->swing_idx_cck >= VAR_1)
   VAR_13->swing_idx_cck = VAR_1 - 1;

  if (!VAR_13->cck_inch14) {
   FUNC_4(VAR_11, 0xa22,
       VAR_6[VAR_13->swing_idx_cck][0]);
   FUNC_4(VAR_11, 0xa23,
       VAR_6[VAR_13->swing_idx_cck][1]);
   FUNC_4(VAR_11, 0xa24,
       VAR_6[VAR_13->swing_idx_cck][2]);
   FUNC_4(VAR_11, 0xa25,
       VAR_6[VAR_13->swing_idx_cck][3]);
   FUNC_4(VAR_11, 0xa26,
       VAR_6[VAR_13->swing_idx_cck][4]);
   FUNC_4(VAR_11, 0xa27,
       VAR_6[VAR_13->swing_idx_cck][5]);
   FUNC_4(VAR_11, 0xa28,
       VAR_6[VAR_13->swing_idx_cck][6]);
   FUNC_4(VAR_11, 0xa29,
       VAR_6[VAR_13->swing_idx_cck][7]);
  } else {
   FUNC_4(VAR_11, 0xa22,
       VAR_5[VAR_13->swing_idx_cck][0]);
   FUNC_4(VAR_11, 0xa23,
       VAR_5[VAR_13->swing_idx_cck][1]);
   FUNC_4(VAR_11, 0xa24,
       VAR_5[VAR_13->swing_idx_cck][2]);
   FUNC_4(VAR_11, 0xa25,
       VAR_5[VAR_13->swing_idx_cck][3]);
   FUNC_4(VAR_11, 0xa26,
       VAR_5[VAR_13->swing_idx_cck][4]);
   FUNC_4(VAR_11, 0xa27,
       VAR_5[VAR_13->swing_idx_cck][5]);
   FUNC_4(VAR_11, 0xa28,
       VAR_5[VAR_13->swing_idx_cck][6]);
   FUNC_4(VAR_11, 0xa29,
       VAR_5[VAR_13->swing_idx_cck][7]);
  }

  if (VAR_9 == VAR_2) {
   if (VAR_13->swing_idx_ofdm[VAR_2] <
       VAR_14)
    VAR_14 =
     VAR_13->swing_idx_ofdm[VAR_2];

   FUNC_1(VAR_7,
    VAR_13->swing_idx_ofdm[VAR_9], VAR_9,
    VAR_12->iqk_matrix[VAR_10].value[0][0],
    VAR_12->iqk_matrix[VAR_10].value[0][1]);
  } else if (VAR_9 == VAR_3) {
   if (VAR_13->swing_idx_ofdm[VAR_3] <
       VAR_14)
    VAR_14 =
     VAR_13->swing_idx_ofdm[VAR_3];

   FUNC_1(VAR_7,
    VAR_13->swing_idx_ofdm[VAR_9], VAR_9,
    VAR_12->iqk_matrix[VAR_10].value[0][4],
    VAR_12->iqk_matrix[VAR_10].value[0][5]);
  }
 } else {
  return;
 }
}
