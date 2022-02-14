
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct ieee80211_reg_rule {int flags; } ;
struct ieee80211_channel {int flags; int center_freq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ieee80211_reg_rule const*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct ieee80211_reg_rule* FUNC_2 (struct wiphy*,int ) ;

__attribute__((used)) static void FUNC_3(struct wiphy *VAR_2,
           struct ieee80211_channel *VAR_3)
{
 const struct ieee80211_reg_rule *VAR_4;

 VAR_4 = FUNC_2(VAR_2, FUNC_1(VAR_3->center_freq));
 if (FUNC_0(VAR_4))
  return;

 if (!(VAR_4->flags & VAR_1))
  if (VAR_3->flags & VAR_0)
   VAR_3->flags &= ~VAR_0;
}
