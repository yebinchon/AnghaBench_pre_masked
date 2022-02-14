
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wl1271 {TYPE_1__* ops; } ;
struct ieee80211_sta_ht_cap {int dummy; } ;
struct TYPE_2__ {int (* set_peer_cap ) (struct wl1271*,struct ieee80211_sta_ht_cap*,int,int ,int ) ;} ;


 int FUNC_0 (struct wl1271*,struct ieee80211_sta_ht_cap*,int,int ,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct wl1271 *VAR_0,
         struct ieee80211_sta_ht_cap *VAR_1,
         bool VAR_2,
         u32 VAR_3, u8 VAR_4)
{
 if (VAR_0->ops->set_peer_cap)
  return VAR_0->ops->set_peer_cap(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4);

 return 0;
}
