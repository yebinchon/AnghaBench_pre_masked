
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int dummy; } ;
struct ieee80211_hw {struct brcms_info* priv; } ;
struct brcms_info {int lock; int wlc; } ;


 int FUNC_0 (int ,int ,struct ieee80211_tx_queue_params const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1, u16 VAR_2,
    const struct ieee80211_tx_queue_params *VAR_3)
{
 struct brcms_info *VAR_4 = VAR_0->priv;

 FUNC_1(&VAR_4->lock);
 FUNC_0(VAR_4->wlc, VAR_2, VAR_3, 1);
 FUNC_2(&VAR_4->lock);

 return 0;
}
