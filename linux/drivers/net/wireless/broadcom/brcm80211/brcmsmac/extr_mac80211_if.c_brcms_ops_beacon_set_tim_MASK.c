
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct brcms_info* priv; } ;
struct brcms_info {int lock; TYPE_3__* wlc; } ;
struct TYPE_6__ {TYPE_2__* vif; } ;
struct TYPE_4__ {int dtim_period; } ;
struct TYPE_5__ {TYPE_1__ bss_conf; } ;


 int FUNC_0 (TYPE_3__*,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (struct ieee80211_hw*,TYPE_2__*,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_0,
     struct ieee80211_sta *VAR_1, bool VAR_2)
{
 struct brcms_info *VAR_3 = VAR_0->priv;
 struct sk_buff *VAR_4 = ((void*)0);
 u16 VAR_5 = 0;

 FUNC_2(&VAR_3->lock);
 if (VAR_3->wlc->vif)
  VAR_4 = FUNC_1(VAR_0, VAR_3->wlc->vif,
        &VAR_5, ((void*)0));
 if (VAR_4)
  FUNC_0(VAR_3->wlc, VAR_4, VAR_5,
           VAR_3->wlc->vif->bss_conf.dtim_period);
 FUNC_3(&VAR_3->lock);

 return 0;
}
