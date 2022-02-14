
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* rx_mask; } ;
struct ieee80211_ht_cap {TYPE_1__ mcs; } ;



unsigned int FUNC_0(struct ieee80211_ht_cap *VAR_0)
{
 return (VAR_0->mcs.rx_mask[0] << 12) |
        (VAR_0->mcs.rx_mask[1] << 20);
}
