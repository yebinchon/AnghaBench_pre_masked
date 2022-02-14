
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__* swing_idx_ofdm; scalar_t__* swing_idx_ofdm_base; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct rtl_dm {int* swing_idx_ofdm_base; int* swing_idx_ofdm; scalar_t__ swing_idx_cck; scalar_t__ swing_idx_cck_base; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct rtl_dm* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

void FUNC_2(struct ieee80211_hw *VAR_2,
           u8 VAR_3, u8 *VAR_4,
           u32 *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_2);
 struct rtl_dm *VAR_7 = FUNC_0(FUNC_1(VAR_2));
 u8 VAR_8 = 0;

 if (VAR_3 == 0) {
  if (VAR_6->dm.swing_idx_ofdm[VAR_0] <=
   VAR_6->dm.swing_idx_ofdm_base[VAR_0]) {
   *VAR_4 = 1;
   VAR_8 = VAR_7->swing_idx_ofdm_base[VAR_0] -
     VAR_7->swing_idx_ofdm[VAR_0];
  } else {
   *VAR_4 = 2;
   VAR_8 = VAR_7->swing_idx_ofdm[VAR_0] -
    VAR_7->swing_idx_ofdm_base[VAR_0];
  }
 } else if (VAR_3 == 1) {
  if (VAR_7->swing_idx_cck <= VAR_7->swing_idx_cck_base) {
   *VAR_4 = 1;
   VAR_8 = VAR_7->swing_idx_cck_base -
     VAR_7->swing_idx_cck;
  } else {
   *VAR_4 = 2;
   VAR_8 = VAR_7->swing_idx_cck -
    VAR_7->swing_idx_cck_base;
  }
 }

 if (VAR_8 >= VAR_1 && (*VAR_4 == 1))
  VAR_8 = VAR_1;

 *VAR_5 = VAR_8 | (VAR_8 << 8)|
    (VAR_8 << 16)|
    (VAR_8 << 24);
}
