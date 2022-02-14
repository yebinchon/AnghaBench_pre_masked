
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_vif {scalar_t__ pw_state; } ;
struct wcn36xx {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wcn36xx*,struct ieee80211_vif*) ;
 struct wcn36xx_vif* FUNC_2 (struct ieee80211_vif*) ;

int FUNC_3(struct wcn36xx *VAR_4,
    struct ieee80211_vif *VAR_5)
{
 struct wcn36xx_vif *VAR_6 = FUNC_2(VAR_5);

 if (VAR_1 != VAR_6->pw_state) {

  FUNC_0(VAR_2,
       "Not in BMPS mode, no need to exit\n");
  return -VAR_0;
 }
 FUNC_1(VAR_4, VAR_5);
 VAR_6->pw_state = VAR_3;
 return 0;
}
