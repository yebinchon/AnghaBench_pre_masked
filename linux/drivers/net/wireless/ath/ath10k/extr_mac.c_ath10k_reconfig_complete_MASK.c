
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k {scalar_t__ state; int conf_mutex; int hw; } ;
typedef enum ieee80211_reconfig_type { ____Placeholder_ieee80211_reconfig_type } ieee80211_reconfig_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_3,
         enum ieee80211_reconfig_type VAR_4)
{
 struct ath10k *VAR_5 = VAR_3->priv;

 if (VAR_4 != VAR_2)
  return;

 FUNC_2(&VAR_5->conf_mutex);




 if (VAR_5->state == VAR_1) {
  FUNC_0(VAR_5, "device successfully recovered\n");
  VAR_5->state = VAR_0;
  FUNC_1(VAR_5->hw);
 }

 FUNC_3(&VAR_5->conf_mutex);
}
