
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int usr_dot_11ac_dev_cap_bg; int usr_dot_11ac_dev_cap_a; } ;
struct ieee80211_vht_cap {void* vht_cap_info; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct mwifiex_private *VAR_1,
     struct ieee80211_vht_cap *VAR_2, u8 VAR_3)
{
 struct mwifiex_adapter *VAR_4 = VAR_1->adapter;

 if (VAR_3 & VAR_0)
  VAR_2->vht_cap_info =
    FUNC_0(VAR_4->usr_dot_11ac_dev_cap_a);
 else
  VAR_2->vht_cap_info =
    FUNC_0(VAR_4->usr_dot_11ac_dev_cap_bg);
}
