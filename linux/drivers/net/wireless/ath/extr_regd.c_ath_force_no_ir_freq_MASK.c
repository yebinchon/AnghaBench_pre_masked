
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wiphy {int dummy; } ;
struct ieee80211_channel {int dummy; } ;


 int FUNC_0 (struct ieee80211_channel*) ;
 struct ieee80211_channel* FUNC_1 (struct wiphy*,int ) ;

__attribute__((used)) static void FUNC_2(struct wiphy *VAR_0, u16 VAR_1)
{
 struct ieee80211_channel *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2)
  return;

 FUNC_0(VAR_2);
}
