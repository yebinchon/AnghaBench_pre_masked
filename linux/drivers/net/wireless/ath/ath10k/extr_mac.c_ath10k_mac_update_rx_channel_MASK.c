
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_vif_chanctx_switch {TYPE_1__* new_ctx; } ;
struct TYPE_4__ {int * chan; } ;
struct ieee80211_chanctx_conf {TYPE_2__ def; } ;
struct cfg80211_chan_def {int * chan; } ;
struct ath10k {scalar_t__ state; int * rx_channel; int hw; int data_lock; int conf_mutex; } ;
struct TYPE_3__ {struct cfg80211_chan_def def; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int ,int ,struct cfg80211_chan_def**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(struct ath10k *VAR_2,
        struct ieee80211_chanctx_conf *VAR_3,
        struct ieee80211_vif_chanctx_switch *VAR_4,
        int VAR_5)
{
 struct cfg80211_chan_def *VAR_6 = ((void*)0);




 FUNC_3(&VAR_2->conf_mutex);
 FUNC_3(&VAR_2->data_lock);

 FUNC_0(VAR_3 && VAR_4);
 FUNC_0(VAR_4 && !VAR_5);
 FUNC_4();
 if (!VAR_3 && FUNC_1(VAR_2) == 1) {
  FUNC_2(VAR_2->hw,
          VAR_1,
          &VAR_6);

  if (VAR_4)
   VAR_6 = &VAR_4[0].new_ctx->def;

  VAR_2->rx_channel = VAR_6->chan;
 } else if ((VAR_3 && FUNC_1(VAR_2) == 0) ||
     (VAR_3 && (VAR_2->state == VAR_0))) {





  VAR_2->rx_channel = VAR_3->def.chan;
 } else {
  VAR_2->rx_channel = ((void*)0);
 }
 FUNC_5();
}
