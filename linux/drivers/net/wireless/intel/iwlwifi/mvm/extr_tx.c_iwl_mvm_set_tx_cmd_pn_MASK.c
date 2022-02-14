
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_key_conf {int keyidx; int tx_pn; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct ieee80211_tx_info *VAR_0,
      u8 *VAR_1)
{
 struct ieee80211_key_conf *VAR_2 = VAR_0->control.hw_key;
 u64 VAR_3;

 VAR_3 = FUNC_0(&VAR_2->tx_pn);
 VAR_1[0] = VAR_3;
 VAR_1[2] = 0;
 VAR_1[3] = 0x20 | (VAR_2->keyidx << 6);
 VAR_1[1] = VAR_3 >> 8;
 VAR_1[4] = VAR_3 >> 16;
 VAR_1[5] = VAR_3 >> 24;
 VAR_1[6] = VAR_3 >> 32;
 VAR_1[7] = VAR_3 >> 40;
}
