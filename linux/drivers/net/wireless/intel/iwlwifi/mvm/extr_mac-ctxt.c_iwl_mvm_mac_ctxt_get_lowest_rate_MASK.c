
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {scalar_t__ p2p; } ;
struct ieee80211_tx_info {scalar_t__ band; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

u8 FUNC_0(struct ieee80211_tx_info *VAR_3,
        struct ieee80211_vif *VAR_4)
{
 u8 VAR_5;

 if (VAR_3->band == VAR_2 || VAR_4->p2p)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_0;

 return VAR_5;
}
