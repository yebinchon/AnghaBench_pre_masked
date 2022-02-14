
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
struct wil6210_priv {struct cfg80211_chan_def monitor_chandef; } ;


 struct wil6210_priv* FUNC_0 (struct wiphy*) ;

__attribute__((used)) static int FUNC_1(struct wiphy *VAR_0,
        struct cfg80211_chan_def *VAR_1)
{
 struct wil6210_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_2->monitor_chandef = *VAR_1;

 return 0;
}
