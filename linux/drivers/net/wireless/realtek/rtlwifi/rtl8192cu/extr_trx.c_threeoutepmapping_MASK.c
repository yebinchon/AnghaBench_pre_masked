
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct rtl_ep_map {int* ep_mapping; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_9, bool VAR_10,
          struct rtl_ep_map *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_1(VAR_9);

 if (VAR_10) {
  FUNC_0(VAR_12, VAR_0, VAR_1,
    "USB 3EP Setting for WMM.....\n");
  VAR_11->ep_mapping[VAR_3] = 5;
  VAR_11->ep_mapping[VAR_4] = 3;
  VAR_11->ep_mapping[VAR_7] = 3;
  VAR_11->ep_mapping[VAR_8] = 2;
  VAR_11->ep_mapping[VAR_6] = 2;
  VAR_11->ep_mapping[VAR_2] = 2;
  VAR_11->ep_mapping[VAR_5] = 2;
 } else {
  FUNC_0(VAR_12, VAR_0, VAR_1,
    "USB 3EP Setting for typical.....\n");
  VAR_11->ep_mapping[VAR_3] = 5;
  VAR_11->ep_mapping[VAR_4] = 5;
  VAR_11->ep_mapping[VAR_7] = 3;
  VAR_11->ep_mapping[VAR_8] = 2;
  VAR_11->ep_mapping[VAR_6] = 2;
  VAR_11->ep_mapping[VAR_2] = 2;
  VAR_11->ep_mapping[VAR_5] = 2;
 }
}
