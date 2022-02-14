
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_sta_info {int list; scalar_t__ ratr_index; scalar_t__ wireless_mode; } ;
struct TYPE_2__ {int entry_list_lock; } ;
struct rtl_priv {TYPE_1__ locks; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; int addr; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ) ;
 int FUNC_1 (int *) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_2,
    struct ieee80211_vif *VAR_3,
    struct ieee80211_sta *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_2(VAR_2);
 struct rtl_sta_info *VAR_6;

 if (VAR_4) {
  FUNC_0(VAR_5, VAR_0, VAR_1,
    "Remove sta addr is %pM\n", VAR_4->addr);
  VAR_6 = (struct rtl_sta_info *)VAR_4->drv_priv;
  VAR_6->wireless_mode = 0;
  VAR_6->ratr_index = 0;
  FUNC_3(&VAR_5->locks.entry_list_lock);
  FUNC_1(&VAR_6->list);
  FUNC_4(&VAR_5->locks.entry_list_lock);
 }
 return 0;
}
