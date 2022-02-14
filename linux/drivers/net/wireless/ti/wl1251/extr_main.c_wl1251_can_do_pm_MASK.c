
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int monitor_present; } ;
struct ieee80211_conf {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct ieee80211_conf *VAR_1, struct wl1251 *VAR_2)
{
 return (VAR_1->flags & VAR_0) && !VAR_2->monitor_present;
}
