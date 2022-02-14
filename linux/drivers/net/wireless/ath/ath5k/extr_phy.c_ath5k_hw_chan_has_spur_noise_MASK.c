
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_channel {int center_freq; } ;
struct ath5k_hw {scalar_t__ ah_radio; int ah_mac_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

bool
FUNC_0(struct ath5k_hw *VAR_4,
    struct ieee80211_channel *VAR_5)
{
 u8 VAR_6;

 if ((VAR_4->ah_radio == VAR_1) ||
 (VAR_4->ah_radio == VAR_2) ||
 (VAR_4->ah_radio == VAR_0) ||
 (VAR_4->ah_mac_version == (VAR_3 >> 4)))
  VAR_6 = 40;
 else
  VAR_6 = 32;

 if ((VAR_5->center_freq % VAR_6 != 0) &&
 ((VAR_5->center_freq % VAR_6 < 10) ||
 (VAR_5->center_freq % VAR_6 > 22)))
  return 1;
 else
  return 0;
}
