
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__* swing_idx_ofdm; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct rtl_dm {scalar_t__ swing_idx_cck_base; scalar_t__ swing_idx_cck; scalar_t__* swing_idx_ofdm_base; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rtl_dm* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

void FUNC_2(struct ieee80211_hw *VAR_2,
 u8 VAR_3, u8 *VAR_4, u32 *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_2);
 struct rtl_dm *VAR_7 = FUNC_0(FUNC_1(VAR_2));
 u8 VAR_8 = 0;
 u8 VAR_9 = VAR_7->swing_idx_cck_base;
 u8 VAR_10 = VAR_7->swing_idx_cck;
 u8 VAR_11 = VAR_7->swing_idx_ofdm_base[0];
 u8 VAR_12 = VAR_6->dm.swing_idx_ofdm[VAR_0];

 if (VAR_3 == 0) {
  if (VAR_12 <= VAR_11) {
   *VAR_4 = 1;
   VAR_8 = VAR_11 - VAR_12;
  } else {
   *VAR_4 = 2;
   VAR_8 = VAR_11 - VAR_12;
  }
 } else if (VAR_3 == 1) {
  if (VAR_10 <= VAR_9) {
   *VAR_4 = 1;
   VAR_8 = VAR_9 - VAR_10;
  } else {
   *VAR_4 = 2;
   VAR_8 = VAR_10 - VAR_9;
  }
 }

 if (VAR_8 >= VAR_1 && (*VAR_4 == 1))
  VAR_8 = VAR_1;

 *VAR_5 = VAR_8 | (VAR_8 << 8) | (VAR_8 << 16) |
    (VAR_8 << 24);
}
