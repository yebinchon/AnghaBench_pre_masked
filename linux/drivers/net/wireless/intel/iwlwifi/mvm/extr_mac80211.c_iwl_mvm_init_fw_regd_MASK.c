
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_mvm {int mcc_src; TYPE_1__* hw; } ;
struct ieee80211_regdomain {int alpha2; } ;
typedef enum iwl_mcc_source { ____Placeholder_iwl_mcc_source } iwl_mcc_source ;
struct TYPE_5__ {int regd; } ;
struct TYPE_4__ {TYPE_2__* wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ieee80211_regdomain*) ;
 struct ieee80211_regdomain* FUNC_1 (struct iwl_mvm*,int *) ;
 struct ieee80211_regdomain* FUNC_2 (TYPE_2__*,int ,int,int*) ;
 scalar_t__ FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct ieee80211_regdomain*) ;
 int FUNC_5 (TYPE_2__*,struct ieee80211_regdomain*) ;
 struct ieee80211_regdomain* FUNC_6 (int ) ;

int FUNC_7(struct iwl_mvm *VAR_2)
{
 enum iwl_mcc_source VAR_3;
 struct ieee80211_regdomain *VAR_4;
 int VAR_5;
 bool VAR_6;
 const struct ieee80211_regdomain *VAR_7 =
   FUNC_6(VAR_2->hw->wiphy->regd);

 if (!VAR_7)
  return -VAR_1;


 VAR_3 = VAR_2->mcc_src;
 if (FUNC_3(VAR_2)) {

  VAR_4 = FUNC_1(VAR_2, ((void*)0));
  if (!FUNC_0(VAR_4))
   FUNC_4(VAR_4);
 }


 VAR_4 = FUNC_2(VAR_2->hw->wiphy, VAR_7->alpha2, VAR_3,
         &VAR_6);
 if (FUNC_0(VAR_4))
  return -VAR_0;


 if (VAR_6)
  VAR_5 = FUNC_5(VAR_2->hw->wiphy, VAR_4);
 else
  VAR_5 = 0;

 FUNC_4(VAR_4);
 return VAR_5;
}
