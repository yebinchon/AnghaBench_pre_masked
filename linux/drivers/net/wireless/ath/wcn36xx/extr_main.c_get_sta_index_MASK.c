
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wcn36xx_sta {int sta_index; int bss_sta_index; } ;
struct ieee80211_vif {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(struct ieee80211_vif *VAR_1,
          struct wcn36xx_sta *VAR_2)
{
 return VAR_0 == VAR_1->type ?
        VAR_2->bss_sta_index :
        VAR_2->sta_index;
}
