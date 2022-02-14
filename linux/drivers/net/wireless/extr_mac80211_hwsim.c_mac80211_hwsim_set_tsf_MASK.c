
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct mac80211_hwsim_data {scalar_t__ bcn_delta; int tsf_offset; int beacon_int; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct mac80211_hwsim_data* priv; } ;
typedef scalar_t__ s64 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct ieee80211_hw*,struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0,
  struct ieee80211_vif *VAR_1, u64 VAR_2)
{
 struct mac80211_hwsim_data *VAR_3 = VAR_0->priv;
 u64 VAR_4 = FUNC_2(VAR_0, VAR_1);
 u32 VAR_5 = VAR_3->beacon_int;
 u64 VAR_6 = FUNC_0(VAR_2 - VAR_4);


 if (VAR_2 > VAR_4) {
  VAR_3->tsf_offset += VAR_6;
  VAR_3->bcn_delta = FUNC_1(VAR_6, VAR_5);
 } else {
  VAR_3->tsf_offset -= VAR_6;
  VAR_3->bcn_delta = -(s64)FUNC_1(VAR_6, VAR_5);
 }
}
