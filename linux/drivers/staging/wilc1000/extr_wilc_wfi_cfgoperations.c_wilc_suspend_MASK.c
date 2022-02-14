
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct wilc {int suspend_event; } ;
struct cfg80211_wowlan {int dummy; } ;


 scalar_t__ FUNC_0 (struct wilc*) ;
 struct wilc* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_0, struct cfg80211_wowlan *VAR_1)
{
 struct wilc *VAR_2 = FUNC_1(VAR_0);

 if (!VAR_1 && FUNC_0(VAR_2))
  VAR_2->suspend_event = 1;
 else
  VAR_2->suspend_event = 0;

 return 0;
}
