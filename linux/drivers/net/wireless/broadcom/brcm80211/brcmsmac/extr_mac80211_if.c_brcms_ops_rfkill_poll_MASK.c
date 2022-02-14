
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hw {struct brcms_info* priv; } ;
struct brcms_info {TYPE_2__* pub; int lock; int wlc; } ;
struct TYPE_4__ {TYPE_1__* ieee_hw; } ;
struct TYPE_3__ {int wiphy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0)
{
 struct brcms_info *VAR_1 = VAR_0->priv;
 bool VAR_2;

 FUNC_1(&VAR_1->lock);
 VAR_2 = FUNC_0(VAR_1->wlc);
 FUNC_2(&VAR_1->lock);

 FUNC_3(VAR_1->pub->ieee_hw->wiphy, VAR_2);
}
