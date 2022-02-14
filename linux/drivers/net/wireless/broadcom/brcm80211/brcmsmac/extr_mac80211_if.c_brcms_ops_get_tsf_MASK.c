
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct brcms_info* priv; } ;
struct brcms_info {int lock; int wlc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u64 FUNC_3(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct brcms_info *VAR_2 = VAR_0->priv;
 u64 VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = FUNC_0(VAR_2->wlc);
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
