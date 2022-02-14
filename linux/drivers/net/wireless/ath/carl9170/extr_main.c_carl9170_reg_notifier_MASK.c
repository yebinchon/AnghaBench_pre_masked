
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct regulatory_request {int dummy; } ;
struct ieee80211_hw {struct ar9170* priv; } ;
struct TYPE_2__ {int regulatory; } ;
struct ar9170 {TYPE_1__ common; } ;


 int FUNC_0 (struct wiphy*,struct regulatory_request*,int *) ;
 struct ieee80211_hw* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static void FUNC_2(struct wiphy *VAR_0,
      struct regulatory_request *VAR_1)
{
 struct ieee80211_hw *VAR_2 = FUNC_1(VAR_0);
 struct ar9170 *VAR_3 = VAR_2->priv;

 FUNC_0(VAR_0, VAR_1, &VAR_3->common.regulatory);
}
