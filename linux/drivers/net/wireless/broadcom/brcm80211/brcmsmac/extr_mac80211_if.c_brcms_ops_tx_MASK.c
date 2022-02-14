
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int * rate_driver_data; } ;
struct ieee80211_tx_control {int sta; } ;
struct ieee80211_hw {struct brcms_info* priv; } ;
struct brcms_info {int lock; TYPE_3__* wlc; TYPE_2__* pub; } ;
struct TYPE_6__ {TYPE_1__* hw; } ;
struct TYPE_5__ {int up; } ;
struct TYPE_4__ {int d11core; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,struct sk_buff*,struct ieee80211_hw*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_0,
    struct ieee80211_tx_control *VAR_1,
    struct sk_buff *VAR_2)
{
 struct brcms_info *VAR_3 = VAR_0->priv;
 struct ieee80211_tx_info *VAR_4 = FUNC_0(VAR_2);

 FUNC_4(&VAR_3->lock);
 if (!VAR_3->pub->up) {
  FUNC_2(VAR_3->wlc->hw->d11core, "ops->tx called while down\n");
  FUNC_3(VAR_2);
  goto done;
 }
 if (FUNC_1(VAR_3->wlc, VAR_2, VAR_0))
  VAR_4->rate_driver_data[0] = VAR_1->sta;
 done:
 FUNC_5(&VAR_3->lock);
}
