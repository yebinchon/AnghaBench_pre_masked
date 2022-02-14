
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs_tx_column {int dummy; } ;
struct rs_rate {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_sta_vht_cap {int cap; } ;
struct ieee80211_sta_ht_cap {int cap; } ;
struct ieee80211_sta {struct ieee80211_sta_vht_cap vht_cap; struct ieee80211_sta_ht_cap ht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rs_rate*) ;
 scalar_t__ FUNC_1 (struct rs_rate*) ;
 scalar_t__ FUNC_2 (struct rs_rate*) ;
 scalar_t__ FUNC_3 (struct rs_rate*) ;

__attribute__((used)) static bool FUNC_4(struct iwl_mvm *VAR_4, struct ieee80211_sta *VAR_5,
    struct rs_rate *VAR_6,
    const struct rs_tx_column *VAR_7)
{
 struct ieee80211_sta_ht_cap *VAR_8 = &VAR_5->ht_cap;
 struct ieee80211_sta_vht_cap *VAR_9 = &VAR_5->vht_cap;

 if (FUNC_1(VAR_6) && (VAR_8->cap &
        VAR_0))
  return 1;
 if (FUNC_2(VAR_6) && (VAR_8->cap &
        VAR_1))
  return 1;
 if (FUNC_3(VAR_6) && (VAR_9->cap &
        VAR_3))
  return 1;
 if (FUNC_0(VAR_6) && (VAR_9->cap &
        VAR_2))
  return 1;

 return 0;
}
