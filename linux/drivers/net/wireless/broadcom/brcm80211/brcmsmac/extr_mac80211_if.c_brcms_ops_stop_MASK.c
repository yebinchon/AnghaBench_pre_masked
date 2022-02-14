
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_hw {struct brcms_info* priv; } ;
struct brcms_info {int lock; TYPE_2__* wlc; } ;
struct TYPE_7__ {int bus; } ;
struct TYPE_6__ {TYPE_1__* hw; } ;
struct TYPE_5__ {TYPE_3__* d11core; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct brcms_info*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_0)
{
 struct brcms_info *VAR_1 = VAR_0->priv;
 int VAR_2;

 FUNC_4(VAR_0);

 if (VAR_1->wlc == ((void*)0))
  return;

 FUNC_5(&VAR_1->lock);
 VAR_2 = FUNC_1(VAR_1->wlc->hw->d11core);
 FUNC_6(&VAR_1->lock);
 if (!VAR_2) {
  FUNC_3(VAR_1->wlc->hw->d11core,
     "wl: brcms_ops_stop: chipmatch failed\n");
  return;
 }

 FUNC_0(VAR_1->wlc->hw->d11core->bus, 0);


 FUNC_5(&VAR_1->lock);
 FUNC_2(VAR_1);
 FUNC_6(&VAR_1->lock);
}
