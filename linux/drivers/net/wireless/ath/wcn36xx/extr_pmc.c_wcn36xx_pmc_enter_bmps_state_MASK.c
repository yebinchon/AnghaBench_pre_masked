
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_vif {int pw_state; } ;
struct wcn36xx {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wcn36xx*,struct ieee80211_vif*) ;
 struct wcn36xx_vif* FUNC_3 (struct ieee80211_vif*) ;

int FUNC_4(struct wcn36xx *VAR_2,
     struct ieee80211_vif *VAR_3)
{
 int VAR_4 = 0;
 struct wcn36xx_vif *VAR_5 = FUNC_3(VAR_3);

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_4) {
  FUNC_0(VAR_1, "Entered BMPS\n");
  VAR_5->pw_state = VAR_0;
 } else {





  FUNC_1("Can not enter BMPS!\n");
 }
 return VAR_4;
}
