
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_ds_coalesce_cfg {int num_of_rules; int * rule; } ;
struct mwifiex_adapter {int dummy; } ;
struct cfg80211_coalesce {int n_rules; int * rules; } ;
typedef int coalesce_cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mwifiex_ds_coalesce_cfg*,int ,int) ;
 struct mwifiex_adapter* FUNC_1 (struct wiphy*) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_3 (struct mwifiex_private*,int *,int *) ;
 struct mwifiex_private* FUNC_4 (struct mwifiex_adapter*,int ) ;
 int FUNC_5 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_ds_coalesce_cfg*,int) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_5,
      struct cfg80211_coalesce *VAR_6)
{
 struct mwifiex_adapter *VAR_7 = FUNC_1(VAR_5);
 int VAR_8, VAR_9;
 struct mwifiex_ds_coalesce_cfg VAR_10;
 struct mwifiex_private *VAR_11 =
   FUNC_4(VAR_7, VAR_3);

 FUNC_0(&VAR_10, 0, sizeof(VAR_10));
 if (!VAR_6) {
  FUNC_2(VAR_7, VAR_4,
       "Disable coalesce and reset all previous rules\n");
  return FUNC_5(VAR_11, VAR_2,
     VAR_1, 0,
     &VAR_10, 1);
 }

 VAR_10.num_of_rules = VAR_6->n_rules;
 for (VAR_8 = 0; VAR_8 < VAR_6->n_rules; VAR_8++) {
  VAR_9 = FUNC_3(VAR_11, &VAR_6->rules[VAR_8],
            &VAR_10.rule[VAR_8]);
  if (VAR_9) {
   FUNC_2(VAR_7, VAR_0,
        "Recheck the patterns provided for rule %d\n",
    VAR_8 + 1);
   return VAR_9;
  }
 }

 return FUNC_5(VAR_11, VAR_2,
    VAR_1, 0, &VAR_10, 1);
}
