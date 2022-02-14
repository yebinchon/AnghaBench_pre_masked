
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;
struct iwl_mvm {int hw; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (int ,struct ieee80211_sta*,struct sk_buff*,struct napi_struct*) ;
 scalar_t__ FUNC_1 (struct iwl_mvm*,struct sk_buff*,int,struct ieee80211_sta*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_0,
         struct napi_struct *VAR_1,
         struct sk_buff *VAR_2, int VAR_3,
         struct ieee80211_sta *VAR_4,
         bool VAR_5)
{
 if (FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4))
  FUNC_2(VAR_2);
 else
  FUNC_0(VAR_0->hw, VAR_4, VAR_2, VAR_1);
}
