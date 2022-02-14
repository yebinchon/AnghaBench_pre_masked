
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct iwl_mvm*) ;

__attribute__((used)) static bool FUNC_4(struct ieee80211_hw *VAR_1,
          struct sk_buff *VAR_2,
          struct sk_buff *VAR_3)
{
 struct iwl_mvm *VAR_4 = FUNC_0(VAR_1);


 if (VAR_3->protocol != FUNC_1(VAR_0))
  return 0;

 if (!FUNC_3(VAR_4))
  return 1;

 return FUNC_2(VAR_3) == FUNC_2(VAR_2);
}
