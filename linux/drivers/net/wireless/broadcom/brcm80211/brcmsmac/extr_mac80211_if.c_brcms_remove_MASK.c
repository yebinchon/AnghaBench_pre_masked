
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hw {struct brcms_info* priv; } ;
struct brcms_info {TYPE_2__* pub; scalar_t__ wlc; } ;
struct bcma_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ieee_hw; } ;
struct TYPE_3__ {int wiphy; } ;


 struct ieee80211_hw* FUNC_0 (struct bcma_device*) ;
 int FUNC_1 (struct bcma_device*,int *) ;
 int FUNC_2 (struct brcms_info*) ;
 int FUNC_3 (struct brcms_info*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct bcma_device *VAR_0)
{
 struct ieee80211_hw *VAR_1 = FUNC_0(VAR_0);
 struct brcms_info *VAR_2 = VAR_1->priv;

 if (VAR_2->wlc) {
  FUNC_3(VAR_2);
  FUNC_6(VAR_2->pub->ieee_hw->wiphy, 0);
  FUNC_7(VAR_2->pub->ieee_hw->wiphy);
  FUNC_5(VAR_1);
 }

 FUNC_2(VAR_2);

 FUNC_1(VAR_0, ((void*)0));
 FUNC_4(VAR_1);
}
