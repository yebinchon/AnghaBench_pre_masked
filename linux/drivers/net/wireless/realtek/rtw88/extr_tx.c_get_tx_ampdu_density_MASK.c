
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ampdu_density; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; } ;



__attribute__((used)) static u8 FUNC_0(struct ieee80211_sta *VAR_0)
{
 return VAR_0->ht_cap.ampdu_density;
}
