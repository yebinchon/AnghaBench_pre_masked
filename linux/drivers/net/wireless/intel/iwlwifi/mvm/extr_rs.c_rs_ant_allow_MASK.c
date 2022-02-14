
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs_tx_column {int ant; } ;
struct rs_rate {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,int ) ;

__attribute__((used)) static bool FUNC_1(struct iwl_mvm *VAR_0, struct ieee80211_sta *VAR_1,
    struct rs_rate *VAR_2,
    const struct rs_tx_column *VAR_3)
{
 return FUNC_0(VAR_0, VAR_3->ant);
}
