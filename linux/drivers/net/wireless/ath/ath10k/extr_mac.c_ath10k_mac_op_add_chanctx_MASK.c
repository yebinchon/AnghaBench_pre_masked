
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hw {struct ath10k* priv; } ;
struct TYPE_4__ {int width; TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_2__ def; } ;
struct ath10k {int conf_mutex; int data_lock; } ;
struct TYPE_3__ {int center_freq; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,int ,struct ieee80211_chanctx_conf*) ;
 int FUNC_1 (struct ath10k*,struct ieee80211_chanctx_conf*,int *,int ) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct ieee80211_hw *VAR_1,
     struct ieee80211_chanctx_conf *VAR_2)
{
 struct ath10k *VAR_3 = VAR_1->priv;

 FUNC_0(VAR_3, VAR_0,
     "mac chanctx add freq %hu width %d ptr %pK\n",
     VAR_2->def.chan->center_freq, VAR_2->def.width, VAR_2);

 FUNC_4(&VAR_3->conf_mutex);

 FUNC_6(&VAR_3->data_lock);
 FUNC_1(VAR_3, VAR_2, ((void*)0), 0);
 FUNC_7(&VAR_3->data_lock);

 FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 FUNC_5(&VAR_3->conf_mutex);

 return 0;
}
